#!/usr/bin/env python3
"""Clasifica cada función candidata como engine (RenderWare/gráficos/DMA/VU), sdk (libc/libm/PS2 SDK)
o game, con el LLM local, y propone rangos contiguos para excluir del matching.
Reanudable: build/classify.jsonl. Uso: python3 tools/classify_engine.py [--max-len 80]"""
import argparse, json, os, re, sys
from pathlib import Path

ROOT = Path(__file__).resolve().parent.parent
sys.path.insert(0, str(ROOT / "tools")); sys.path.insert(0, str(ROOT / "toolchain" / "pylib"))
import llm_match as L  # noqa: E402

SYS = ("Clasificas funciones MIPS R5900 de un juego de PS2 (AirBlade, motor RenderWare 3). Responde SOLO un JSON "
       '{"class":"engine|sdk|game","conf":0..1}. engine = RenderWare/gráficos/matrices/GS/DMA/VU/geometría/streams del motor; '
       "sdk = libc/libm/PS2 SDK (memcpy, strlen, sce*, syscalls, aritmética genérica); game = lógica propia del juego.")


def main():
    ap = argparse.ArgumentParser()
    ap.add_argument("--elf", default="SCES_502.46"); ap.add_argument("--url", default="http://127.0.0.1:8862")
    ap.add_argument("--model", default=os.environ.get("MATCH_MODEL", "local")); ap.add_argument("--max-len", type=int, default=80)
    ap.add_argument("--out", default="build/classify.jsonl")
    a = ap.parse_args()
    d, segs = L.load_segments(ROOT / a.elf)
    outp = ROOT / a.out; outp.parent.mkdir(exist_ok=True)
    done = {json.loads(l)["addr"] for l in outp.read_text().splitlines()} if outp.exists() else set()
    fns = [f for f in L.find_functions(d, segs) if 4 <= (f[2] - f[1]) // 4 <= a.max_len]
    with open(outp, "a") as fh:
        for va, s, e in fns:
            addr = f"0x{va:08X}"
            if addr in done:
                continue
            try:
                r = L.ask(a.url, a.model, [{"role": "system", "content": SYS},
                                           {"role": "user", "content": L.disasm(d[s:e], va)}], 0.0)
                m = re.search(r"\{.*?\}", r, re.S); j = json.loads(m.group(0))
                cls = j["class"] if j.get("class") in ("engine", "sdk", "game") else "game"
                fh.write(json.dumps({"addr": addr, "va": va, "class": cls, "conf": float(j.get("conf", 0))}) + "\n"); fh.flush()
            except Exception as ex:  # noqa: BLE001
                print(addr, "fallo:", ex, flush=True)
    rows = sorted((json.loads(l) for l in outp.read_text().splitlines()), key=lambda r: r["va"])
    # Rangos: ventanas de 25 funciones consecutivas con >=70 % engine/sdk.
    W = 25; ranges = []; i = 0
    while i + W <= len(rows):
        win = rows[i:i + W]
        if sum(r["class"] != "game" for r in win) >= 0.7 * W:
            j = i + W
            while j < len(rows) and sum(r["class"] != "game" for r in rows[max(i, j - W + 1):j + 1]) >= 0.7 * W:
                j += 1
            ranges.append((rows[i]["va"], rows[min(j, len(rows)) - 1]["va"])); i = j
        else:
            i += 1
    cnt = {c: sum(r["class"] == c for r in rows) for c in ("engine", "sdk", "game")}
    print("clasificadas:", len(rows), cnt)
    for lo, hi in ranges:
        print(f"rango propuesto: 0x{lo:08X}-0x{hi:08X}")
    (ROOT / "build" / "exclude_ranges.json").write_text(json.dumps([[lo, hi] for lo, hi in ranges]))


if __name__ == "__main__":
    main()
