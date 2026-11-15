#!/usr/bin/env python3
# SPDX-License-Identifier: AGPL-3.0-or-later
"""Inventario de chunks RenderWare en los .BIN del disco DEL USUARIO (spike M3 ruta B).

Uso: python3 -I rw_chunks.py --disc <carpeta con los .BIN extraidos>
Solo lectura; imprime recuentos agregados (nada de los datos se guarda). Cabeceras RW: (tipo, tamano, version) de 12 bytes.
Cuenta cadenas {tipo, version} con version pre-3.1 (0x300-0x310, sin empaquetar) y comprueba: indicador 'native' de las
geometrias, plataforma de las texturas nativas y presencia de chunks de mundo (0x0B, 0x09, 0x0A) y NativeData (0x510).
"""
import argparse, collections, glob, os, struct

NAMES = {0x1: 'Struct', 0x2: 'String', 0x3: 'Extension', 0x6: 'Texture', 0x7: 'Material', 0x8: 'MatList', 0x9: 'AtomicSect',
         0xa: 'PlaneSect', 0xb: 'World', 0xe: 'FrameList', 0xf: 'Geometry', 0x10: 'Clump', 0x14: 'Atomic', 0x15: 'TexNative',
         0x16: 'TexDict', 0x1a: 'GeomList', 0x1b: 'AnimAnimation', 0x105: 'ext105', 0x108: 'ext108', 0x110: 'SkyMipmapVal',
         0x116: 'Skin', 0x118: 'ext118', 0x11e: 'HAnim', 0x120: 'MatFX', 0x132: 'ext132', 0x140: 'ext140', 0x157: 'ext157',
         0x50e: 'Mesh(BinMesh)', 0x510: 'NativeData'}
VERS = (0x300, 0x302, 0x303, 0x304, 0x305, 0x306, 0x307, 0x308, 0x309, 0x310)


def main():
    ap = argparse.ArgumentParser()
    ap.add_argument('--disc', required=True)
    a = ap.parse_args()
    types, vers = collections.Counter(), collections.Counter()
    geo = collections.Counter()
    plat = collections.Counter()
    nbin = 0
    for f in glob.glob(os.path.join(a.disc, '**', '*.BIN'), recursive=True):
        d = open(f, 'rb').read()
        nbin += 1
        for i in range(0, len(d) - 40, 4):
            t, s, v = struct.unpack_from('<III', d, i)
            if v not in VERS or s > len(d) - i - 12 or t >= 0x1000:
                continue
            vers[v] += 1
            if v == 0x310:
                types[t] += 1
                if t in (0xf, 0x15):
                    t2, s2, v2 = struct.unpack_from('<III', d, i + 12)
                    if t2 == 1 and v2 == 0x310:
                        if t == 0xf:
                            fl = struct.unpack_from('<I', d, i + 24)[0]
                            geo['geometrias'] += 1
                            geo['con_flag_native_0x01000000'] += bool(fl & 0x01000000)
                        else:
                            plat[hex(struct.unpack_from('<I', d, i + 24)[0])] += 1
    print('ficheros .BIN:', nbin)
    print('versiones (cadenas de cabecera): ' + ', '.join('%s=%d' % (hex(k), v) for k, v in sorted(vers.items())))
    print('chunks con version 0x310 (RW 3.1.0.0 segun librw libraryIDUnpackVersion):')
    for t, n in sorted(types.items(), key=lambda x: -x[1]):
        if t in NAMES:
            print('  %#6x %-14s %d' % (t, NAMES[t], n))
    for t in (0xb, 0x9, 0xa, 0x510):
        print('  %#6x %-14s %d' % (t, NAMES[t], types.get(t, 0)))
    print('geometrias:', dict(geo))
    print('plataforma de texturas nativas (campo platformId):', dict(plat), '(0x325350 = "PS2\\0")')


if __name__ == '__main__':
    main()
