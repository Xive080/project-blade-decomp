#!/usr/bin/env python3
"""Índice de globales: qué direcciones (lui/addiu/ori) y offsets de $gp tocan TODAS las funciones del ELF y con qué anchura.
Sirve de pista de structs: al decompilar una función se le dice qué otros campos del mismo bloque se usan en el resto del juego."""
import json, sys
from collections import defaultdict
from pathlib import Path
ROOT = Path(__file__).resolve().parent.parent
sys.path.insert(0, str(ROOT / "tools")); sys.path.insert(0, str(ROOT / "toolchain" / "pylib"))
import llm_match as L

W = {0x20: ("lb", 1), 0x24: ("lbu", 1), 0x28: ("sb", 1), 0x21: ("lh", 2), 0x25: ("lhu", 2), 0x29: ("sh", 2), 0x23: ("lw", 4),
     0x27: ("lwu", 4), 0x2b: ("sw", 4), 0x31: ("lwc1", 4), 0x39: ("swc1", 4), 0x37: ("ld", 8), 0x3f: ("sd", 8), 0x1e: ("lq", 16), 0x1f: ("sq", 16)}


def scan(words):
    """-> (bases, accesses). bases: constantes base (dirección o ('gp', off)); accesses: lista (clave_abs, op, anchura)."""
    const, bases, acc = {}, set(), []
    for w in words:
        op, rs, rt, imm = w >> 26, (w >> 21) & 31, (w >> 16) & 31, w & 0xFFFF
        simm = imm - 0x10000 if imm & 0x8000 else imm
        if op == 15:
            const[rt] = ("a", imm << 16)
        elif op in (9, 13) and rs in const and const[rs][0] == "a":
            v = const[rs][1] + (simm if op == 9 else imm)
            const[rt] = ("a", v & 0xFFFFFFFF); bases.add(v & 0xFFFFFFFF)
        elif op == 9 and rs == 28:
            const[rt] = ("g", simm); bases.add(("gp", simm))
        elif op in W:
            n, wd = W[op]
            if rs == 28: acc.append((("gp", simm), n, wd))
            elif rs in const:
                k = const[rs]; acc.append(((k[1] + simm) & 0xFFFFFFFF if k[0] == "a" else ("gp", k[1] + simm), n, wd))
        elif op not in (0, 2, 3, 4, 5, 6, 7, 1) and rt in const and op not in (0x2b, 0x28, 0x29, 0x3f, 0x39, 0x1f):
            const.pop(rt, None)
    return bases, acc


def build():
    d, segs = L.load_segments(ROOT / "SCES_502.46")
    idx = defaultdict(set)
    for va, s, e in L.find_functions(d, segs):
        for k, n, wd in scan([L.u32(d, o) for o in range(s, e, 4)])[1]:
            idx[json.dumps(k)].add((n, wd))
    out = {k: sorted(v) for k, v in idx.items()}
    json.dump(out, open(ROOT / "build/globals.json", "w"))
    return out


_cache = None


def hints(words, window=0x80, maxlines=10):
    global _cache
    if _cache is None:
        p = ROOT / "build/globals.json"
        _cache = json.load(open(p)) if p.exists() else {}
        _cache = {json.dumps(json.loads(k)) if False else k: v for k, v in _cache.items()}
    bases, acc = scan(words)
    keys = [json.loads(k) for k in _cache]
    lines = []
    for b in sorted(bases, key=str):
        near = []
        for k in keys:
            if isinstance(b, tuple):
                if isinstance(k, list) and k[0] == "gp" and abs(k[1] - b[1]) < window: near.append((k[1] - b[1], tuple(k)))
            elif isinstance(k, int) and b - 0x20 <= k < b + window: near.append((k - b, k))
        if len(near) < 2: continue
        near.sort()
        desc = ", ".join(f"{o:+d}:" + "/".join(f"{n}{wd}" for n, wd in _cache[json.dumps(k if isinstance(k, int) else list(k))]) for o, k in near[:10])
        name = f"gp{b[1]:+d}" if isinstance(b, tuple) else f"0x{b:x}"
        lines.append(f"- {name}: campos usados en todo el programa -> {desc}")
    return "\n".join(lines[:maxlines])


if __name__ == "__main__":
    o = build(); print(len(o), "direcciones/offsets indexados")
