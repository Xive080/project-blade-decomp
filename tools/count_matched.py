#!/usr/bin/env python3
"""Cuenta las funciones de src/matched: C real frente a bloques asm literal (con .word).
Escribe tools/asm_literal.txt (lista de direcciones) con --write."""
import os, re, sys
d = os.path.join(os.path.dirname(os.path.abspath(__file__)), '..', 'src', 'matched')
asm, c = [], []
for f in sorted(os.listdir(d)):
    if not f.endswith('.c'):
        continue
    t = open(os.path.join(d, f), encoding='utf-8', errors='replace').read()
    (asm if re.search(r'^asm\s|\.word', t, re.M) else c).append(f)
print(f'total={len(asm)+len(c)} c_real={len(c)} asm_literal={len(asm)}')
TOTAL_FUNCS = 3904  # funciones del ELF segun los limites de Ghidra (docs/port/no_match.md)
if '--stats' in sys.argv:
    import json, datetime
    out = sys.argv[sys.argv.index('--stats') + 1]
    json.dump({'c_real': len(c), 'asm_literal': len(asm), 'total_funcs': TOTAL_FUNCS,
               'updated': datetime.date.today().isoformat()}, open(out, 'w'))
    open(out, 'a').write('\n')
if '--write' in sys.argv:
    with open(os.path.join(d, '..', '..', 'tools', 'asm_literal.txt'), 'w') as o:
        o.write('# funciones byte-match que son bloques asm literal (no C real); regenerar con tools/count_matched.py --write\n')
        o.write('\n'.join(asm) + '\n')
