#!/usr/bin/env python3
"""Pasada automática m2c -> mwccps2 sobre build/cands2.json (de tools/m2c_enum.py).
Por función: ensamblador con símbolos (%hi/%lo, %gp_rel) -> m2c -> limpieza -> compila y compara (relocs
enmascarados) -> correcciones automáticas (firma completa, arg0 pasante, aritmética en bytes, arrays,
structs por parámetro, struct en $gp, volatile) -> variantes de llm_match si quedan <= 3 diferencias.
Salida en build/a2/<f>.{s,m2c,res,match.c}. m2c corre fuera (tools/m2c_native.sh, mucho más rápido
que bajo qemu). Modos (en el contenedor):
  python3 tools/m2c_pass.py gen   MIN MAX [N]   # .s de las candidatas
  python3 tools/m2c_pass.py check MIN MAX [N]   # compila las que aún no tienen .res
  python3 tools/m2c_pass.py retry MIN MAX [N]   # reintenta las fallidas (ONLY_NONE=1: solo las que no compilan)
Después: python3 tools/m2c_finalize.py (limpia, reverifica y copia a src/matched)."""
import json, os, re, subprocess, sys, tempfile
from concurrent.futures import ThreadPoolExecutor, ProcessPoolExecutor
from pathlib import Path
ROOT = Path(__file__).resolve().parent.parent
sys.path.insert(0, str(ROOT / "tools")); sys.path.insert(0, str(ROOT / "toolchain/pylib"))
import llm_match as L

d, segs = L.load_segments(ROOT / "SCES_502.46")
OUT = ROOT / "build/a2"; OUT.mkdir(exist_ok=True)
M2C = ROOT / "toolchain/m2c"
REG = r"(zero|at|v[01]|a[0-3]|t[0-9]|s[0-8]|k[01]|gp|sp|fp|ra)"
MACROS = (M2C / "m2c_macros.h").read_text() if (M2C / "m2c_macros.h").exists() else ""

def raw_of(s, e):
    for v, o, fs in segs:
        if v <= s < v + fs:
            return d[o + s - v:o + e - v]

LOADST = {"lb","lbu","lh","lhu","lw","lwu","ld","lq","sb","sh","sw","sd","sq","lwc1","swc1","ldc1","sdc1","lwl","lwr","ldl","ldr","sdl","sdr","swl","swr"}
BR = L.BRANCH

def to_asm(raw, va):
    rows = []
    for l in L.disasm_od(raw, va).splitlines():
        a, rest = l.split(": ", 1)
        p = rest.split(None, 1); mn = p[0]; ops = p[1] if len(p) > 1 else ""
        rows.append([int(a, 16), mn, ops])
    n = len(rows); lo, hi = va, va + 4 * n
    targets = set()
    # symbolizar lui/lo
    for i, (a, mn, ops) in enumerate(rows):
        if mn == "lui":
            r, imm = [x.strip() for x in ops.split(",")]
            imm = int(imm, 0); base = None
            for j in range(i + 1, min(n, i + 40)):
                mj, oj = rows[j][1], rows[j][2]
                m = re.match(r"(\w+),(-?\d+)\((\w+)\)$", oj)
                if mj in LOADST and m and m.group(3) == r:
                    addr = ((imm << 16) + int(m.group(2))) & 0xFFFFFFFF
                    if base is None: base = addr
                    off = addr - base
                    rows[j][2] = f"{m.group(1)},%lo(D_{base:08X}{'+%d' % off if off else ''})({r})"
                    if mj.startswith("s") and m.group(1) == r: break
                    if not mj.startswith("s") and m.group(1) == r: break
                    continue
                m = re.match(r"(\w+),(\w+),(-?\d+)$", oj)
                if mj in ("addiu", "daddiu") and m and m.group(2) == r:
                    addr = ((imm << 16) + int(m.group(3))) & 0xFFFFFFFF
                    if base is None: base = addr
                    off = addr - base
                    rows[j][2] = f"{m.group(1)},{r},%lo(D_{base:08X}{'+%d' % off if off else ''})"
                    if m.group(1) == r: break
                    continue
                if mj == "ori" and m and m.group(2) == r:
                    break
                dst = oj.split(",")[0].strip() if oj else ""
                if dst == r and mj not in LOADST and mj not in BR and mj not in ("jr", "jalr"): break
            if base is not None:
                rows[i][2] = f"{r},%hi(D_{base:08X})"
        m = re.match(r"(\w+),(-?\d+)\(gp\)$", ops)
        if mn in LOADST and m:
            rows[i][2] = f"{m.group(1)},%gp_rel(G_{(int(m.group(2)) & 0xFFFF):04X})(gp)"
        m = re.match(r"(\w+),gp,(-?\d+)$", ops)
        if mn == "addiu" and m:
            rows[i][2] = f"{m.group(1)},gp,%gp_rel(G_{(int(m.group(2)) & 0xFFFF):04X})"
    for r_ in rows:
        a, mn, ops = r_
        if mn in BR or mn in ("jal", "j"):
            m = re.search(r"(0x[0-9a-fA-F]+)\s*$", ops)
            if m:
                t = int(m.group(1), 16)
                if lo <= t < hi:
                    targets.add(t); r_[2] = ops[:m.start()] + f".L{t:08x}"
                else:
                    r_[2] = ops[:m.start()] + f"func_{t:08x}"
    lines = [".set noat", ".set noreorder", "", "glabel func"]
    for a, mn, ops in rows:
        if a in targets: lines.append(f".L{a:08x}:")
        ops = re.sub(r"(?<![\w$%.])" + REG + r"(?![\w])", r"$\1", ops)
        ops = re.sub(r"(?<![\w$])\$?(f\d+)(?![\w])", r"$\1", ops)
        if mn == "paddub" and ops.endswith(",$zero"):
            mn, ops = "move", ops.rsplit(",", 1)[0]
        if mn in ("mula.s", "adda.s", "suba.s"):
            mn = {"mula.s": "mul.s", "adda.s": "add.s", "suba.s": "sub.s"}[mn]; ops = "$f31," + ops
        elif mn in ("madd.s", "msub.s"):
            fd, fs, ft = [x.strip() for x in ops.split(",")]
            lines.append(f"/* {a:08X} */ mul.s $f30,{fs},{ft}")
            mn, ops = ("add.s" if mn == "madd.s" else "sub.s"), f"{fd},$f31,$f30"
        lines.append(f"/* {a:08X} */ {mn} {ops}".rstrip())
    return "\n".join(lines) + "\n"

def m2c(asm):
    with tempfile.TemporaryDirectory() as td:
        f = Path(td, "f.s"); f.write_text(asm)
        r = subprocess.run(["python3", str(M2C / "m2c.py"), "-t", "mipsee-mwcc-c", "--valid-syntax", str(f)],
                           capture_output=True, text=True, timeout=60)
    return r.stdout if r.returncode == 0 else None

def cleanup(c):
    c = re.sub(r"^\s*(static\s+)?\?[^\n]*\n", "", c, flags=re.M)
    c = c.replace("*(void *)", "*(s32 *)").replace("(void *)0x", "(s32 *)0x")
    c = re.sub(r"\bvoid \*", "s8 *", c)
    if "NULL" in c: c = "#define NULL 0\n" + c
    c = "#pragma mpwc_relax on\n" + c
    return c

NPRE = L.PRELUDE.count("\n")
def repair(src, err):
    """Inserta casts donde mwcc rechaza una conversión implícita (`a = b;` -> `a = (T)(b);`)."""
    m = re.search(r"function call '(func_[0-9a-f]{8})\(", err)
    if m:
        s2 = re.sub(r"^(.*\b" + m.group(1) + r")\([^;]*\);", r"\1();", src, count=1, flags=re.M)
        return s2 if s2 != src else None
    m = re.search(r"#\s+(\d+): .*\n#\s+Error:.*\n#\s+illegal implicit conversion from '[^']*' to\s*\n#\s+'([^']+)'", err)
    if not m: return None
    ln = int(m.group(1)) - 1 - NPRE; ty = m.group(2)
    lines = src.split("\n")
    if not (0 <= ln < len(lines)): return None
    l = lines[ln]
    mm = re.match(r"^(\s*[^=;]*[^=!<>+\-*/&|^%])= (.*);\s*$", l)
    if mm and "(" + ty + ")" not in l:
        lines[ln] = f"{mm.group(1)}= ({ty})({mm.group(2)});"
        return "\n".join(lines)
    return None

def check(src, raw):
    w = [L.u32(raw, i) for i in range(0, len(raw), 4)]
    fl = L.flags_for(w, ["-O4,p", "-sdatathreshold", "0"])
    res, err = L.compile_c(src, str(ROOT / "toolchain/wibo"), str(ROOT / "toolchain/comp"), fl)
    for _ in range(6):
        if res is not None: break
        s2 = repair(src, err)
        if s2 is None: break
        src = s2
        res, err = L.compile_c(src, str(ROOT / "toolchain/wibo"), str(ROOT / "toolchain/comp"), fl)
    if res is None: return None, err
    got, rel = res
    ok = len(got) == len(raw) and L.mask(got, rel) == L.mask(raw, {k: v for k, v in rel.items() if k < len(raw)})
    if ok: return 0, ""
    ng = len(got) // 4; no = len(raw) // 4
    if ng != no: return 1000 + abs(ng - no), L.sidebyside(got, raw, 0)
    gm = L.mask(got, rel); om = L.mask(raw, {k: v for k, v in rel.items() if k < len(raw)})
    diff = sum(1 for i in range(0, len(raw), 4) if gm[i:i+4] != om[i:i+4])
    return diff, L.sidebyside(got, raw, 0)

def _sig_fill(c):
    m = re.search(r"\bfunc\(([^)]*)\)", c)
    if not m or m.group(1).strip() in ("", "void"): return c
    parts = [x.strip() for x in m.group(1).split(",")]
    have = {}
    for p_ in parts:
        k = re.search(r"\barg(\d+)\b", p_)
        if k: have[int(k.group(1))] = p_
    if not have: return c
    full = ", ".join(have.get(i, f"s32 arg{i}") for i in range(max(have) + 1))
    return c[:m.start(1)] + full + c[m.end(1):]

def _bytearith(c):
    c = re.sub(r"\*\(&(\w+) \+ \(([^()]+)\)\)", r"*(s32 *)((s8 *)&\1 + (\2))", c)
    return re.sub(r"\(&(\w+) \+ \(([^()]+)\)\)", r"((s8 *)&\1 + (\2))", c)

def _lits(c):
    decl = {}
    def rep(m):
        t = m.group(1).strip(); nm = f"D_{int(m.group(2), 16):08X}"
        decl.setdefault(nm, t); return nm
    c2 = re.sub(r"\*\((\w+(?: \w+)? \**)\*\)0x([0-9A-Fa-f]{6,8})\b", rep, c)
    d = [f"extern {t} {nm};" for nm, t in decl.items() if not re.search(r"extern [^;]*\b" + nm + r";", c2)]
    return ("\n".join(d) + "\n" + c2) if d else c2

def _callarg0(c):
    body = c[c.find("func("):] if "func(" in c else c
    if "func(" not in c: return c
    sig = c[c.find("func("):c.find(")", c.find("func(")) + 1]
    if not re.search(r"\barg0\b", sig):
        if sig == "func(void)": c = c.replace("func(void)", "func(s32 arg0)", 1)
        else: c = c.replace(sig, sig.replace("func(", "func(s32 arg0, ", 1), 1)
    def rep(m):
        return m.group(1) + "(arg0" + (", " if m.group(2) != ")" else "") + m.group(2)
    head, sep, tail = c.partition("func(")
    tail = re.sub(r"\b(func_[0-9a-f]{8})\((\)|[^)])", rep, tail)
    head = re.sub(r"\b(func_[0-9a-f]{8})\(", r"\1(M2C_UNK, ", head)
    head = head.replace("(M2C_UNK, void)", "(M2C_UNK)")
    return head + sep + tail

def _argbytes(c):
    return re.sub(r"(?<![\w*>.])((?:arg\d+|temp_\w+|var_\w+)) \+ (0x[0-9A-Fa-f]+|\d+)\b", r"(s8 *)\1 + \2", c)

def _volatile(c):
    return re.sub(r"^extern (?!volatile)", "extern volatile ", c, flags=re.M)

_SZ = {"s32": 4, "u32": 4, "s16": 2, "u16": 2, "s8": 1, "u8": 1, "f32": 4, "M2C_UNK": 4}
def _gpstruct(c):
    decl = re.findall(r"^extern (\w+) (G_([0-9A-F]{4}));$", c, flags=re.M)
    decl = sorted((int(o, 16), t, n) for t, n, o in decl if t in _SZ)
    groups, cur = [], []
    for o, t, n in decl:
        if cur and cur[-1][0] + _SZ[cur[-1][1]] == o and o + _SZ[t] - cur[0][0] <= 8: cur.append((o, t, n))
        else:
            if len(cur) > 1: groups.append(cur)
            cur = [(o, t, n)]
    if len(cur) > 1: groups.append(cur)
    for g in groups:
        first = g[0][2]
        st = "extern struct { " + " ".join(f"{t.replace('M2C_UNK', 's32')} f{o:04X};" for o, t, n in g) + " } " + first + ";"
        for o, t, n in g:
            c = re.sub(r"^extern \w+ " + n + ";\n", "", c, flags=re.M)
        for o, t, n in g:
            c = re.sub(r"\b" + n + r"\b", f"{first}.f{o:04X}", c)
        c = st + "\n" + c
    return c

def _arrays(c):
    for m in list(re.finditer(r"\*\(&(\w+) \+ \((\w+) \* (\d+)\)\)", c)):
        sym, idx, n = m.group(1), m.group(2), int(m.group(3))
        decl = re.search(r"^extern \w+ " + sym + ";$", c, flags=re.M)
        if not decl: continue
        dim = "[2]" if sym.startswith("G_") else "[]"
        if n in (1, 2, 4):
            t = {1: "s8", 2: "s16", 4: "s32"}[n]
            nd = f"extern {t} {sym}{dim};"; use = f"{sym}[{idx}]"
        else:
            nd = f"extern struct {{ s32 v; char pad[{n - 4}]; }} {sym}{dim};"; use = f"{sym}[{idx}].v"
        c = c.replace(decl.group(0), nd).replace(m.group(0), use)
    return c

_FSZ = {"s8": 1, "u8": 1, "s16": 2, "u16": 2, "s32": 4, "u32": 4, "f32": 4, "s64": 8, "u64": 8, "M2C_UNK": 4, "M2C_UNK32": 4}
def _structify(c):
    """M2C_FIELD(argN, T *, off) sobre parámetros puntero -> struct con relleno."""
    m = re.search(r"\bfunc\(([^)]*)\)", c)
    if not m: return c
    for pm in re.finditer(r"(\w+(?: \w+)?) \*(arg\d+)", m.group(1)):
        arg = pm.group(2)
        uses = re.findall(r"M2C_FIELD\(" + arg + r", ([^,()]+?) \*, (0x[0-9A-Fa-f]+|\d+)\)", c)
        if not uses: continue
        fields = {}
        ok = True
        for t, off in uses:
            t = t.strip(); o = int(off, 0)
            if t.endswith("*"): sz = 4
            elif t in _FSZ: sz = _FSZ[t]
            else: ok = False; break
            if o in fields and fields[o][0] != t: ok = False; break
            fields[o] = (t, sz)
        if not ok: continue
        cur = 0; body = []; prev_end = 0
        for o in sorted(fields):
            t, sz = fields[o]
            if o < prev_end or o % min(sz, 4): ok = False; break
            if o > cur: body.append(f"char pad{o:X}[{o - cur}];")
            body.append(f"{t.replace('M2C_UNK32','s32').replace('M2C_UNK','s32')} f{o:X};"); cur = o + sz; prev_end = cur
        if not ok: continue
        sname = "S_" + arg
        c = f"struct {sname} {{ " + " ".join(body) + " };\n" + c
        c = c.replace(pm.group(0), f"struct {sname} *{arg}", 1)
        c = re.sub(r"M2C_FIELD\(" + arg + r", ([^,()]+?) \*, (0x[0-9A-Fa-f]+|\d+)\)", lambda mm: f"{arg}->f{int(mm.group(2), 0):X}", c)
    return c

def _bigD(c):
    """En funciones con $gp, las globales D_ (lui/addiu) no deben caer en .sdata: tamaño > 8."""
    out = c
    for m in re.finditer(r"^extern (volatile )?(\w+) (D_[0-9A-F]{8});$", c, flags=re.M):
        vol, t, nm = m.group(1) or "", m.group(2), m.group(3)
        out = out.replace(m.group(0), f"extern {vol}struct {{ {t} v; char pad[12]; }} {nm}_;\n#define {nm} ({nm}_.v)")
    return out

def _intptr(c):
    """Punteros genéricos (s8 *) de m2c -> s32, para evitar errores de conversión implícita."""
    if "#endif" in c:
        head, body = c.rsplit("#endif", 1)
    else:
        head, body = "", c
    body = re.sub(r"\bs8 \*(?=\w)", "s32 ", body)
    body = re.sub(r"\bs8 \*(?=\s*[,)])", "s32", body)
    return (head + "#endif" if head else "") + body

def _structify2(c):
    """Como _structify, pero también convierte `*argN` (campo 0) y `argN + K` (dirección de un campo array)."""
    m = re.search(r"\bfunc\(([^)]*)\)", c)
    if not m: return c
    for pm in re.finditer(r"(\w+) \*(arg\d+)", m.group(1)):
        bt, arg = pm.group(1), pm.group(2)
        fpat = r"M2C_FIELD\(" + arg + r", ([^,()]+?) \*, (0x[0-9A-Fa-f]+|\d+)\)"
        fields = {}
        for t, off in re.findall(fpat, c):
            t = t.strip(); sz = 4 if t.endswith("*") else _FSZ.get(t)
            if sz is None: fields = None; break
            fields[int(off, 0)] = (t, sz)
        if fields is None: continue
        _k = c.find(")", c.find("func(")) + 1
        deref = re.findall(r"(?<![\w)\]])\*" + arg + r"\b(?!\s*\+)", c[_k:])
        if deref:
            if bt not in _FSZ or (0 in fields and fields[0][0] != bt): continue
            fields[0] = (bt, _FSZ[bt])
        addrs = sorted({int(k, 0) for k in re.findall(r"(?<![\w*])" + arg + r" \+ (0x[0-9A-Fa-f]+|\d+)\b", c)})
        if not addrs and not deref: continue
        if any(a in fields for a in addrs): continue
        offs = sorted(set(fields) | set(addrs))
        body = []; cur = 0; ok = True
        for i, o in enumerate(offs):
            if o < cur: ok = False; break
            if o > cur: body.append(f"char pad{o:X}[{o - cur}];")
            if o in fields:
                t, sz = fields[o]
                body.append(f"{t.replace('M2C_UNK32','s32').replace('M2C_UNK','s32')} f{o:X};"); cur = o + sz
            else:
                nxt = offs[i + 1] if i + 1 < len(offs) else o + 4
                body.append(f"char f{o:X}[{nxt - o}];"); cur = nxt
        if not ok: continue
        sname = "S2_" + arg
        c = f"struct {sname} {{ " + " ".join(body) + " };\n" + c
        c = c.replace(pm.group(0), f"struct {sname} *{arg}", 1)
        c = re.sub(fpat, lambda mm: f"{arg}->f{int(mm.group(2), 0):X}", c)
        c = re.sub(r"(?<![\w*])" + arg + r" \+ (0x[0-9A-Fa-f]+|\d+)\b", lambda mm: f"{arg}->f{int(mm.group(1), 0):X}", c)
        k = c.find(")", c.find("func(")) + 1
        c = c[:k] + re.sub(r"(?<![\w)\]])\*" + arg + r"\b(?!\s*\+)", f"{arg}->f0", c[k:])
    return c

def fixups(c):
    """Variantes de C derivadas de patrones típicos donde m2c falla con mwcc."""
    import itertools
    base = _lits(_bytearith(_sig_fill(c)))
    out = [base] if base != c else []
    bases = [base]
    arr = _lits(_bytearith(_arrays(_sig_fill(c))))
    if arr != base: out.append(arr); bases.append(arr)
    opt = [_callarg0, _argbytes, _volatile, _gpstruct, _structify, _bigD, _structify2]
    for bb in bases:
        for r in (1, 2, 3):
            for comb in itertools.combinations(opt, r):
                v = bb
                for f in comb: v = f(v)
                if v != bb and v not in out: out.append(v)
    # arg0 pasante en UNA llamada concreta
    head, sep, tail = base.partition("func(")
    calls = list(re.finditer(r"\b(func_[0-9a-f]{8})\(", tail))
    if sep and 1 < len(calls) <= 6:
        for m in calls:
            nm = m.group(1)
            nxt = tail[m.end():m.end() + 1]
            t2 = tail[:m.end()] + "arg0" + ("" if nxt == ")" else ", ") + tail[m.end():]
            h2 = re.sub(r"\b" + nm + r"\(", nm + "(M2C_UNK, ", head).replace("(M2C_UNK, void)", "(M2C_UNK)").replace("(M2C_UNK, )", "(M2C_UNK)")
            v = _callarg0_sig(h2 + sep + t2)
            if v not in out: out.append(v)
    return out

def _callarg0_sig(c):
    sig = c[c.find("func("):c.find(")", c.find("func(")) + 1]
    if re.search(r"\barg0\b", sig): return c
    if sig == "func(void)": return c.replace("func(void)", "func(s32 arg0)", 1)
    return c.replace(sig, sig.replace("func(", "func(s32 arg0, ", 1), 1)

def gen(item):
    s, e, n = item; s = int(s, 16); e = int(e, 16); name = f"f_{s:08x}"
    if not (OUT / f"{name}.s").exists():
        (OUT / f"{name}.s").write_text(to_asm(raw_of(s, e), s))
    return name, "gen"

RETRY = False
ONLY_NONE = False
def work(item):
    s, e, n = item; s = int(s, 16); e = int(e, 16); name = f"f_{s:08x}"
    rf = OUT / f"{name}.res"
    if rf.exists():
        if not RETRY: return name, "done"
        h = rf.read_text().split("\n", 1)[0]
        if h in ("0", "m2c_fail"): return name, "done"
        if ONLY_NONE and h != "None": return name, "done"
    raw = raw_of(s, e)
    mf = OUT / f"{name}.m2c"
    if not mf.exists(): return name, "no_m2c"
    c = mf.read_text()
    if not c.strip() or c.strip() == "FAIL" or "M2C_ERROR" in c:
        (OUT / f"{name}.res").write_text("m2c_fail\n" + (c or "")); return name, "m2c_fail"
    src = MACROS + "\n" + cleanup(c)
    (OUT / f"{name}.c").write_text(cleanup(c))
    sc, info = check(src, raw)
    best = (sc, src)
    if sc not in (None, 0):
        for v in fixups(src):
            s2, i2 = check(v, raw)
            if s2 == 0: best = (0, v); break
            if s2 is not None and (best[0] is None or s2 < best[0]): best = (s2, v); sc, info = s2, i2
    if best[0] not in (None, 0) and best[0] <= 3:
        src = best[1]
        for v in L.variants(src, cap=40):
            s2, _ = check(v, raw)
            if s2 == 0: best = (0, v); break
    if best[0] == 0:
        (OUT / f"{name}.match.c").write_text(best[1])
    (OUT / f"{name}.res").write_text(f"{best[0]}\n{info}")
    return name, best[0]

def work_retry(item):
    global RETRY, ONLY_NONE
    RETRY = True
    ONLY_NONE = os.environ.get("ONLY_NONE") == "1"
    return work(item)

if __name__ == "__main__":
    items = json.load(open(ROOT / os.environ.get("CANDS", "build/cands2.json")))
    mode = sys.argv[1]; lo, hi = int(sys.argv[2]), int(sys.argv[3])
    items = [x for x in items if lo <= x[2] <= hi]
    RETRY = mode == "retry"
    fn = gen if mode == "gen" else (work_retry if RETRY else work)
    with ProcessPoolExecutor(int(sys.argv[4]) if len(sys.argv) > 4 else 8) as ex:
        for name, r in ex.map(fn, items, chunksize=4):
            print(name, r, flush=True)
