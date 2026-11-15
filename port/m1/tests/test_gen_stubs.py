#!/usr/bin/env python3
# SPDX-License-Identifier: AGPL-3.0-or-later
"""Pruebas de gen_stubs.py con fuentes sinteticas (sin datos del juego) y,
si existe src/matched, con un subconjunto real: generar stubs y enlazar."""
import json
import os
import subprocess
import sys
import tempfile
import unittest
from pathlib import Path

HERE = Path(__file__).resolve().parent
M1 = HERE.parent
ROOT = M1.parent.parent
sys.path.insert(0, str(M1 / "tools"))
import gen_stubs as G  # noqa: E402

CC = G.find_tool("clang", "cc", "gcc")

SYN = {
    "f_00100000.c": r"""
extern int func_00200000(int);
extern int f300000(void);
extern int sceFoo(void);
extern int D_00400000;
extern char g[];
extern unsigned long strlen(const char *);
extern int func_00120000(int);
extern int f110000(int);
int func(int a) {
    g[0] = 1;
    D_00400000 = (int)strlen("x");
    return func_00200000(a) + f300000() + sceFoo() + func_00120000(a) + f110000(a) + func_00200000(a);
}
""",
    "f_00110000.c": "int f(int a) { return a + 1; }\n",
    "f_00120000.c": "asm void func(void) { .set noreorder\n nop\n}\n",
    "f_00130000.c": "int shared = 1;\nint func(void) { return shared; }\n",
    "f_00140000.c": "int shared = 2;\nint func(void) { return shared; }\n",
}

HARNESS = r"""
#include <stdio.h>
#include "m1_stub_log.h"
extern int func_00100000(int);
int main(void) {
    m1_stubs_init();
    printf("antes: llamados=%u\n", m1_stub_called_count());
    func_00100000(1);
    m1_stub_stats(stdout, 1);
    return m1_stub_called_count() == 0 ? 0 : 3;
}
"""


@unittest.skipUnless(CC, "no hay compilador")
class SyntheticTests(unittest.TestCase):
    @classmethod
    def setUpClass(cls):
        cls.tmp = tempfile.TemporaryDirectory()
        t = Path(cls.tmp.name)
        cls.src = t / "src"
        cls.src.mkdir()
        for n, body in SYN.items():
            (cls.src / n).write_text(body)
        cls.out = t / "stubs.c"
        cls.rep = t / "rep.json"
        cls.b = t / "b"
        rc = G.main(["--src", str(cls.src), "--out", str(cls.out), "--report", str(cls.rep),
                     "--build-dir", str(cls.b), "-q",
                     "--provided", str(t / "sin_sdkmap")])
        cls.rc = rc
        cls.r = json.loads(cls.rep.read_text())

    @classmethod
    def tearDownClass(cls):
        cls.tmp.cleanup()

    def test_link_ok(self):
        self.assertEqual(self.rc, 0)
        self.assertTrue(self.r["summary"]["link_ok"])

    def test_functions(self):
        names = {f["name"]: f for f in self.r["functions"]}
        self.assertIn("func_00200000", names)
        self.assertIn("func_00300000", names)          # alias f300000 normalizado
        self.assertIn("sceFoo", names)
        self.assertIn("func_00120000", names)          # el fuente asm no compila -> stub
        self.assertTrue(names["func_00120000"]["origin"].startswith("fuente-no-compila"))
        self.assertEqual(names["func_00200000"]["addr"], "0x00200000")
        self.assertEqual(names["func_00200000"]["origin"], "sin-decompilar")
        self.assertEqual(names["sceFoo"]["origin"], "sdk/nombre")
        self.assertNotIn("func_00110000", names)       # definido por f_00110000.c (alias f)
        self.assertNotIn("strlen", names)              # lo resuelve el sistema

    def test_data_mode(self):
        d = {x["name"]: x for x in self.r["data"]}
        self.assertIn("D_00400000", d)
        self.assertEqual(d["D_00400000"]["size"], 16)   # int: tamano conocido, minimo 16
        self.assertTrue(d["D_00400000"]["size_known"])
        self.assertIn("g__L00100000", d)               # local sin direccion: unico por fichero (antes "g" compartido)
        self.assertIsNone(d["g__L00100000"]["addr"])
        self.assertFalse(d["g__L00100000"]["size_known"])
        self.assertNotIn("func_00200000", d)

    def test_no_dups(self):
        self.assertEqual(self.r["summary"]["dropped_duplicates"], [])   # `shared` es local a cada fichero

    def test_deterministic(self):
        out2 = Path(self.tmp.name) / "stubs2.c"
        G.main(["--src", str(self.src), "--out", str(out2), "--build-dir", str(Path(self.tmp.name) / "b2"), "-q", "--no-link",
              "--provided", str(Path(self.tmp.name) / "sin_sdkmap")])
        self.assertEqual(out2.read_text(), self.out.read_text())

    def test_runtime_log(self):
        h = Path(self.tmp.name) / "h.c"
        h.write_text(HARNESS)
        objs = sorted((self.b / "obj").glob("*.o"))
        exe = Path(self.tmp.name) / ("h.exe" if os.name == "nt" else "h.out")
        cmd = [CC, "-w", "-std=gnu11", "-o", str(exe), str(h), str(self.b / "rt" / "stubs.o"),
               str(self.b / "rt" / "m1_stub_log.o"), "-I", str(M1 / "stubs")] + [str(o) for o in objs]
        r = subprocess.run(cmd, capture_output=True, text=True)
        self.assertEqual(r.returncode, 0, r.stderr)
        r = subprocess.run([str(exe)], capture_output=True, text=True)
        self.assertIn("antes: llamados=0", r.stdout)
        # el stub se llama dos veces (func_00200000 aparece 2 veces en la funcion)
        self.assertRegex(r.stdout, r"#1\s+func_00200000\s+addr=0x00200000 calls=2")
        self.assertIn("sceFoo", r.stdout)
        self.assertIn("dato  D_00400000", r.stdout)
        self.assertEqual(r.returncode, 3)               # el arnes devuelve 3 si hubo llamadas a stubs


@unittest.skipUnless(CC and (ROOT / "src" / "matched").is_dir(), "sin src/matched")
class RealSubsetTests(unittest.TestCase):
    def test_subset_links(self):
        with tempfile.TemporaryDirectory() as t:
            t = Path(t)
            rc = G.main(["--subset", "40", "--out", str(t / "s.c"), "--build-dir", str(t / "b"),
                         "--report", str(t / "r.json"), "-q"])
            self.assertEqual(rc, 0)
            r = json.loads((t / "r.json").read_text())
            self.assertTrue(r["summary"]["link_ok"])
            self.assertGreater(r["summary"]["compiled"], 10)
            self.assertGreater(r["summary"]["stub_functions"], 0)


class ProvidedTests(unittest.TestCase):
    def test_provided_symbols_solo_definiciones(self):
        with tempfile.TemporaryDirectory() as t:
            t = Path(t)
            (t / "x.c").write_text(
                "extern int func_00100001();\n"
                "/* long long func_00100002(void) { } */\n"
                "long long func_00100003(int a) { return a; }\n"
                "int func_00100004(char *d,\n    const char *f, ...) {\n    return func_00100003(1);\n}\n")
            self.assertEqual(G.provided_symbols(t), {"func_00100003", "func_00100004"})

    def test_sdkmap_real(self):
        syms = G.provided_symbols(ROOT / "port" / "m1" / "sdkmap")
        self.assertIn("func_00111960", syms)   # sceSifRebootIop
        self.assertIn("func_00100000", syms)   # sceGsResetGraph


class AddrNameTests(unittest.TestCase):
    """Direcciones sacadas del nombre del simbolo y deteccion de nombres locales (cierre de M1)."""
    @classmethod
    def setUpClass(cls):
        sys.path.insert(0, str(Path(__file__).resolve().parents[1] / "tools"))
        import gen_stubs
        cls.g = gen_stubs

    def test_data_addr(self):
        g = self.g
        self.assertEqual(g.data_addr("D_002EC090"), 0x2EC090)
        self.assertEqual(g.data_addr("G_8324"), 0x2F96F0 - 0x7CDC)     # gp + desplazamiento con signo
        self.assertEqual(g.data_addr("G_0010"), 0x2F96F0 + 0x10)
        self.assertEqual(g.data_addr("unk_2E4DC0"), 0x2E4DC0)
        self.assertIsNone(g.data_addr("buf"))

    def test_is_local_name(self):
        g = self.g
        for n in ("A", "f1", "G", "buf", "D0", "sub2"):
            self.assertTrue(g.is_local_name(n), n)
        for n in ("memcpy", "func_001953c0", "D_00133CB0", "G_8324", "f13b550", "sceCdInit", "main"):
            self.assertFalse(g.is_local_name(n), n)

    def test_bindings_file(self):
        import tempfile
        with tempfile.NamedTemporaryFile("w", suffix=".txt", delete=False) as f:
            f.write("# c\n0016bd50 f1 func 0x1c2a00\n0022b5f0 D0 data 0x2f0c08\n")
        b = self.g.load_bindings(f.name)
        os.unlink(f.name)
        self.assertEqual(b[(0x16bd50, "f1")], ("func", 0x1C2A00))
        self.assertEqual(b[(0x22b5f0, "D0")], ("data", 0x2F0C08))


if __name__ == "__main__":
    unittest.main()
