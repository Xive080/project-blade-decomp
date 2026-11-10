#!/usr/bin/env python3
"""Plantillas por familias: para cada fallida busca una igualada con la misma secuencia de mnemónicos y prueba su C tal cual
(los relocs se enmascaran, así que sirve si cambian solo globales/llamadas). Si coincide, la guarda. Sin GPU."""
import json, sys
from pathlib import Path
ROOT = Path(__file__).resolve().parent.parent
sys.path.insert(0, str(ROOT / "tools")); sys.path.insert(0, str(ROOT / "toolchain" / "pylib"))
import llm_match as L
d, segs = L.load_segments(ROOT / "SCES_502.46")
lib = [json.loads(x) for x in open(ROOT / "build/examples.jsonl")]
fam = {}
for e in lib:
    fam.setdefault(tuple(L.mnems(e["asm"])), []).append(e)
out = ROOT / "build/llm2"; hits = tried = 0
for j in sorted(out.glob("f_*.json")):
    r = json.load(open(j))
    if r["match"]: continue
    va = int(r["name"][2:], 16)
    for v, o, fs in segs:
        if v <= va < v + fs:
            s = o + va - v; e = s
            while L.u32(d, e) != 0x03E00008: e += 4
            raw = d[s:e + 8]
    asm = L.disasm(raw, va); twins = fam.get(tuple(L.mnems(asm)), [])
    if not twins: continue
    tried += 1
    w = [L.u32(raw, i) for i in range(0, len(raw), 4)]
    for t in twins:
        res, _ = L.compile_c(t["c"], str(ROOT / "toolchain/wibo"), str(ROOT / "toolchain/comp"), L.flags_for(w, ["-O4,p", "-sdatathreshold", "0"]))
        if res and len(res[0]) == len(raw) and L.mask(res[0], res[1]) == L.mask(raw, {k: x for k, x in res[1].items() if k < len(raw)}):
            (out / f"{r['name']}.c").write_text(t["c"])
            (out / f"{r['name']}.json").write_text(json.dumps({"name": r["name"], "match": True, "via": "familia", "tries": []}, indent=1))
            open(ROOT / "build/examples.jsonl", "a").write(json.dumps({"name": r["name"], "asm": asm, "c": t["c"]}) + "\n")
            print(r["name"], "MATCH (gemela", t["name"] + ")", flush=True); hits += 1; break
print(f"== familias: {hits} matches de {tried} fallidas con gemela ==")
