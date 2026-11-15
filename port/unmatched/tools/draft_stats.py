#!/usr/bin/env python3
# SPDX-License-Identifier: AGPL-3.0-or-later
"""Mide cuantos borradores existen para las funciones sin match y cuantos compilan en el host.

Entrada: port/unmatched/data/nomatch.json (list_nomatch.py) y los borradores de build/a2/
(f_XXXXXXXX.m2c = salida cruda de m2c; f_XXXXXXXX.c = ultimo intento hacia mwccps2;
f_XXXXXXXX.res = diferencias del ultimo intento). Solo lectura. Compila con
`clang -fsyntax-only` (solo sintaxis y tipos: NO prueba comportamiento). Escribe
port/unmatched/data/draft_stats.json. Python 3 estandar.
"""
import json, os, re, subprocess, sys, tempfile
from collections import Counter
from pathlib import Path

ROOT = Path(__file__).resolve().parents[3]
CC = os.environ.get("CC", "clang")


def compiles(src, td):
    p = Path(td) / "t.c"
    p.write_text(src)
    r = subprocess.run([CC, "-fsyntax-only", "-w", "-DPORT", "-fcommon",
                        "-include", str(ROOT / "port/m1/include/m1_prelude.h"),
                        "-include", str(ROOT / "port/unmatched/include/m2c_compat.h"), str(p)],
                       capture_output=True, text=True)
    msg = [l.split("error:", 1)[-1].strip() for l in r.stderr.splitlines() if "error:" in l][:1]   # sin la ruta del temporal
    return r.returncode == 0, msg


def main():
    F = json.loads((ROOT / "port/unmatched/data/nomatch.json").read_text())["funciones"]
    A2 = ROOT / "build/a2"
    rows, tot = [], Counter()
    with tempfile.TemporaryDirectory() as td:
        for x in F:
            if x["cause"] == "rw_sdk":
                continue
            nm = "f_%08x" % int(x["addr"], 16)
            r = dict(addr=x["addr"], cause=x["cause"], n=x["n"])
            m2 = A2 / (nm + ".m2c")
            if m2.exists():
                t = m2.read_text()
                r["m2c"] = "FAIL" if t.strip() == "FAIL" or not t.strip() else "ok"
                r["m2c_errors"] = len(re.findall(r"M2C_ERROR|M2C_BREAK", t))
                if r["m2c"] == "ok":
                    r["m2c_compila"], r["m2c_err1"] = compiles(t, td)
            else:
                r["m2c"] = "sin_borrador"
            cc = A2 / (nm + ".c")
            if cc.exists():
                r["intento_c"] = True
                r["intento_compila"], _ = compiles(cc.read_text(), td)
                res = A2 / (nm + ".res")
                if res.exists():
                    rt = res.read_text()
                    if "Error:" not in rt:     # con error de compilacion el .res no trae comparacion
                        r["diff_lineas"] = sum(1 for l in rt.splitlines() if l.startswith("!="))
            rows.append(r)
            tot["total"] += 1
            tot["m2c_" + r["m2c"]] += 1
            if r.get("m2c_compila"): tot["m2c_compila"] += 1
            if r.get("intento_c"): tot["intento_c"] += 1
            if r.get("intento_compila"): tot["intento_compila"] += 1
    out = ROOT / "port/unmatched/data/draft_stats.json"
    out.write_text(json.dumps(dict(totales=dict(tot), funciones=rows), indent=1) + "\n")
    print(dict(tot), file=sys.stderr)


if __name__ == "__main__":
    main()
