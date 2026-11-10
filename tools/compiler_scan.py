#!/usr/bin/env python3
"""Compila el último C de cada función con varios compiladores y cuenta matches.
Uso: python3 tools/compiler_scan.py comp comp-3.0.3-020716 ...   (carpetas dentro de toolchain/)"""
import json, sys
from concurrent.futures import ThreadPoolExecutor
from pathlib import Path
ROOT = Path(__file__).resolve().parent.parent
sys.path.insert(0, str(ROOT / "tools")); sys.path.insert(0, str(ROOT / "toolchain" / "pylib"))
import llm_match as L
d, segs = L.load_segments(ROOT / "SCES_502.46")
out = ROOT / "build/llm2"; jobs = []
for j in sorted(out.glob("f_*.json")):
    r = json.load(open(j)); c = out / f"{r['name']}.c"
    if not c.exists(): continue
    va = int(r["name"][2:], 16)
    for v, o, fs in segs:
        if v <= va < v + fs:
            s = o + va - v; e = s
            while L.u32(d, e) != 0x03E00008: e += 4
            raw = d[s:e + 8]
    jobs.append((r["name"], r["match"], c.read_text(), raw))
def ok(comp, job):
    name, was, src, raw = job
    w = [L.u32(raw, i) for i in range(0, len(raw), 4)]
    try:
        res, _ = L.compile_c(src, str(ROOT / "toolchain/wibo"), str(ROOT / "toolchain" / comp), L.flags_for(w, ["-O4,p", "-sdatathreshold", "0"]))
    except Exception: return False
    return bool(res and len(res[0]) == len(raw) and L.mask(res[0], res[1]) == L.mask(raw, {k: x for k, x in res[1].items() if k < len(raw)}))
for comp in sys.argv[1:]:
    with ThreadPoolExecutor(12) as ex:
        r = list(ex.map(lambda jb: ok(comp, jb), jobs))
    was = [x for x, jb in zip(r, jobs) if jb[1]]; fail = [(x, jb[0]) for x, jb in zip(r, jobs) if not jb[1]]
    new = [n for x, n in fail if x]
    print(f"{comp}: igualadas antes {sum(was)}/{len(was)} | fallidas que ahora igualan {len(new)}/{len(fail)}", new[:12], flush=True)
