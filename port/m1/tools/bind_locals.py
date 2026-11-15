#!/usr/bin/env python3
# SPDX-License-Identifier: AGPL-3.0-or-later
"""bind_locals.py - propone enlaces de nombres LOCALES de llamada (f1, sub1, h2...) a direcciones reales.

El C de src/matched se compilo con simbolos locales; la direccion real la puso el enlazador. Para una
funcion f_XXXXXXXX.c este script compara la SECUENCIA de llamadas del C (en orden de aparicion) con la
secuencia de `jal` del ELF del usuario (solo lectura, objdump de toolchain/binutils). Si hay el mismo
numero de llamadas y las llamadas con nombre canonico (func_XXXXXXXX) coinciden en posicion, propone
`XXXXXXXX nombre func 0xDIR` para port/m1/data_bindings.txt. Si no, no propone nada (el compilador pudo
reordenar o inlinear): hay que mirar a mano. Es una heuristica: revisar antes de aceptar.

  python3 -I port/m1/tools/bind_locals.py --elf SCES_502.46 --map ghidra_map.csv 0016bd50 00249010 ...
"""
import argparse
import re
import subprocess
import sys
from pathlib import Path

ROOT = Path(__file__).resolve().parents[3]
OD = ROOT / "toolchain" / "binutils" / "bin" / "mips64-elf-objdump"


def bounds(csv, addr):
    for ln in Path(csv).read_text().splitlines()[1:]:
        f = ln.split(",")
        if int(f[1], 16) == addr:
            return int(f[2], 16)
    return None


def jals(elf, a, e):
    out = subprocess.run([str(OD), "-d", "-m", "mips:5900", "--start-address=0x%x" % a, "--stop-address=0x%x" % e, str(elf)],
                         capture_output=True, text=True, check=True).stdout
    return [int(m.group(1), 16) for m in re.finditer(r"\tjal\t0x([0-9a-f]+)", out)]


def main():
    ap = argparse.ArgumentParser()
    ap.add_argument("--elf", required=True)
    ap.add_argument("--map", required=True, help="CSV de Ghidra (Name,Start,End,Size) para los limites")
    ap.add_argument("addrs", nargs="+")
    a = ap.parse_args()
    for s in a.addrs:
        addr = int(s, 16)
        e = bounds(a.map, addr)
        src = (ROOT / "src" / "matched" / ("f_%08x.c" % addr)).read_text()
        if re.search(r"^asm\b", src, re.M) or e is None:
            print("# %s: asm o sin limites; no aplica" % s)
            continue
        body = src[src.index("{", src.index("(")):] if "(" in src else src
        calls = [m.group(1) for m in re.finditer(r"\b([A-Za-z_]\w*)\s*\(", body)
                 if m.group(1) not in ("if", "while", "for", "switch", "return", "sizeof")]
        # el cuerpo de la funcion principal empieza tras su cabecera; los prototipos quedan fuera por el slice anterior
        tg = jals(a.elf, addr, e)
        ok = len(calls) == len(tg)
        for c, t in zip(calls, tg):
            m = re.match(r"^(?:func_|f)([0-9a-f]{6,8})$", c)
            if m and int(m.group(1), 16) != t:
                ok = False
        print("# %s: %d llamadas en C, %d jal en ELF -> %s" % (s, len(calls), len(tg), "coinciden" if ok else "NO COINCIDEN"))
        if ok:
            seen = {}
            for c, t in zip(calls, tg):
                if not re.match(r"^(?:func_|f)[0-9a-f]{6,8}$", c) and c not in seen:
                    seen[c] = t
                    print("%s %s func 0x%08x" % (s, c, t))


if __name__ == "__main__":
    main()
