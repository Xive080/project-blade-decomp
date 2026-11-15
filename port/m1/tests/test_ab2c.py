#!/usr/bin/env python3
# SPDX-License-Identifier: AGPL-3.0-or-later
"""Pruebas del traductor ab2c.py: las funciones asm de la ruta se traducen y COMPILAN, y una funcion pequena
traducida se EJECUTA y da el resultado esperado (func_00101bc8: lectura de tabla con guarda)."""
import os
import subprocess
import sys
import tempfile
import unittest
from pathlib import Path

HERE = Path(__file__).resolve().parent
M1 = HERE.parent
sys.path.insert(0, str(M1 / "tools"))
import ab2c  # noqa: E402


def cc():
    for c in ("clang", "cc", "gcc"):
        if subprocess.run(["which", c], capture_output=True).returncode == 0:
            return c
    raise unittest.SkipTest("sin compilador")


class Ab2cTests(unittest.TestCase):
    def test_route_functions_compile(self):
        for a in (0x1334b0, 0x1e9810, 0x1e8650, 0x1e80e0):
            src = ab2c.gen(a)
            with tempfile.TemporaryDirectory() as d:
                f = Path(d) / "x.c"
                f.write_text(src)
                r = subprocess.run([cc(), "-c", "-std=gnu11", "-Wall", "-Wno-unused-label", "-Wno-unused-variable",
                                    "-I", str(M1 / "include"), str(f), "-o", str(Path(d) / "x.o")], capture_output=True, text=True)
                self.assertEqual(r.returncode, 0, r.stderr[:800])

    def test_labels_match_addresses(self):
        # parse() aborta si el nombre de un rotulo no coincide con la direccion calculada: es la prueba de que
        # el conteo de instrucciones (y con el, la decodificacion de los .word) es correcto
        for a in (0x1334b0, 0x1e9810, 0x1e8650, 0x1e80e0):
            text = (ab2c.SRC / ("f_%08x.c" % a)).read_text()
            ins, labels = ab2c.parse(a, text)
            self.assertGreater(len(ins), 10)
            self.assertTrue(labels)

    def test_decode_samples(self):
        self.assertEqual(ab2c.decode_word(0x7fbf0010, 0), ("sq", ["ra", "16(sp)"]))
        self.assertEqual(ab2c.decode_word(0x3c010033, 0), ("lui", ["at", "0x33"]))
        self.assertEqual(ab2c.decode_word(0x70002628, 0), ("paddub", ["a0", "zero", "zero"]))
        self.assertEqual(ab2c.decode_word(0x44826000, 0), ("mtc1", ["v0", "f12"]))
        self.assertEqual(ab2c.decode_word(0xaf82831c, 0), ("sw", ["v0", "-31972(gp)"]))

    def test_executes_small_function(self):
        # funcion sintetica: v0 = 5 * a0 con un bucle (rotulo con la direccion, bnez con ranura de retardo) y un sw
        asm = """asm void f(void) {
    .set noreorder
    addiu v0,zero,0
    addiu v1,zero,5
L100008:
    addu v0,v0,a0
    addiu v1,v1,-1
    bnez v1,L100008
    nop
    sw v0,0(a1)
    jr ra
    nop
}
"""
        harness = r'''
#include <stdio.h>
#include <stdlib.h>
#include "m1_gmem.h"
unsigned char m1_img[M1_IMG_SIZE];
unsigned char *m1_gptr_slow(uint32_t a) { (void)a; abort(); }
uint32_t m1_gsp;
uint64_t m1_callg(uint32_t a, uint64_t b, uint64_t c, uint64_t d, uint64_t e) { (void)a;(void)b;(void)c;(void)d;(void)e; abort(); }
long long func_00100000(long long, long long, long long, long long);
int main(void) {
    long long r = func_00100000(7, 0x200000, 0, 0);
    printf("%lld %u\n", r, m1_lw(0x200000));
    return 0;
}
'''
        with tempfile.TemporaryDirectory() as d:
            (Path(d) / "f_00100000.c").write_text(asm)
            old = ab2c.SRC
            ab2c.SRC = Path(d)
            try:
                text = ab2c.gen(0x100000)
            finally:
                ab2c.SRC = old
            (Path(d) / "f.c").write_text(text)
            (Path(d) / "h.c").write_text(harness)
            r = subprocess.run([cc(), "-std=gnu11", "-w", "-I", str(M1 / "include"), str(Path(d) / "f.c"), str(Path(d) / "h.c"),
                                "-o", str(Path(d) / "t")], capture_output=True, text=True)
            self.assertEqual(r.returncode, 0, r.stderr[:800])
            out = subprocess.run([str(Path(d) / "t")], capture_output=True, text=True)
            self.assertEqual(out.stdout.strip(), "35 35")


if __name__ == "__main__":
    unittest.main()
