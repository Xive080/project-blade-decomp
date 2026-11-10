#!/usr/bin/env python3
"""Compila un .c con mwccps2 y lo compara byte a byte con la función original.
Uso: python3 tools/check_c.py --addr 0x118728 --src fichero.c   (sin includes; el prelude u8..f32 se añade solo)"""
import argparse, sys
from pathlib import Path
ROOT = Path(__file__).resolve().parent.parent
sys.path.insert(0, str(ROOT / "tools")); sys.path.insert(0, str(ROOT / "toolchain" / "pylib"))
import llm_match as L

ap = argparse.ArgumentParser(); ap.add_argument("--addr", required=True); ap.add_argument("--src", default="")
ap.add_argument("--show", action="store_true", help="solo mostrar el ensamblador original"); ap.add_argument("--save", action="store_true", help="si hay MATCH: guardarlo (json de resultado + biblioteca few-shot)"); ap.add_argument("--comp", default="comp", help="carpeta en toolchain/ del compilador (p. ej. comp-3.0.3-020716)"); ap.add_argument("--elf", default="SCES_502.46"); a = ap.parse_args()
va = int(a.addr, 16)
d, segs = L.load_segments(ROOT / a.elf)
for v, o, fs in segs:
    if v <= va < v + fs:
        s = o + va - v; e = s
        while L.u32(d, e) != 0x03E00008: e += 4
        orig = d[s:e + 8]; break
if a.show: print(L.disasm_od(orig, va)); sys.exit(0)
res, err = L.compile_c(Path(a.src).read_text(), str(ROOT / "toolchain/wibo"), str(ROOT / "toolchain" / a.comp), L.flags_for([L.u32(orig, i) for i in range(0, len(orig), 4)], ["-O4,p", "-sdatathreshold", "0"]))
if res is None: print("NO COMPILA:\n" + err); sys.exit(2)
got, rel = res
if len(got) == len(orig) and L.mask(got, rel) == L.mask(orig, {k: v for k, v in rel.items() if k < len(orig)}):
    print("MATCH")
    if a.save:
        import json
        name = f"f_{va:08x}"; out = ROOT / "build/llm2"
        src = Path(a.src).read_text()
        (out / f"{name}.c").write_text(src)
        (out / f"{name}.json").write_text(json.dumps({"name": name, "match": True, "via": "remote" + ("" if a.comp == "comp" else ":" + a.comp), "tries": []}, indent=1))
        open(ROOT / "build/examples.jsonl", "a").write(json.dumps({"name": name, "asm": L.disasm(orig, va), "c": src}) + "\n")
        print("guardado:", name)
    sys.exit(0)
print(f"NO COINCIDE ({len(got)//4} instr. vs {len(orig)//4})\n" + L.sidebyside(got, orig, va)); sys.exit(1)
