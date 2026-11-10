#!/usr/bin/env python3
"""Cola de funciones que el modelo local no ha podido igualar y que merecen un modelo mayor.
Excluye sd ra, medios de función y las ya igualadas. Ordena de corta a larga. Escribe build/escalate_queue.json
Uso: python3 tools/escalate.py [--max-len 40] [--n 40]"""
import argparse, json, sys
from pathlib import Path
ROOT = Path(__file__).resolve().parent.parent
sys.path.insert(0, str(ROOT / "tools")); sys.path.insert(0, str(ROOT / "toolchain" / "pylib"))
import llm_match as L
ap = argparse.ArgumentParser(); ap.add_argument("--max-len", type=int, default=40); ap.add_argument("--n", type=int, default=40)
a = ap.parse_args()
d, segs = L.load_segments(ROOT / "SCES_502.46")
done = set()
if (ROOT / "build/remote_tried.json").exists():
    done = set(json.load(open(ROOT / "build/remote_tried.json")))
q = []
for j in sorted((ROOT / "build/llm2").glob("f_*.json")):
    r = json.load(open(j))
    if r["match"] or r["name"] in done: continue
    va = int(r["name"][2:], 16)
    for v, o, fs in segs:
        if v <= va < v + fs:
            s = o + va - v; e = s
            while L.u32(d, e) != 0x03E00008: e += 4
            w = [L.u32(d, i) for i in range(s, e + 8, 4)]
    if len(w) > a.max_len or any(x & 0xFFFF0000 == 0xFFBF0000 for x in w) or L.starts_mid_function(w) or L.branch_escapes(w, va): continue
    q.append((len(w), hex(va)))
q.sort(); q = q[:a.n]
json.dump([v for _, v in q], open(ROOT / "build/escalate_queue.json", "w"))
print(len(q), "en cola:", [v for _, v in q])
