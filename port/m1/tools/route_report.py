#!/usr/bin/env python3
# SPDX-License-Identifier: AGPL-3.0-or-later
"""route_report.py - ruta estatica de llamadas (jal) desde una funcion del ELF y
estado de cada funcion en el port M1.

Uso (el ELF es el del usuario, solo lectura; ninguna ruta va fija):
  python3 -I port/m1/tools/route_report.py --elf SCES_502.46 [--map ghidra_map.csv]
        [--root 0x001953c0] [--depth 4] [--edge 0x1c28e0:0x1e9810] [--only-gaps]

Estado de cada funcion:
  C        compilada y enlazada (src/matched, esta en gen/func_table.c)
  sdkmap   definida a mano en port/m1/sdkmap (SDK enlazado al shim)
  asm      hay fuente en src/matched pero es `asm` de MWCC: no compila en el host
  nofuente sin C en el repo: hoy es un stub que devuelve 0

Solo sigue llamadas directas `jal`; las indirectas (`jalr`, tablas de funciones)
no se ven: se pueden anadir a mano con --edge ORIGEN:DESTINO (hipotesis a verificar).
Sin --map los limites de funcion se estiman (hasta el primer `jr ra` + 1): puede
cortar funciones con varios retornos. Con el CSV de Ghidra (Name,Start,End,Size)
son exactos.
"""
import argparse
import csv
import re
import struct
import sys
from collections import deque
from pathlib import Path

ROOT = Path(__file__).resolve().parents[3]
M1 = ROOT / "port" / "m1"


def load_elf(path):
    d = Path(path).read_bytes()
    if d[:4] != b"\x7fELF":
        raise SystemExit("route_report: no es un ELF: %s" % path)
    phoff, = struct.unpack_from("<I", d, 28)
    phentsize, phnum = struct.unpack_from("<HH", d, 42)
    segs = []
    for i in range(phnum):
        t, off, va, _pa, fsz, msz, _fl, _al = struct.unpack_from("<8I", d, phoff + i * phentsize)
        if t == 1 and fsz:
            segs.append((va, off, fsz))
    return d, segs


def word(d, segs, va):
    for sva, off, fsz in segs:
        if sva <= va < sva + fsz:
            return struct.unpack_from("<I", d, off + va - sva)[0]
    return None


def main():
    ap = argparse.ArgumentParser(description=__doc__, formatter_class=argparse.RawDescriptionHelpFormatter)
    ap.add_argument("--elf", required=True)
    ap.add_argument("--map")
    ap.add_argument("--root", default="0x001953c0")
    ap.add_argument("--depth", type=int, default=4)
    ap.add_argument("--edge", action="append", default=[])
    ap.add_argument("--only-gaps", action="store_true", help="solo funciones que no son C ni sdkmap")
    a = ap.parse_args()

    d, segs = load_elf(a.elf)
    bounds = {}
    if a.map:
        for r in csv.DictReader(open(a.map)):
            bounds[int(r["Start"], 16)] = int(r["End"], 16)
    code_lo = min(s[0] for s in segs)
    code_hi = code_lo + segs[0][2]

    compiled = set(int(x, 16) for x in re.findall(r"\{ 0x([0-9a-f]{8})u", (M1 / "gen" / "func_table.c").read_text()))
    sdkmap = set(int(x, 16) for x in re.findall(r"\bfunc_([0-9a-f]{8})\s*\(", "".join(
        f.read_text() for f in (M1 / "sdkmap").glob("*.c")) if (M1 / "sdkmap").is_dir() else ""))

    def status(addr):
        if addr in compiled:
            return "C"
        if addr in sdkmap:
            return "sdkmap"
        f = ROOT / "src" / "matched" / ("f_%08x.c" % addr)
        if f.exists():
            return "asm" if re.search(r"^asm\b", f.read_text(), re.M) else "C?"
        return "nofuente"

    def end_of(start):
        if start in bounds:
            return bounds[start]
        va = start
        while va < code_hi:
            w = word(d, segs, va)
            if w == 0x03E00008:
                return va + 8
            va += 4
        return va

    edges_extra = {}
    for e in a.edge:
        s, t = e.split(":")
        edges_extra.setdefault(int(s, 0), []).append(int(t, 0))

    def callees(start):
        out = []
        for va in range(start, end_of(start), 4):
            w = word(d, segs, va)
            if w is not None and (w >> 26) == 3:  # jal
                t = ((va + 4) & 0xF0000000) | ((w & 0x03FFFFFF) << 2)
                if code_lo <= t < code_hi:
                    out.append(t)
        return out + edges_extra.get(start, [])

    root = int(a.root, 0)
    seen = {root: 0}
    order = []
    q = deque([root])
    tree = {}
    while q:
        x = q.popleft()
        order.append(x)
        cs = []
        for c in callees(x):
            if c not in cs:
                cs.append(c)
        tree[x] = cs
        if seen[x] >= a.depth:
            continue
        for c in cs:
            if c not in seen:
                seen[c] = seen[x] + 1
                q.append(c)

    counts = {}
    print("# raiz %08x, profundidad <= %d, %d funciones" % (root, a.depth, len(order)))
    print("# dir      prof estado    llamadas directas (orden de aparicion)")
    for x in order:
        st = status(x)
        counts[st] = counts.get(st, 0) + 1
        if a.only_gaps and st in ("C", "sdkmap"):
            continue
        print("%08x  %2d   %-8s %s" % (x, seen[x], st, " ".join("%x" % c for c in tree[x][:12]) + (" ..." if len(tree[x]) > 12 else "")))
    print("# resumen: " + ", ".join("%s=%d" % kv for kv in sorted(counts.items())))
    return 0


if __name__ == "__main__":
    sys.exit(main())
