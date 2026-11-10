#!/usr/bin/env python3
"""Driver LLM-match: un LLM local (llama-server de Titán, GPU) propone C para funciones NO
triviales del ELF; mwccps2 (vía wibo) lo compila y se compara byte a byte con el original.
Si no coincide, se le devuelve el desensamblado de lo que salió y reintenta.

Los relocs (jal, lui/addiu de símbolos) se enmascaran en ambos lados: el .o los deja a 0.

Requiere: capstone (pip), wibo x86_64, mwccps2 (carpeta con mwccps2.exe).
Uso:
  python3 tools/llm_match.py --elf SCES_502.46 --wibo toolchain/wibo \
     --comp toolchain/comp --out build/llm --n 20 --min-len 8 --max-len 40 --tries 4
"""
import argparse, json, os, re, struct, subprocess, sys, tempfile, urllib.request
from pathlib import Path

sys.path.insert(0, str(Path(__file__).parent))
sys.path.insert(0, str(Path(__file__).parent.parent / 'toolchain' / 'pylib'))
from batch_permuter import load_segments, find_functions, u32  # noqa: E402

from capstone import Cs, CS_ARCH_MIPS, CS_MODE_MIPS64, CS_MODE_LITTLE_ENDIAN  # noqa: E402

CS = Cs(CS_ARCH_MIPS, CS_MODE_MIPS64 | CS_MODE_LITTLE_ENDIAN)


def disasm(raw, va):
    out = []
    for i in range(0, len(raw), 4):
        w = raw[i:i + 4]
        ins = next(CS.disasm(w, va + i), None)
        out.append(f"{va + i:08x}: {ins.mnemonic} {ins.op_str}".rstrip() if ins
                   else f"{va + i:08x}: .word 0x{u32(w, 0):08x}")
    return "\n".join(out)


def obj_text(path):
    """(bytes de .text, offsets de reloc con su tipo) de un ELF32 LE relocatable."""
    d = Path(path).read_bytes()
    shoff, = struct.unpack_from("<I", d, 0x20)
    shent, shnum, shstr = struct.unpack_from("<HHH", d, 0x2e)
    secs = []
    for i in range(shnum):
        n, t, _, _, off, sz, link, info = struct.unpack_from("<8I", d, shoff + i * shent)
        secs.append((n, t, off, sz, link, info))
    stro = secs[shstr][2]
    name = lambda n: d[stro + n:d.index(b"\0", stro + n)].decode()
    text = next(i for i, s in enumerate(secs) if name(s[0]) == ".text")
    t = secs[text]
    relocs = {}
    for s in secs:
        if s[1] in (9, 4) and s[5] == text:  # SHT_REL / SHT_RELA
            ent = 8 if s[1] == 9 else 12
            for o in range(s[2], s[2] + s[3], ent):
                r_off, r_info = struct.unpack_from("<II", d, o)
                relocs[r_off] = r_info & 0xFF
    return d[t[2]:t[2] + t[3]], relocs


def disasm_od(raw, va):
    """Desensamblado con el objdump de MIPS (modelo R5900): lee bien sd/ld, MMI, etc."""
    import subprocess, tempfile
    od = Path(__file__).resolve().parent.parent / "toolchain/binutils/bin/mips64-elf-objdump"
    if not od.exists():
        return disasm(raw, va)
    with tempfile.NamedTemporaryFile(suffix=".bin") as f:
        f.write(raw); f.flush()
        r = subprocess.run([str(od), "-b", "binary", "-m", "mips:5900", "-EL", f"--adjust-vma={va}", "-D", f.name],
                           capture_output=True, text=True)
    rows = [f"{int(m.group(1), 16):08x}: {m.group(3).strip().replace(chr(9), ' ')}"
            for m in (re.match(r"\s*([0-9a-f]+):\s*\t?([0-9a-f]{8})\s*\t(.*)$", l) for l in r.stdout.splitlines()) if m]
    return "\n".join(rows) if len(rows) == len(raw) // 4 else disasm(raw, va)


def sidebyside(got, orig, va):
    g = disasm_od(got, va).splitlines(); o = disasm_od(orig, va).splitlines()
    rows = []
    for i in range(max(len(g), len(o))):
        a = g[i].split(": ", 1)[1] if i < len(g) else "-"
        b = o[i].split(": ", 1)[1] if i < len(o) else "-"
        rows.append(f"{'  ' if a == b else '!='} {a:<32} | {b}")
    return "   TU SALIDA                       | OBJETIVO\n" + "\n".join(rows)


def mask(raw, relocs):
    b = bytearray(raw)
    for off, typ in relocs.items():
        if off + 4 > len(b):
            continue
        w = u32(b, off)
        w = (w & ~0x03FFFFFF) if typ == 4 else (w & ~0xFFFF)  # R_MIPS_26 / HI16,LO16,GPREL...
        struct.pack_into("<I", b, off, w)
    return bytes(b)


def compile_c(src, wibo, comp, flags):
    with tempfile.TemporaryDirectory() as td:
        c, o = Path(td, "f.c"), Path(td, "f.o")
        c.write_text(PRELUDE + src)
        env = dict(os.environ, MWCIncludes=str(comp))
        r = subprocess.run([str(wibo), str(Path(comp, "mwccps2.exe")), *flags, "-c", str(c), "-o", str(o)],
                           capture_output=True, text=True, env=env, timeout=60)
        if not o.exists():
            return None, (r.stdout + r.stderr)[-1500:]
        try:
            return obj_text(o), ""
        except Exception as e:  # noqa: BLE001
            return None, f"objeto ilegible: {e}"


GP_OPS = (0x20, 0x21, 0x23, 0x24, 0x25, 0x27, 0x28, 0x29, 0x2b, 0x37, 0x3f, 0x31, 0x39, 0x1e, 0x1f, 0x32)


def uses_gp(words):
    """True si la función original accede a memoria relativa a $gp (datos en .sdata)."""
    return any(((w >> 21) & 31) == 28 and (w >> 26) in GP_OPS for w in words) or \
        any((w >> 26) == 9 and ((w >> 21) & 31) == 28 for w in words)


def flags_for(words, flags, gp_threshold="8"):
    """Con $gp hace falta umbral sdata > 0; sin $gp se mantiene el de --flags (0 = lui/ori)."""
    if not uses_gp(words):
        return list(flags)
    out, i = [], 0
    while i < len(flags):
        if flags[i] == "-sdatathreshold":
            out += ["-sdatathreshold", gp_threshold]; i += 2
        else:
            out.append(flags[i]); i += 1
    return out


def starts_mid_function(words, limit=24):
    """Heurística: lee v0/v1/t*/at antes de escribirlos en el tramo recto inicial => es un medio de función."""
    temps = {1, 2, 3, *range(8, 16), 24, 25}
    written = set()
    for w in words[:limit]:
        op, rs, rt, rd = w >> 26, (w >> 21) & 31, (w >> 16) & 31, (w >> 11) & 31
        if w == 0:
            continue
        if op == 0:
            f = w & 63
            if f in (8, 9):
                reads, writes = [rs], []
            elif f in (0, 2, 3):
                reads, writes = [rt], [rd]
            elif f in (12, 13):
                return False
            else:
                reads, writes = [rs, rt], [rd]
        elif op in (4, 5, 20, 21):
            reads, writes = [rs, rt], []
        elif op in (1, 6, 7, 22, 23):
            reads, writes = [rs], []
        elif op in (2, 3):
            if op == 3:
                return False
            reads, writes = [], []
        elif op == 15:
            reads, writes = [], [rt]
        elif 0x28 <= op <= 0x2f or op in (0x3f, 0x3d, 0x39, 0x1f):
            reads, writes = [rs, rt], []
        elif op in (0x20, 0x21, 0x23, 0x24, 0x25, 0x27, 0x37, 0x1e, 0x1a, 0x1b, 0x22, 0x26, 0x18, 0x19):
            reads, writes = [rs], [rt]
        elif 8 <= op <= 14:
            reads, writes = [rs], [rt]
        else:
            continue
        if any(r in temps and r not in written for r in reads):
            return True
        written.update(writes)
        if op in (4, 5, 20, 21, 1, 6, 7, 22, 23, 2) or (op == 0 and (w & 63) in (8, 9)):
            if len(words) > 0:
                continue
    return False


def branch_escapes(words, va):
    """True si algún salto relativo cae fuera de la función (señal de que es un trozo de otra mayor)."""
    n = len(words)
    for i, w in enumerate(words):
        op = w >> 26
        if op in (1, 4, 5, 6, 7, 20, 21, 22, 23):
            off = w & 0xFFFF
            off = off - 0x10000 if off & 0x8000 else off
            t = i + 1 + off
            if t < 0 or t >= n:
                return True
    return False


def ask(url, model, messages, temp):
    body = json.dumps({"model": model, "messages": messages, "temperature": temp, "max_tokens": 2000,
                       "chat_template_kwargs": {"enable_thinking": False}}).encode()
    rq = urllib.request.Request(url + "/v1/chat/completions", body, {"Content-Type": "application/json"})
    with urllib.request.urlopen(rq, timeout=600) as r:
        return json.load(r)["choices"][0]["message"]["content"]


def extract_c(txt):
    m = re.findall(r"```(?:c|C)?\n(.*?)```", txt, re.S)
    return (m[-1] if m else txt).strip() + "\n"


PRELUDE = ("typedef unsigned char u8; typedef signed char s8; typedef unsigned short u16; typedef short s16;\n"
           "typedef unsigned int u32; typedef int s32; typedef unsigned long u64; typedef long s64; typedef float f32;\n")

_LESSONS = Path(__file__).with_name("lessons.md")
SYSTEM = ("Eres un experto en decompilación de MIPS (R5900, PS2) compilado con Metrowerks CodeWarrior "
          "mwccps2 2.4.1.01, flags -O4,p. Si el ensamblador accede con $gp (lw/sw reg, off($gp)), son variables globales pequeñas (extern int/struct pequeño, sin __attribute__): se compilan con umbral sdata 8. Escribes C89 que, al recompilarse, da EXACTAMENTE los mismos bytes. "
          "NO hay librería estándar: no uses #include. Ya están definidos u8,s8,u16,s16,u32,s32,u64,s64,f32. "
          "Declara variables locales al INICIO del bloque (C89). Escribe C idiomático, sin gotos ni nombres de registro. "
          "R5900: int=32 bits, long=64 bits (sd/ld, dsll32...), u64/s64 para registros de 64 bits. Usa structs con campos "
          "o punteros tipados (`*(int*)((char*)p+0x40)`), no aritmética sobre punteros tipados. Casts explícitos entre punteros. "
          "Las direcciones absolutas del desensamblado (lui con 0x1000, 0x1001... + ori/addiu/lw/sw) son VARIABLES GLOBALES: declara "
          "`extern s32 g_nombre;` (o el tipo que corresponda, o un array/struct) y úsalas por su nombre. NUNCA escribas "
          "punteros a direcciones literales como `*(s32*)0x1000E060`: eso compila a otro código. "
          "Las comparaciones con -1 sobre u32 son `!= 0xFFFFFFFF`/`-1` según el tipo. "
          "Nombra la función `func`. NO declares `func` aparte ni la repitas; declara solo los externs de datos/funciones ajenas que necesites. Responde SOLO con un bloque ```c.")
if _LESSONS.exists():
    SYSTEM += "\n\n" + _LESSONS.read_text()


def mnems(asm):
    return [l.split(": ", 1)[1].split()[0] for l in asm.splitlines() if ": " in l]


def sim(a, b):
    A, B = set(zip(a, a[1:])) | set(a), set(zip(b, b[1:])) | set(b)
    return len(A & B) / max(1, len(A | B))


def load_lib(path):
    return [json.loads(l) for l in Path(path).read_text().splitlines() if l.strip()] if Path(path).exists() else []


def shots(lib, asm, k):
    m = mnems(asm)
    best = sorted(lib, key=lambda e: -sim(m, mnems(e["asm"])))[:k]
    out = []
    for e in best:
        out += [{"role": "user", "content": f"Decompila esta función a C:\n```\n{e['asm']}\n```"},
                {"role": "assistant", "content": f"```c\n{e['c']}```"}]
    return out


BRANCH = {"b", "beq", "bne", "beqz", "bnez", "bgez", "bgtz", "blez", "bltz", "bal", "bgezal", "bltzal", "j", "jal",
          "beql", "bnel", "beqzl", "bnezl", "bgezl", "bgtzl", "blezl", "bltzl", "bc1t", "bc1f", "bc1tl", "bc1fl"}


def m2c_draft(asm, va, n_instr, timeout=30):
    """Borrador de C con m2c (estructura aproximada, tipos poco fiables) a partir del desensamblado de capstone."""
    import subprocess, tempfile
    root = Path(__file__).resolve().parent.parent
    lo, hi = va, va + 4 * n_instr
    rows = []
    targets = set()
    for l in asm.splitlines():
        a, rest = l.split(": ", 1)
        parts = rest.split(None, 1)
        mn, ops = parts[0], (parts[1] if len(parts) > 1 else "")
        if mn in BRANCH:
            m = re.search(r"(0x[0-9a-fA-F]+)\s*$", ops)
            if m:
                t = int(m.group(1), 16)
                if lo <= t < hi:
                    targets.add(t); ops = ops[:m.start()] + f".L{t:08x}"
                else:
                    ops = ops[:m.start()] + f"func_{t:08x}"
        rows.append((int(a, 16), mn, ops))
    lines = [".set noat", ".set noreorder", "", "glabel func"]
    for a, mn, ops in rows:
        if a in targets:
            lines.append(f".L{a:08x}:")
        lines.append(f"/* {a:08X} */ {mn} {ops}".rstrip())
    with tempfile.TemporaryDirectory() as td:
        f = Path(td, "f.s"); f.write_text("\n".join(lines) + "\n")
        try:
            r = subprocess.run(["python3", "toolchain/m2c/m2c.py", "-t", "mipsee-gcc-c", str(f)],
                               capture_output=True, text=True, cwd=root, timeout=timeout)
        except Exception:  # noqa: BLE001
            return ""
    out = r.stdout.strip()
    return "\n".join(out.splitlines()[:70]) if r.returncode == 0 and out else ""


def neighbors(lib, va, k=2, span=0x2000):
    """Matches ya resueltos en direcciones cercanas: suelen ser del mismo archivo fuente."""
    cand = []
    for e in lib:
        m = re.match(r"f_([0-9a-f]{8})$", e.get("name", ""))
        if m and 0 < abs(int(m.group(1), 16) - va) <= span:
            cand.append((abs(int(m.group(1), 16) - va), e))
    out = []
    for _, e in sorted(cand, key=lambda x: x[0])[:k]:
        out += [{"role": "user", "content": f"Decompila esta función a C:\n```\n{e['asm']}\n```"},
                {"role": "assistant", "content": f"```c\n{e['c']}```"}]
    return out


DECL = re.compile(r"^\s*(?:unsigned\s+\w+|u8|s8|u16|s16|u32|s32|u64|s64|f32|int|char|short|long|float|\w+\s*\*)\s*\*?\s*\w+(\s*=[^;]+)?;\s*$")


def variants(src, cap=150):
    """Variantes SIN modelo de un C casi correcto: orden de declaraciones, orden de sentencias contiguas y flags."""
    import itertools
    lines = src.split("\n")
    try:
        i0 = next(i for i, l in enumerate(lines) if l.rstrip().endswith("{") and "(" in l)
    except StopIteration:
        return
    body = [i for i in range(i0 + 1, len(lines)) if lines[i].strip() and lines[i].strip() != "}"]
    decls = [i for i in body if DECL.match(lines[i])]
    stmts = [i for i in body if i not in decls and lines[i].rstrip().endswith(";") and not lines[i].strip().startswith("return")]
    seen, n = {src}, 0
    def emit(ls):
        nonlocal n
        t = "\n".join(ls)
        if t not in seen and n < cap:
            seen.add(t); n += 1
            return t
    bases = [lines]
    # T1: separar `Tipo x = expr;` en declaración + asignación (cambia cuándo se carga el valor)
    for i in decls:
        m = re.match(r"^(\s*)(.+?\s*\*?\s*)(\w+)\s*=\s*([^;]+);\s*$", lines[i])
        if m:
            ls = lines[:]
            ls[i] = f"{m.group(1)}{m.group(2)}{m.group(3)};\n{m.group(1)}{m.group(3)} = {m.group(4)};"
            bases.append("\n".join(ls).split("\n"))
    # T2: constante numérica asignada -> a través de una variable temporal declarada arriba
    for i in stmts:
        m = re.match(r"^(\s*)(.+?)=\s*(-?\d+|0x[0-9a-fA-F]+);\s*$", lines[i])
        if m and "(" in m.group(2):
            ls = lines[:]
            ls[i] = f"{m.group(1)}{m.group(2)}= tmpc;"
            ls.insert(i0 + 1, f"    int tmpc = {m.group(3)};")
            bases.append(ls)
    if len(decls) > 1:
        for perm in itertools.islice(itertools.permutations([lines[i] for i in decls[:4]]), 24):
            ls = lines[:]
            for slot, text in zip(decls[:4], perm):
                ls[slot] = text
            bases.append(ls)
    for ls in bases:
        t = emit(ls)
        if t: yield t
        pairs = sorted(((a_, b_) for x, a_ in enumerate(stmts) for b_ in stmts[x + 1:]), key=lambda p_: p_[1] - p_[0])
        for a_, b_ in pairs:
            l2 = ls[:]; l2[a_], l2[b_] = l2[b_], l2[a_]
            t = emit(l2)
            if t: yield t


def seed_lib(path, auto_dir, d, segs):
    """Siembra la biblioteca con los matches triviales verificados de automatch."""
    if Path(path).exists() or not Path(auto_dir, "manifest.json").exists():
        return
    with open(path, "w") as f:
        for m in json.load(open(Path(auto_dir, "manifest.json"))):
            if m.get("kind") not in ("const", "getter", "setter"):
                continue
            raw = bytes.fromhex(m["bytes"].replace(" ", ""))
            c = re.sub(r"/\*.*?\*/\s*", "", Path(m["cfile"]).read_text(), flags=re.S).replace(m["name"], "func")
            f.write(json.dumps({"name": m["name"], "asm": disasm(raw, m["vaddr"]), "c": c}) + "\n")


def main():
    ap = argparse.ArgumentParser()
    ap.add_argument("--elf", required=True)
    ap.add_argument("--wibo", required=True)
    ap.add_argument("--comp", required=True)
    ap.add_argument("--out", default="build/llm")
    ap.add_argument("--url", default="http://127.0.0.1:8862", help="llama-server CUDA de Titán")
    ap.add_argument("--model", default=os.environ.get("MATCH_MODEL", "local"))
    ap.add_argument("--n", type=int, default=20)
    ap.add_argument("--min-len", type=int, default=8, help="instrucciones")
    ap.add_argument("--max-len", type=int, default=40)
    ap.add_argument("--tries", type=int, default=4)
    ap.add_argument("--skip", type=int, default=0)
    ap.add_argument("--flags", default="-O4,p -sdatathreshold 0", help="flags de mwccps2 separados por espacios")
    ap.add_argument("--lib", default="build/examples.jsonl", help="biblioteca de matches verificados (few-shot)")
    ap.add_argument("--auto", default="build/auto", help="salida de automatch para sembrar la biblioteca")
    ap.add_argument("--shots", type=int, default=4)
    ap.add_argument("--retry-failed", action="store_true", help="solo funciones ya intentadas sin match (usa la biblioteca ampliada)")
    ap.add_argument("--sort", action="store_true", help="curriculum: de corta a larga")
    ap.add_argument("--workers", type=int, default=1, help="peticiones en paralelo (cada llama-server tiene 2 slots)")
    ap.add_argument("--exclude-file", default="build/exclude_ranges.json", help="rangos [lo,hi] de RenderWare/SDK a saltar")
    ap.add_argument("--keep-sd", action="store_true", help="no descartar funciones que guardan $ra con sd (no reproducibles con este mwccps2)")
    ap.add_argument("--alt-comps", default="comp-3.0.3-020716,comp-2.3.3-000906", help="compiladores alternativos (carpetas hermanas de --comp) a probar con los C ya generados")
    ap.add_argument("--reverse", action="store_true", help="recorrer la lista de más larga a más corta (para repartir con otro proceso)")
    ap.add_argument("--no-variants", action="store_true")
    ap.add_argument("--no-m2c", action="store_true", help="no incluir el borrador de m2c en el prompt")
    ap.add_argument("--permute-seconds", type=int, default=60, help="decomp-permuter como último recurso (0 = no)")
    a = ap.parse_args()

    import time as _t; T0 = _t.time()
    out = Path(a.out); out.mkdir(parents=True, exist_ok=True)
    d, segs = load_segments(a.elf)
    fns = [(va, s, e) for va, s, e in find_functions(d, segs) if a.min_len <= (e - s) // 4 <= a.max_len]
    def real_start(s):
        if u32(d, s) == 0:
            return False
        o = s - 4
        while o > 0 and u32(d, o) == 0:   # saltar relleno de nops
            o -= 4
        return u32(d, o - 4) == 0x03E00008  # la palabra previa es el delay slot de un jr ra

    def c_able(s, e):
        for o in range(s, e, 4):
            w = u32(d, o)
            if w == 0x0000000C or (w >> 26) in (0x12, 0x1C, 0x36, 0x3E) or "word" in disasm(d[o:o+4], 0):
                return False
        return True
    fns = [f for f in fns if real_start(f[1]) and c_able(f[1], f[2]) and not starts_mid_function([u32(d, o) for o in range(f[1], f[2], 4)]) and not branch_escapes([u32(d, o) for o in range(f[1], f[2], 4)], f[0])]
    if Path(a.exclude_file).exists():
        rng = json.load(open(a.exclude_file))
        fns = [f for f in fns if not any(lo <= f[0] <= hi for lo, hi in rng)]
        print(f"exclusión: {len(rng)} rangos, quedan {len(fns)} funciones", flush=True)
    if a.sort:
        fns.sort(key=lambda f: f[2] - f[1])
    seed_lib(a.lib, a.auto, d, segs)
    lib = load_lib(a.lib)
    fns = [f for f in fns if not (out / f"f_{f[0]:08x}.json").exists()
           or not json.load(open(out / f"f_{f[0]:08x}.json"))["match"]] if False else fns
    if a.retry_failed:
        def failed(f):
            j = out / f"f_{f[0]:08x}.json"
            return j.exists() and not json.load(open(j))["match"]
        fns = [f for f in fns if failed(f)]
    if a.reverse:
        fns.reverse()
    fns = fns[a.skip:a.skip + a.n]
    if not a.keep_sd:  # tras el corte, para no desplazar los índices de --skip
        sd = lambda f: any(u32(d, o) & 0xFFFF0000 == 0xFFBF0000 for o in range(f[1], f[2], 4))
        n0 = len(fns); fns = [f for f in fns if not sd(f)]
        print(f"sd ra: descartadas {n0 - len(fns)} de {n0}", flush=True)
    import shlex
    gflags = flags = shlex.split(a.flags)
    import threading
    from concurrent.futures import ThreadPoolExecutor
    lock = threading.Lock()

    def diffwords(got, orig):
        return sum(1 for x in range(0, min(len(got), len(orig)), 4) if got[x:x+4] != orig[x:x+4]) + abs(len(got) - len(orig)) // 4

    def process(f):
        va, s, e = f
        orig = d[s:e]; name = f"f_{va:08x}"
        jf = out / f"{name}.json"
        if a.retry_failed and jf.exists() and jf.stat().st_mtime > T0:
            return 0   # otro proceso ya la ha tratado en esta tanda
        asm = disasm(orig, va)
        flags = flags_for([u32(d, o) for o in range(s, e, 4)], gflags)
        with lock:
            pre = shots(lib, asm, a.shots) + neighbors(lib, va)
        draft = "" if a.no_m2c else m2c_draft(asm, va, len(orig) // 4)
        extra = (f"\n\nBorrador de m2c (estructura aproximada; los tipos y `unkNN` no son fiables, "
                 f"reescríbelo como C válido para mwccps2):\n```c\n{draft}\n```") if draft else ""
        try:
            import globals_index as GI
            gh = GI.hints([u32(d, o) for o in range(s, e, 4)])
        except Exception:  # noqa: BLE001
            gh = ""
        if gh:
            extra += ("\n\nPista de structs: estos bloques de datos se usan también en otras funciones del programa "
                      "(offset desde la base: instrucción/ancho en bytes). Declara un struct con esos campos:\n" + gh)
        msgs = [{"role": "system", "content": SYSTEM}] + pre + [
                {"role": "user", "content": f"Decompila esta función a C:\n```\n{asm}\n```{extra}"}]
        ok, log, via = False, [], "llm"
        best = (10**9, None)
        for t in range(a.tries):
            try:
                reply = ask(a.url, a.model, msgs, 0.2 + 0.2 * t)
            except Exception as ex:  # noqa: BLE001
                print(f"{name}: LLM caído: {ex}", flush=True); return 0
            src = extract_c(reply)
            res, err = compile_c(src, a.wibo, a.comp, flags)
            if res is None:
                fb = f"No compila:\n{err}"
            else:
                got, rel = res
                if mask(got, rel) == mask(orig, {k: v for k, v in rel.items() if k < len(orig)}) and len(got) == len(orig):
                    ok = True; break
                dw = diffwords(got, orig)
                if len(got) == len(orig) and dw < best[0]:
                    best = (dw, src)
                fb = (f"Compila pero NO coincide ({len(got) // 4} instr. vs {len(orig) // 4}). "
                      f"Comparación (!= marca diferencias; mira el orden y los registros):\n```\n{sidebyside(got, orig, va)}\n```\n"
                      "Corrige el C: el orden de las sentencias, las variables temporales y los tipos cambian la asignación de registros.")
            log.append({"try": t, "src": src, "feedback": fb})
            msgs += [{"role": "assistant", "content": reply}, {"role": "user", "content": fb}]
        if not ok and a.alt_comps:   # el juego mezcla compiladores: probar todos los C generados con las otras versiones
            for altc in a.alt_comps.split(","):
                altdir = Path(a.comp).with_name(altc)
                for cand in [x["src"] for x in log] + ([best[1]] if best[1] else []):
                    res, _ = compile_c(cand, a.wibo, altdir, flags)
                    if res and len(res[0]) == len(orig) and mask(res[0], res[1]) == mask(orig, {k: x for k, x in res[1].items() if k < len(orig)}):
                        ok, src, via = True, cand, f"comp:{altc}"; break
                if ok: break
        if not ok and best[1] and not a.no_variants:   # mismo nº de instrucciones: probar variantes sin modelo
            for v in variants(best[1]):
                for fl in (flags, [x.replace("-O4,p", "-O3,p") for x in flags]):
                    res, _ = compile_c(v, a.wibo, a.comp, fl)
                    if res and len(res[0]) == len(orig) and mask(res[0], res[1]) == mask(orig, {k: x for k, x in res[1].items() if k < len(orig)}):
                        ok, src, via = True, v, "variante"; break
                if ok: break
        if not ok and best[1] and a.permute_seconds:   # último recurso: decomp-permuter
            import subprocess as sp
            tmp = out / f"{name}.best.c"; tmp.write_text(best[1])
            r = sp.run([sys.executable, str(Path(__file__).parent / "permute.py"), "--addr", hex(va), "--src", str(tmp),
                        "--seconds", str(a.permute_seconds), "-j", "1"], capture_output=True, text=True, cwd=Path(__file__).parent.parent)
            m = re.search(r"MATCH -> (\S+)", r.stdout)
            if m and Path(m.group(1)).exists():
                txt = Path(m.group(1)).read_text()
                src = txt[len(PRELUDE):] if txt.startswith(PRELUDE) else txt
                ok, via = True, "permuter"
        if not ok and jf.exists():
            try:
                if json.load(open(jf)).get("match"):   # otro proceso (o el modelo mayor con --save) la igualó mientras tanto: no pisarla
                    return 0
            except Exception:  # noqa: BLE001
                pass
        (out / f"{name}.c").write_text(src)
        (out / f"{name}.json").write_text(json.dumps({"name": name, "match": ok, "via": via, "tries": log}, indent=1))
        if ok:
            ent = {"name": name, "asm": asm, "c": src}
            with lock:
                lib.append(ent)
                open(a.lib, "a").write(json.dumps(ent) + "\n")
        with lock:
            print(f"{name} {len(orig)//4:3d}i  {'MATCH' if ok else 'no'}  ({via}, {len(log) + (1 if ok and via == 'llm' else 0)} intentos)", flush=True)
        return int(ok)

    with ThreadPoolExecutor(max_workers=max(1, a.workers)) as ex:
        done = sum(ex.map(process, fns))
    print(f"== {done}/{len(fns)} byte-match ==")


if __name__ == "__main__":
    main()
