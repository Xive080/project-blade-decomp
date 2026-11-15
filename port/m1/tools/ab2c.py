#!/usr/bin/env python3
# SPDX-License-Identifier: AGPL-3.0-or-later
"""ab2c.py - traductor de ensamblador MWCC (src/matched/f_XXXXXXXX.c, bloque `asm`) a C portable.

Escrito para el hito M1: las funciones asm byte-match (func_001334b0, func_001e9810,
func_001e8650) no compilan en el host. Este script lee el TEXTO del repo (mnemonicos y
`.word 0x...` de src/matched), decodifica los .word y emite C que ejecuta las mismas
instrucciones sobre registros u64 (+ mitad alta de 128 bits para lq/sq/MMI) y la
memoria guest de m1_gmem.h. No lee el ELF ni usa codigo de terceros (ni PS2Recomp, GPLv3).

Convenciones:
  - Cada instruccion con su ranura de retardo: la ranura se ejecuta ANTES del salto/llamada.
  - jal func_X: llama al simbolo `func_X` con a0..a3 (enteros de 64 bits); v0 = retorno
    extendido en signo de 32 bits. Los argumentos que son punteros a datos (PTR_ARGS)
    se traducen de direccion guest a puntero del host, porque el destino es C del host.
  - jalr ra,reg: m1_callg(direccion guest, a0..a3).
  - jr reg (no ra): salto por tabla; se emite un switch sobre todas las instrucciones.
  - f12 se pasa como float solo donde PROTOS lo dice (3 llamadas de func_001334b0).
Uso: python3 -I port/m1/tools/ab2c.py 001334b0 001e9810 001e8650   (escribe port/m1/ported/)
"""
import re
import sys
from pathlib import Path

ROOT = Path(__file__).resolve().parents[3]
SRC = ROOT / "src" / "matched"
OUT = ROOT / "port" / "m1" / "ported"

REGS = ["zero", "at", "v0", "v1", "a0", "a1", "a2", "a3", "t0", "t1", "t2", "t3", "t4", "t5", "t6", "t7",
        "s0", "s1", "s2", "s3", "s4", "s5", "s6", "s7", "t8", "t9", "k0", "k1", "gp", "sp", "fp", "ra"]
RN = {n: i for i, n in enumerate(REGS)}
RN["s8"] = 30

# argumentos que son punteros del host en el destino (indices de a0..a3)
PTR_ARGS = {0x101848: [0], 0x101b30: [0]}
# llamadas con argumentos float: (tipos de parametro en orden; i = entero a0.., f = f12..)
PROTOS = {0x1a7e80: "void(int,float)", 0x1a81b0: "void(float)", 0x1a85c0: "void(float)"}


BRANCH_MN = ("b", "beqz", "bnez", "beq", "bne", "bgez", "bgtz", "blez", "bltz")


def sx(v, bits):
    v &= (1 << bits) - 1
    return v - (1 << bits) if v >> (bits - 1) else v


def decode_word(w, addr):
    """.word -> (mnemonico, operandos como en el texto) o None."""
    op = w >> 26
    rs, rt, rd, sa, fn = (w >> 21) & 31, (w >> 16) & 31, (w >> 11) & 31, (w >> 6) & 31, w & 63
    imm = w & 0xffff
    R = REGS
    if op in (4, 5):      # beq/bne con desplazamiento: destino como rotulo sintetico
        return ("beq" if op == 4 else "bne"), [R[rs], R[rt], "L%x" % (addr + 4 + (sx(imm, 16) << 2))]
    if op == 9:
        return "addiu", [R[rt], R[rs], str(sx(imm, 16))]
    if op == 15:
        return "lui", [R[rt], hex(imm)]
    if op in (30, 31, 33, 35, 36, 37, 40, 41, 43, 55, 63):
        m = {30: "lq", 31: "sq", 33: "lh", 35: "lw", 36: "lbu", 37: "lhu", 40: "sb", 41: "sh", 43: "sw", 55: "ld", 63: "sd"}[op]
        return m, [R[rt], "%d(%s)" % (sx(imm, 16), R[rs])]
    if op == 49:
        return "lwc1", ["f%d" % rt, "%d(%s)" % (sx(imm, 16), R[rs])]
    if op == 57:
        return "swc1", ["f%d" % rt, "%d(%s)" % (sx(imm, 16), R[rs])]
    if op == 17 and rs in (0, 4):
        return ("mfc1" if rs == 0 else "mtc1"), [R[rt], "f%d" % rd]
    if op == 28 and fn == 0x28 and sa == 0x18:
        return "paddub", [R[rd], R[rs], R[rt]]
    if op == 0 and fn == 24:
        return "mult3", [R[rd], R[rs], R[rt]]
    raise ValueError("palabra no soportada 0x%08x en 0x%x" % (w, addr))


def parse(addr0, text):
    body = text[text.index("{") + 1: text.rindex("}")]
    ins, labels = [], {}
    for ln in body.splitlines():
        ln = ln.strip()
        if not ln or ln.startswith(".set"):
            continue
        m = re.match(r"^(L[0-9a-f]+):$", ln)
        if m:
            labels[m.group(1)] = addr0 + 4 * len(ins)
            continue
        m = re.match(r"^\.word 0x([0-9a-f]{8})$", ln)
        if m:
            a = addr0 + 4 * len(ins)
            mn, ops = decode_word(int(m.group(1), 16), a)
            if mn in ("beq", "bne") and re.match(r"^L[0-9a-f]+$", ops[-1]):
                labels.setdefault(ops[-1], int(ops[-1][1:], 16))
            ins.append((mn, ops))
            continue
        p = ln.split(None, 1)
        ops = [x.strip() for x in p[1].split(",")] if len(p) > 1 else []
        ins.append((p[0], ops))
    for name, a in labels.items():     # validacion: el nombre del rotulo lleva su direccion
        if int(name[1:], 16) != a:
            raise SystemExit("rotulo %s no coincide con la direccion calculada 0x%x: parseo incorrecto" % (name, a))
    return ins, labels


def parse_objdump(addr0, end, elf):
    """Para funciones SIN fuente en src/matched: desensamblado del ELF del usuario (solo lectura) con el
    objdump de toolchain/binutils. Devuelve (instrucciones, rotulos) como parse()."""
    import subprocess
    od = ROOT / "toolchain" / "binutils" / "bin" / "mips64-elf-objdump"
    out = subprocess.run([str(od), "-d", "-m", "mips:5900", "--start-address=0x%x" % addr0,
                          "--stop-address=0x%x" % end, str(elf)], capture_output=True, text=True, check=True).stdout
    ins, labels = [], {}
    for ln in out.splitlines():
        m = re.match(r"^\s+([0-9a-f]+):\t[0-9a-f]{8}\s+(\S+)\s*([^#<]*)", ln)
        if not m:
            continue
        a = int(m.group(1), 16)
        while a > addr0 + 4 * len(ins):      # objdump condensa palabras a cero en "..." (nop)
            ins.append(("nop", []))
        if a != addr0 + 4 * len(ins):
            raise SystemExit("objdump: direccion inesperada 0x%x" % a)
        mn = m.group(2)
        ops = [x.strip() for x in m.group(3).split(",")] if m.group(3).strip() else []
        if mn in ("b", "beqz", "bnez", "beq", "bne", "bgez"):
            t = int(ops[-1], 16)
            if not (addr0 <= t < end):
                raise SystemExit("salto fuera de la funcion en 0x%x" % a)
            labels["L%x" % t] = t
            ops[-1] = "L%x" % t
        if mn == "jal":
            ops = ["func_%08x" % int(ops[0], 16)]
        ops = [o.lstrip("$") if o.startswith("$f") else o for o in ops]
        ins.append((mn, ops))
    if len(ins) * 4 != end - addr0:
        raise SystemExit("objdump: %d instrucciones, se esperaban %d" % (len(ins), (end - addr0) // 4))
    return ins, labels


def num(s):
    return int(s, 0)


def memop(s):
    m = re.match(r"^(-?\w+)\((\w+)\)$", s)
    return num(m.group(1)), RN[m.group(2)]


def gen(addr0, od=None):
    """od = (fin, ruta del ELF) para traducir desde el desensamblado en vez de src/matched."""
    if od:
        ins, labels = parse_objdump(addr0, od[0], od[1])
        origin = "el desensamblado del ELF del usuario (no hay fuente en src/matched)"
    else:
        text = (SRC / ("f_%08x.c" % addr0)).read_text()
        ins, labels = parse(addr0, text)
        origin = "src/matched/f_%08x.c (ensamblador MWCC byte-match)" % addr0
    n = len(ins)
    # rotulos necesarios: destinos de salto
    need = set()
    has_table = False
    for mn, ops in ins:
        if mn in BRANCH_MN:
            need.add(labels[ops[-1]])
        if mn == "jr" and ops[0] != "ra":
            has_table = True
    slots = set()      # ranuras de retardo: no pueden ser destino de salto
    for i, (mn, ops) in enumerate(ins):
        if mn in BRANCH_MN + ("jal", "jalr", "jr"):
            slots.add(addr0 + 4 * (i + 1))
    if has_table:
        need = {addr0 + 4 * i for i in range(n)} - slots
    calls = set()
    out = []
    E = out.append

    def r(x):
        return "r[%d]" % RN[x]

    def setr(x, expr):
        return "" if RN[x] == 0 else "r[%d] = %s;" % (RN[x], expr)

    def s32(e):
        return "(int64_t)(int32_t)(%s)" % e

    def alu(mn, ops, a):
        if mn in ("addiu", "addi"):
            return setr(ops[0], s32("%s + (uint64_t)(int64_t)%d" % (r(ops[1]), num(ops[2]))))
        if mn == "daddiu":
            return setr(ops[0], "%s + (uint64_t)(int64_t)%d" % (r(ops[1]), num(ops[2])))
        if mn == "lui":
            return setr(ops[0], "(uint64_t)(int64_t)(int32_t)(0x%xu << 16)" % num(ops[1]))
        if mn in ("addu", "add"):
            return setr(ops[0], s32("%s + %s" % (r(ops[1]), r(ops[2]))))
        if mn == "subu":
            return setr(ops[0], s32("%s - %s" % (r(ops[1]), r(ops[2]))))
        if mn == "dsubu":
            return setr(ops[0], "%s - %s" % (r(ops[1]), r(ops[2])))
        if mn in ("and", "or", "xor"):
            c = {"and": "&", "or": "|", "xor": "^"}[mn]
            return setr(ops[0], "%s %s %s" % (r(ops[1]), c, r(ops[2])))
        if mn in ("andi", "ori", "xori"):
            c = {"andi": "&", "ori": "|", "xori": "^"}[mn]
            return setr(ops[0], "%s %s 0x%xull" % (r(ops[1]), c, num(ops[2]) & 0xffff))
        if mn == "sll":
            return setr(ops[0], s32("(uint32_t)%s << %d" % (r(ops[1]), num(ops[2]))))
        if mn == "srl":
            return setr(ops[0], s32("(uint32_t)%s >> %d" % (r(ops[1]), num(ops[2]))))
        if mn == "sra":
            return setr(ops[0], "(int64_t)((int32_t)%s >> %d)" % (r(ops[1]), num(ops[2])))
        if mn == "srlv":
            return setr(ops[0], s32("(uint32_t)%s >> (%s & 31)" % (r(ops[1]), r(ops[2]))))
        if mn == "srav":
            return setr(ops[0], "(int64_t)((int32_t)%s >> (%s & 31))" % (r(ops[1]), r(ops[2])))
        if mn == "dsll":
            return setr(ops[0], "%s << %d" % (r(ops[1]), num(ops[2])))
        if mn == "dsll32":
            return setr(ops[0], "%s << %d" % (r(ops[1]), num(ops[2]) + 32))
        if mn == "dsrl":
            return setr(ops[0], "%s >> %d" % (r(ops[1]), num(ops[2])))
        if mn == "dsrl32":
            return setr(ops[0], "%s >> %d" % (r(ops[1]), num(ops[2]) + 32))
        if mn == "dsra":
            return setr(ops[0], "(uint64_t)((int64_t)%s >> %d)" % (r(ops[1]), num(ops[2])))
        if mn == "dsra32":
            return setr(ops[0], "(uint64_t)((int64_t)%s >> %d)" % (r(ops[1]), num(ops[2]) + 32))
        if mn == "slt":
            return setr(ops[0], "(int64_t)%s < (int64_t)%s" % (r(ops[1]), r(ops[2])))
        if mn == "sltu":
            return setr(ops[0], "%s < %s" % (r(ops[1]), r(ops[2])))
        if mn == "slti":
            return setr(ops[0], "(int64_t)%s < (int64_t)%d" % (r(ops[1]), num(ops[2])))
        if mn == "sltiu":
            return setr(ops[0], "%s < (uint64_t)(int64_t)%d" % (r(ops[1]), num(ops[2])))
        if mn == "mult3":
            return setr(ops[0], s32("(int64_t)(int32_t)%s * (int64_t)(int32_t)%s" % (r(ops[1]), r(ops[2]))))
        if mn == "paddub":     # paddub rd,rs,zero = move de 128 bits (leccion de mwccps2)
            if ops[2] != "zero":
                raise SystemExit("paddub con rt != zero en 0x%x" % a)
            return ("" if RN[ops[0]] == 0 else "r[%d] = %s; h[%d] = h[%d];" % (RN[ops[0]], r(ops[1]), RN[ops[0]], RN[ops[1]]))
        if mn == "pcpyld":     # rd.lo = rt.lo ; rd.hi = rs.lo
            return ("{ uint64_t lo_ = %s, hi_ = %s; r[%d] = lo_; h[%d] = hi_; }" % (r(ops[2]), r(ops[1]), RN[ops[0]], RN[ops[0]]))
        if mn == "nop":
            return ""
        if mn == "li":
            return setr(ops[0], "(uint64_t)(int64_t)%d" % num(ops[1]))
        if mn == "move":
            return ("" if RN[ops[0]] == 0 else "r[%d] = %s; h[%d] = h[%d];" % (RN[ops[0]], r(ops[1]), RN[ops[0]], RN[ops[1]]))
        if mn == "negu":
            return setr(ops[0], s32("0 - %s" % r(ops[1])))
        if mn in ("add.s", "sub.s", "mul.s", "div.s"):
            c = {"add.s": "+", "sub.s": "-", "mul.s": "*", "div.s": "/"}[mn]
            f = lambda x: int(x[1:])
            return "fp[%d] = m1_fb(m1_f(fp[%d]) %s m1_f(fp[%d]));" % (f(ops[0]), f(ops[1]), c, f(ops[2]))
        if mn == "trunc.w.s":
            return "fp[%d] = m1_trunc_w_s(fp[%d]);" % (int(ops[0][1:]), int(ops[1][1:]))
        if mn == "cvt.s.w":
            return "fp[%d] = m1_fb((float)(int32_t)fp[%d]);" % (int(ops[0][1:]), int(ops[1][1:]))
        if mn == "mfc0":      # SR/estado del coprocesador 0: sombra local (el port no hay interrupciones)
            return setr(ops[0], "(int64_t)(int32_t)cop0_sr")
        if mn == "mtc0":
            return "cop0_sr = (uint32_t)%s;" % r(ops[0])
        if mn in ("lw", "lh", "lhu", "lbu", "ld"):
            off, b = memop(ops[1])
            ea = "(uint32_t)(r[%d] + (uint64_t)(int64_t)%d)" % (b, off)
            f = {"lw": "(int64_t)(int32_t)m1_lw", "lh": "(int64_t)m1_lh", "lhu": "m1_lhu", "lbu": "m1_lbu", "ld": "m1_ld"}[mn]
            return setr(ops[0], "%s(%s)" % (f, ea))
        if mn in ("sw", "sh", "sb", "sd"):
            off, b = memop(ops[1])
            ea = "(uint32_t)(r[%d] + (uint64_t)(int64_t)%d)" % (b, off)
            return "m1_%s(%s, %s);" % (mn, ea, r(ops[0]))
        if mn == "lq":
            off, b = memop(ops[1])
            return "m1_lq((uint32_t)(r[%d] + (uint64_t)(int64_t)%d), &r[%d], &h[%d]);" % (b, off, RN[ops[0]], RN[ops[0]]) if RN[ops[0]] else ""
        if mn == "sq":
            off, b = memop(ops[1])
            return "m1_sq((uint32_t)(r[%d] + (uint64_t)(int64_t)%d), %s, h[%d]);" % (b, off, r(ops[0]), RN[ops[0]])
        if mn == "lwc1":
            off, b = memop(ops[1])
            return "fp[%d] = m1_lw((uint32_t)(r[%d] + (uint64_t)(int64_t)%d));" % (int(ops[0].lstrip("$")[1:]), b, off)
        if mn == "swc1":
            off, b = memop(ops[1])
            return "m1_sw((uint32_t)(r[%d] + (uint64_t)(int64_t)%d), fp[%d]);" % (b, off, int(ops[0].lstrip("$")[1:]))
        if mn == "mtc1":
            return "fp[%d] = (uint32_t)%s;" % (int(ops[1][1:]), r(ops[0]))
        if mn == "mfc1":
            return setr(ops[0], "(int64_t)(int32_t)fp[%d]" % int(ops[1][1:]))
        raise SystemExit("mnemonico no soportado: %s %s (0x%x)" % (mn, ops, a))

    def cond(mn, ops):
        if mn == "beqz":
            return "%s == 0" % r(ops[0])
        if mn == "bnez":
            return "%s != 0" % r(ops[0])
        if mn == "beq":
            return "%s == %s" % (r(ops[0]), r(ops[1]))
        if mn == "bne":
            return "%s != %s" % (r(ops[0]), r(ops[1]))
        if mn in ("bgez", "bgtz", "blez", "bltz"):
            return "(int64_t)%s %s 0" % (r(ops[0]), {"bgez": ">=", "bgtz": ">", "blez": "<=", "bltz": "<"}[mn])
        return "1"

    fname = "func_%08x" % addr0
    E("/* SPDX-License-Identifier: AGPL-3.0-or-later */")
    E("/*")
    E(" * %s.c - GENERADO por port/m1/tools/ab2c.py desde %s." % (fname, origin))
    E(" * No editar a mano: regenerar con `python3 -I port/m1/tools/ab2c.py %s%08x`." % ("--elf RUTA --objdump " if od else "", addr0))
    E(" * Es una traduccion instruccion a instruccion (%d instrucciones), no un C idiomatico; la logica" % n)
    E(" * original sigue siendo el .c de src/matched. Memoria: m1_gmem.h (direcciones guest de 32 bits).")
    E(" */")
    E('#include <stdint.h>')
    E('#include "m1_gmem.h"')
    E("")
    body = []
    B = body.append
    i = 0
    while i < n:
        a = addr0 + 4 * i
        mn, ops = ins[i]
        if a in need:
            B("L_%x:" % a)
        branchy = mn in BRANCH_MN + ("jal", "jalr", "jr")
        if not branchy:
            c = alu(mn, ops, a)
            if c:
                B("    " + c)
            i += 1
            continue
        if i + 1 >= n:
            raise SystemExit("salto sin ranura en 0x%x" % a)
        dmn, dops = ins[i + 1]
        if dmn in BRANCH_MN + ("jal", "jalr", "jr"):
            raise SystemExit("ranura con salto en 0x%x" % a)
        dc = alu(dmn, dops, a + 4)
        if mn in BRANCH_MN:
            tgt = labels[ops[-1]]
            B("    { int c_ = %s; %s" % (cond(mn, ops), dc))
            B("      if (c_) goto L_%x; }" % tgt)
        elif mn == "jal":
            tgt = ops[0]
            ma = re.match(r"^func_([0-9a-f]{8})$", tgt)
            if not ma:
                raise SystemExit("jal a destino no canonico: %s" % tgt)
            ta = int(ma.group(1), 16)
            calls.add(tgt)
            if dc:
                B("    " + dc)
            args = ["r[4]", "r[5]", "r[6]", "r[7]"]
            for k in PTR_ARGS.get(ta, []):
                args[k] = "(uint64_t)(uintptr_t)m1_gptr((uint32_t)r[%d])" % (4 + k)
            B("    m1_gsp = (uint32_t)r[29];")
            if ta in PROTOS:
                pr = PROTOS[ta]
                ptypes = re.match(r"^void\((.*)\)$", pr).group(1).split(",")
                aa, ni, nf = [], 0, 0
                for t in ptypes:
                    if t == "int":
                        aa.append("(int)r[%d]" % (4 + ni)); ni += 1
                    else:
                        aa.append("*(float *)&fp[%d]" % (12 + nf)); nf += 1
                B("    { extern void %s(%s); %s(%s); }" % (tgt, ",".join(ptypes), tgt, ", ".join(aa)))
            else:
                B("    r[2] = (uint64_t)(int64_t)(int32_t)%s(%s);" % (tgt, ", ".join(args)))
        elif mn == "jalr":
            if dc:
                B("    " + dc)
            B("    m1_gsp = (uint32_t)r[29];")
            B("    r[2] = (uint64_t)(int64_t)(int32_t)m1_callg((uint32_t)%s, r[4], r[5], r[6], r[7]);" % r(ops[-1]))
        elif mn == "jr":
            if ops[0] == "ra":
                B("    %s" % dc if dc else "")
                B("    return (int64_t)(int32_t)r[2];")
            else:
                B("    { uint32_t t_ = (uint32_t)%s; %s" % (r(ops[0]), dc))
                B("      switch (t_) {")
                for k in range(n):
                    if addr0 + 4 * k not in slots:
                        B("        case 0x%x: goto L_%x;" % (addr0 + 4 * k, addr0 + 4 * k))
                B('        default: fprintf(stderr, "%s: jr a 0x%%x fuera de la funcion\\n", t_); return 0; } }' % fname)
        i += 2
    E("long long %s(long long a0_, long long a1_, long long a2_, long long a3_)" % fname)
    E("{")
    E("    uint64_t r[32] = {0}, h[32] = {0};")
    E("    uint32_t fp[32] = {0}, cop0_sr = 0;")
    E("    (void)h; (void)fp; (void)cop0_sr;")
    E("    r[4] = (uint64_t)a0_; r[5] = (uint64_t)a1_; r[6] = (uint64_t)a2_; r[7] = (uint64_t)a3_;")
    E("    r[28] = M1_GP; r[29] = m1_gsp;")
    for c in sorted(calls):
        if int(c[5:], 16) in PROTOS:
            continue
        E("    extern long long %s(long long, long long, long long, long long);" % c)
    out.extend(body)
    E("    return (int64_t)(int32_t)r[2];")
    E("}")
    return "\n".join(x for x in out if x != "") + "\n"


def main():
    OUT.mkdir(parents=True, exist_ok=True)
    args = sys.argv[1:]
    if args and args[0] == "--elf":
        # --elf RUTA --objdump INICIO:FIN [INICIO:FIN ...]   (funciones sin fuente en src/matched)
        elf = args[1]
        assert args[2] == "--objdump"
        for rng in args[3:]:
            a, e = (int(x, 16) for x in rng.split(":"))
            (OUT / ("f_%08x.c" % a)).write_text(gen(a, (e, elf)))
            print("escrito", OUT / ("f_%08x.c" % a))
        return
    for a in args or ["001334b0", "001e9810", "001e8650", "001e80e0"]:
        v = int(a, 16)
        (OUT / ("f_%08x.c" % v)).write_text(gen(v))
        print("escrito", OUT / ("f_%08x.c" % v))


if __name__ == "__main__":
    main()
