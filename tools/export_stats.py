#!/usr/bin/env python3
"""Exporta el progreso del matching a build/export/{funcs,summary}.json (sin código del juego).
Los lee el dashboard de AirBlade Decomp. Uso: python3 tools/export_stats.py [--llm build/llm2]"""
import argparse, glob, json, sys
from pathlib import Path

ROOT = Path(__file__).resolve().parent.parent
sys.path.insert(0, str(ROOT / "tools")); sys.path.insert(0, str(ROOT / "toolchain" / "pylib"))
import llm_match as L  # noqa: E402

ap = argparse.ArgumentParser()
ap.add_argument("--llm", default="build/llm2")
ap.add_argument("--elf", default="SCES_502.46")
a = ap.parse_args()

d, segs = L.load_segments(ROOT / a.elf)
fl = {"f_%08x" % va: (e - s) // 4 for va, s, e in L.find_functions(d, segs)}
rows = []
for f in sorted(glob.glob(str(ROOT / a.llm / "*.json"))):
    j = json.load(open(f)); n = j["name"]
    rows.append({"addr": "0x" + n[2:].upper(), "instr": fl.get(n, 0), "match": int(j["match"]),
                 "tries": len(j["tries"]) + (1 if j["match"] else 0)})
lib = sum(1 for _ in open(ROOT / "build/examples.jsonl")) if (ROOT / "build/examples.jsonl").exists() else 0
n, m = len(rows), sum(r["match"] for r in rows)
summary = [
    {"metric": "Funciones intentadas", "value": n},
    {"metric": "Byte-match", "value": m},
    {"metric": "Tasa de acierto", "value": round(m / max(n, 1), 3)},
    {"metric": "Ejemplos en biblioteca", "value": lib},
    {"metric": "Triviales verificadas (auto-matcher)", "value": 57},
    {"metric": "Funciones candidatas (3-40 instr)", "value": sum(1 for v in fl.values() if 5 <= v <= 40)},
]
out = ROOT / "build" / "export"; out.mkdir(parents=True, exist_ok=True)
json.dump(rows, open(out / "funcs.json", "w")); json.dump(summary, open(out / "summary.json", "w"))
print(f"{m}/{n} byte-match; biblioteca {lib}; -> {out}")
