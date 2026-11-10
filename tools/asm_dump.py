#!/usr/bin/env python3
"""Ensamblador de respaldo: para cada función SIN byte-match escribe build/asm/f_<addr>.s
(.word + desensamblado de objdump en comentario), lo ensambla con mips64-elf-as -march=r5900 y verifica
que los bytes son idénticos a los del ELF. Así toda función queda "igualada" en ensamblador mientras el C no llega.
Uso: python3 tools/asm_dump.py [--elf SCES_502.46]"""
import argparse, json, re, subprocess, sys, tempfile
from pathlib import Path
ROOT = Path(__file__).resolve().parent.parent
sys.path.insert(0, str(ROOT / "tools")); sys.path.insert(0, str(ROOT / "toolchain" / "pylib"))
import llm_match as L
TC = ROOT / "toolchain" / "binutils" / "bin"
ap = argparse.ArgumentParser(); ap.add_argument("--elf", default="SCES_502.46"); a = ap.parse_args()
d, segs = L.load_segments(ROOT / a.elf)
out = ROOT / "build" / "asm"; out.mkdir(parents=True, exist_ok=True)
funcs = json.load(open(ROOT / "build/export/funcs.json"))
ok = bad = 0
for f in funcs:
    if f["match"]: continue
    va = int(f["addr"], 16); name = f"f_{va:08x}"
    raw = None
    for v, o, fs in segs:
        if v <= va < v + fs:
            s = o + va - v; e = s
            while L.u32(d, e) != 0x03E00008: e += 4
            raw = d[s:e + 8]; break
    if raw is None: bad += 1; continue
    words = [L.u32(raw, i) for i in range(0, len(raw), 4)]
    with tempfile.TemporaryDirectory() as t:
        t = Path(t); (t / "w.s").write_text(".set noat\n.set noreorder\n.text\n" + "".join(f".word 0x{w:08x}\n" for w in words))
        subprocess.run([str(TC / "mips64-elf-as"), "-march=r5900", "-EL", "-o", str(t / "w.o"), str(t / "w.s")], check=True)
        dis = subprocess.run([str(TC / "mips64-elf-objdump"), "-d", "-m", "mips:5900", "-EL", str(t / "w.o")],
                             capture_output=True, text=True).stdout
    asm = {int(m.group(1), 16): m.group(2).strip() for m in re.finditer(r"^\s*([0-9a-f]+):\s+[0-9a-f]{8}\s+(.*)$", dis, re.M)}
    lines = [f"# {name}  {len(words)} instrucciones  (byte-idéntico al ELF)", ".set noat", ".set noreorder", ".text",
             f".globl {name}", f"{name}:"]
    for i, w in enumerate(words):
        lines.append(f"    .word 0x{w:08x}    # {va + 4 * i:08x}: {asm.get(4 * i, '?')}")
    (out / f"{name}.s").write_text("\n".join(lines) + "\n")
    with tempfile.TemporaryDirectory() as t:
        t = Path(t)
        subprocess.run([str(TC / "mips64-elf-as"), "-march=r5900", "-EL", "-o", str(t / "x.o"), str(out / f"{name}.s")], check=True)
        sec = subprocess.run([str(TC / "mips64-elf-objcopy"), "-O", "binary", "-j", ".text", str(t / "x.o"), str(t / "x.bin")])
        same = (t / "x.bin").read_bytes() == raw
    ok += same; bad += not same
print(f"{ok} funciones en ensamblador byte-idéntico, {bad} fallos -> {out}")
