#!/usr/bin/env python3
"""Barrido de flags: compila todos los C ya generados de las fallidas con otros niveles de optimización/compiladores."""
import json, sys
from concurrent.futures import ThreadPoolExecutor
from pathlib import Path
ROOT = Path(__file__).resolve().parent.parent
sys.path.insert(0, str(ROOT / "tools")); sys.path.insert(0, str(ROOT / "toolchain" / "pylib"))
import llm_match as L
d, segs = L.load_segments(ROOT / "SCES_502.46"); out = ROOT / "build/llm2"; jobs = []
for j in sorted(out.glob("f_*.json")):
    r = json.load(open(j))
    if r["match"]: continue
    va = int(r["name"][2:], 16)
    for v, o, fs in segs:
        if v <= va < v + fs:
            s = o + va - v; e = s
            while L.u32(d, e) != 0x03E00008: e += 4
            raw = d[s:e + 8]
    srcs = [x["src"] for x in r["tries"]] + ([(out / f"{r['name']}.c").read_text()] if (out / f"{r['name']}.c").exists() else [])
    jobs.append((r["name"], raw, srcs))
FL = [["-O0"], ["-O1"], ["-O2"], ["-O3,p"], ["-O4,s"]]
def go(job):
    name, raw, srcs = job; w = [L.u32(raw, i) for i in range(0, len(raw), 4)]
    for comp in ("comp", "comp-3.0.3-020716"):
        for fl in FL:
            for c in srcs[-1:]:
                try: res, _ = L.compile_c(c, str(ROOT / "toolchain/wibo"), str(ROOT / "toolchain" / comp), L.flags_for(w, fl + ["-sdatathreshold", "0"]))
                except Exception: continue
                if res and len(res[0]) == len(raw) and L.mask(res[0], res[1]) == L.mask(raw, {k: x for k, x in res[1].items() if k < len(raw)}):
                    return (name, comp, " ".join(fl), c)
with ThreadPoolExecutor(14) as ex: hits = [h for h in ex.map(go, jobs) if h]
print(len(jobs), "fallidas;", len(hits), "igualan con otros flags:", [(n, c, f) for n, c, f, _ in hits])
for n, comp, f, src in hits:
    r = json.load(open(out / f"{n}.json")); r["match"] = True; r["via"] = f"flags:{comp} {f}"; json.dump(r, open(out / f"{n}.json", "w"), indent=1); (out / f"{n}.c").write_text(src)
