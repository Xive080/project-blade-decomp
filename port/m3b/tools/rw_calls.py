#!/usr/bin/env python3
# SPDX-License-Identifier: AGPL-3.0-or-later
"""Barrido de `jal` del ELF hacia los bloques RenderWare (spike M3 ruta B).

Uso: python3 -I rw_calls.py --elf SCES_502.46 --matched src/matched [--ghidra-map map.csv] [--json out.json]
Solo lectura. Cuenta llamadas desde codigo del juego (fuera de RW) a destinos dentro de RW, por clase de llamador:
  real_c   : funcion con src/matched/f_*.c sin asm (C real)
  asm      : funcion con src/matched/f_*.c que contiene asm
  unmatched: el resto
Sin --ghidra-map, los limites de funcion salen de los destinos de `jal` (aproximacion peor).
Ignora llamadas indirectas (jalr / tablas): subestima. Bloques RW por defecto: ver RW_RANGES.
"""
import argparse, bisect, collections, csv, glob, json, os, re, struct

RW_RANGES = [(0x1bc000, 0x20c000), (0x214000, 0x21c000)]


def load_elf(path):
    d = open(path, 'rb').read()
    assert d[:4] == b'\x7fELF'
    phoff = struct.unpack_from('<I', d, 0x1c)[0]
    n = struct.unpack_from('<H', d, 0x2c)[0]
    segs = []
    for i in range(n):
        t, off, va, pa, fs, ms, fl, al = struct.unpack_from('<8I', d, phoff + i * 32)
        if t == 1 and fs:
            segs.append((va, d[off:off + fs]))
    return segs


def main():
    ap = argparse.ArgumentParser()
    ap.add_argument('--elf', required=True)
    ap.add_argument('--matched', required=True)
    ap.add_argument('--ghidra-map')
    ap.add_argument('--json')
    ap.add_argument('--ranges', help='bloques RW lo-hi,lo-hi (hex); por defecto los dos de la tarea')
    a = ap.parse_args()
    global RW_RANGES
    if a.ranges:
        RW_RANGES = [tuple(int(v, 16) for v in r.split('-')) for r in a.ranges.split(',')]
    inrw = lambda x: any(l <= x < h for l, h in RW_RANGES)
    va, blob = load_elf(a.elf)[0]
    words = struct.unpack('<%dI' % (len(blob) // 4), blob[:len(blob) // 4 * 4])
    jals = []
    for i, x in enumerate(words):
        if x >> 26 == 3:
            pc = va + 4 * i
            jals.append((pc, ((x & 0x3ffffff) << 2) | (pc & 0xf0000000)))
    if a.ghidra_map:
        funcs = sorted((int(r['Start'], 16), int(r['End'], 16)) for r in csv.DictReader(open(a.ghidra_map)))
    else:
        st = sorted({t for _, t in jals if va <= t < va + len(blob)})
        funcs = [(s, e) for s, e in zip(st, st[1:] + [va + len(blob)])]
    starts = [f[0] for f in funcs]

    def owner(pc):
        i = bisect.bisect_right(starts, pc) - 1
        return funcs[i][0] if i >= 0 and pc < funcs[i][1] else None

    realc, matched = set(), set()
    for f in glob.glob(os.path.join(a.matched, '*.c')):
        m = re.match(r'f_([0-9a-f]+)\.c$', os.path.basename(f))
        if not m:
            continue
        ad = int(m.group(1), 16)
        matched.add(ad)
        if not re.search(r'__asm__|\basm\b|INCLUDE_ASM|glabel', open(f, errors='replace').read()):
            realc.add(ad)
    cls = collections.defaultdict(lambda: collections.defaultdict(list))
    callers = collections.defaultdict(set)
    for pc, t in jals:
        if not inrw(t) or inrw(pc):
            continue
        o = owner(pc)
        k = 'real_c' if o in realc else 'asm' if o in matched else 'unmatched'
        cls[k][t].append(pc)
        callers[t].add(o)
    print('matched=%d real_c=%d' % (len(matched), len(realc)))
    alld = set()
    for k, v in cls.items():
        print('%-9s sitios=%4d destinos_distintos=%3d' % (k, sum(len(x) for x in v.values()), len(v)))
        alld |= set(v)
    tot = collections.Counter()
    for k, v in cls.items():
        for t, s in v.items():
            tot[t] += len(s)
    allsites = sum(tot.values())
    print('TOTAL (cualquier llamador del juego) sitios=%d destinos=%d' % (allsites, len(alld)))
    acc = 0
    for n, (t, c) in enumerate(tot.most_common()):
        acc += c
        if n + 1 in (10, 25, 50, 100, 200):
            print('  top %3d destinos cubren %.1f %% de los sitios' % (n + 1, 100.0 * acc / allsites))
    # cierre estatico dentro de RW desde los destinos (solo jal)
    edges = collections.defaultdict(set)
    for pc, t in jals:
        if inrw(pc) and inrw(t):
            o = owner(pc)
            if o is not None:
                edges[o].add(t)
    seen, stack = set(), [t for t in alld]
    while stack:
        x = stack.pop()
        if x in seen:
            continue
        seen.add(x)
        stack.extend(edges.get(x, ()))
    size = dict(funcs)
    inst = sum((size.get(x, x) - x) // 4 for x in seen if x in size)
    rwfun = [f for f in funcs if inrw(f[0])]
    print('cierre jal dentro de RW: %d funciones, %d instrucciones (de %d funciones, %d instrucciones en los bloques RW)' % (
        len(seen), inst, len(rwfun), sum((e - s) // 4 for s, e in rwfun)))
    if a.json:
        json.dump({'targets': {hex(t): {'sitios': c, 'llamadores': len(callers[t])} for t, c in tot.items()}}, open(a.json, 'w'), indent=1)


if __name__ == '__main__':
    main()
