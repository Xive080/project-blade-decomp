#!/usr/bin/env python3
"""Pruebas de abi_check.py con ficheros sinteticos generados aqui (sin datos del juego)."""
import json, os, sys, tempfile, unittest
sys.path.insert(0, os.path.join(os.path.dirname(os.path.abspath(__file__)), '..', 'tools'))
import abi_check as A


def mk(d, name, text):
    p = os.path.join(d, name)
    with open(p, 'w') as f: f.write(text)
    return p


def infos(d):
    return [A.analyze(p, open(p).read()) for p in A.collect([d])]


class PreprocTests(unittest.TestCase):
    def test_conditionals(self):
        t = '#ifdef PORT\nint a;\n#else\nint b;\n#endif\n#ifndef PORT\nint c;\n#endif\n#if defined(PORT) && !defined(X)\nint d;\n#elif 1\nint e;\n#endif\n'
        ps2 = A.preprocess(t, {}); pt = A.preprocess(t, {'PORT': 1})
        self.assertIn('int b;', ps2); self.assertNotIn('int a;', ps2); self.assertIn('int c;', ps2)
        self.assertIn('int e;', ps2); self.assertNotIn('int d;', ps2)
        self.assertIn('int a;', pt); self.assertNotIn('int b;', pt); self.assertNotIn('int c;', pt)
        self.assertIn('int d;', pt); self.assertNotIn('int e;', pt)

    def test_line_count_kept(self):
        t = '#ifdef PORT\nx\n#endif\n'
        self.assertEqual(A.preprocess(t, {}).count('\n'), t.count('\n'))


class ProtoTests(unittest.TestCase):
    def run_check(self, files):
        with tempfile.TemporaryDirectory() as d:
            for n, t in files.items(): mk(d, n, t)
            inf = infos(d)
            return A.check_protos(inf, A.PS2) + A.check_calls(inf, A.PS2)

    def test_arity_mismatch_with_definition(self):
        f = self.run_check({
            'f_00100000.c': 's32 func(s32 a, s32 b) { return a + b; }',
            'f_00100100.c': 's32 func_00100000(s32);\ns32 func(void) { return func_00100000(1); }'})
        e = [x for x in f if x.kind == 'proto' and x.sev == 'ERROR']
        self.assertEqual(len(e), 1); self.assertIn('aridad 2 vs 1', e[0].detail)
        self.assertTrue(any(x.kind == 'call' for x in f))   # llamada con 1 arg a callee de 2

    def test_same_address_different_spelling(self):
        f = self.run_check({
            'f_00100000.c': 's32 func(s32 a) { return a; }',
            'f_00100100.c': 'extern int f100000(void);\nint func(void){ return f100000(); }'})
        self.assertTrue(any(x.sev == 'ERROR' and 'aridad' in x.detail for x in f))

    def test_ptr_vs_int_is_warn_not_error(self):
        f = self.run_check({
            'f_00100000.c': 's32 func(void *p) { return 0; }',
            'f_00100100.c': 's32 func_00100000(s32);\nvoid func(void){}'})
        k = [x for x in f if x.kind == 'proto']
        self.assertEqual({x.sev for x in k}, {'WARN'})

    def test_float_vs_int_is_error(self):
        f = self.run_check({
            'f_00100000.c': 's32 func(f32 x) { return 0; }',
            'f_00100100.c': 's32 func_00100000(s32);\nvoid func(void){}'})
        self.assertTrue(any(x.sev == 'ERROR' for x in f))

    def test_unspecified_params_info_only(self):
        f = self.run_check({
            'f_00100000.c': 's32 func(s32 a) { return a; }',
            'f_00100100.c': 's32 func_00100000();\nvoid func(void){}'})
        self.assertEqual({x.sev for x in f if x.kind == 'proto'}, {'INFO'})

    def test_local_aliases_ignored(self):
        f = self.run_check({
            'f_00100000.c': 'extern void sub(int);\nvoid func(void){ sub(1); }',
            'f_00100100.c': 'extern void sub(int, int);\nvoid func(void){ sub(1, 2); }'})
        self.assertEqual(f, [])

    def test_consistent_is_quiet(self):
        f = self.run_check({
            'f_00100000.c': 's32 func(s32 a, void *b) { return a; }',
            'f_00100100.c': 's32 func_00100000(s32, void *);\nvoid func(void){ func_00100000(1, 0); }'})
        self.assertEqual([x for x in f if x.sev != 'INFO'], [])

    def test_asm_function_does_not_break(self):
        with tempfile.TemporaryDirectory() as d:
            mk(d, 'f_00100000.c', 'asm int f(int *d, unsigned n) {\n .set noreorder\n srl a1,a1,2\n beqz a1,L2\nL2:\n jr ra\n nop\n}\n')
            fi = infos(d)[0]
            self.assertIn('f', fi.defs)
            self.assertEqual(len(fi.defs['f'][1]), 2)


class LayoutTests(unittest.TestCase):
    def lay(self, src):
        with tempfile.TemporaryDirectory() as d:
            mk(d, 'f_00100000.c', src)
            return A.check_layouts(infos(d))

    def test_pointer_moves_members(self):
        f = self.lay('struct O { s32 a; void *p; s32 b; };\ns32 func(void){return 0;}')
        w = [x for x in f if x.sev == 'WARN']
        self.assertEqual(len(w), 1)
        self.assertIn('PS2 12 vs host 24', w[0].detail)
        self.assertIn('b', w[0].detail)

    def test_no_pointer_is_stable(self):
        f = self.lay('struct V { f32 x, y, z; s32 n; };\ns32 func(void){return 0;}')
        self.assertEqual(f, [])

    def test_pointer_at_end_changes_only_size(self):
        f = self.lay('struct E { s32 a; s32 *d; };')
        self.assertEqual(len(f), 1)
        self.assertIn('PS2 8 vs host 16', f[0].detail)

    def test_sizes_exact(self):
        with tempfile.TemporaryDirectory() as d:
            mk(d, 'f_00100000.c', 'struct S { char c; s16 h; s32 i; u64 q; char pad[3]; void (*fn)(s32); };')
            fi = infos(d)[0]
            sz, al, offs = A.size_align(('agg', 'struct', 'S'), A.PS2, fi.ctx)
            self.assertEqual(dict(offs), {'c': 0, 'h': 2, 'i': 4, 'q': 8, 'pad': 16, 'fn': 20})
            self.assertEqual(sz, 24)
            sz2, _, offs2 = A.size_align(('agg', 'struct', 'S'), A.HOST, fi.ctx)
            self.assertEqual(dict(offs2)['fn'], 24); self.assertEqual(sz2, 32)

    def test_union_and_array(self):
        with tempfile.TemporaryDirectory() as d:
            mk(d, 'f_00100000.c', 'union U { s32 i; void *p; char b[3]; };\nstruct A { union U u[2]; };')
            fi = infos(d)[0]
            self.assertEqual(A.size_align(('agg', 'struct', 'A'), A.PS2, fi.ctx)[0], 8)
            self.assertEqual(A.size_align(('agg', 'struct', 'A'), A.HOST, fi.ctx)[0], 16)

    def test_m2c_pointer_and_int_as_pointer(self):
        src = ('#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))\n'
               's32 func(s8 *arg0) {\n s8 *p = M2C_FIELD(arg0, s8 **, 0x10);\n'
               ' s32 v = *(s32 *)M2C_FIELD(arg0, s32 *, 0x20);\n M2C_FIELD(arg0, s16 *, 0x21) = 1;\n return 0;\n}\n')
        f = self.lay(src)
        kinds = {x.kind for x in f}
        self.assertIn('ptr_field', kinds)
        self.assertIn('overlap', kinds)       # s32 en 0x20 y s16 en 0x21
        self.assertIn('int_as_ptr', kinds)


class PortDiffTests(unittest.TestCase):
    def test_abi_change_detected(self):
        t = '#ifdef PORT\nvoid func(void *p, s32 n);\n#else\nvoid func(s32 p, s32 n);\n#endif\nvoid g(void){}\n'
        r = A.port_diff('x.c', t)
        self.assertTrue(r['abi_changed']); self.assertTrue(r['code_changed'])

    def test_code_only_change_is_not_abi(self):
        t = 's32 func(s32 a) {\n#ifdef PORT\n return a & 0x0fffffff;\n#else\n return a;\n#endif\n}\n'
        r = A.port_diff('x.c', t)
        self.assertEqual(r['abi_changed'], []); self.assertTrue(r['code_changed'])

    def test_struct_layout_change_under_port(self):
        t = 'struct S {\n s32 a;\n#ifdef PORT\n s32 *p;\n#else\n s32 p;\n#endif\n};\n'
        r = A.port_diff('x.c', t)
        self.assertTrue(any('struct S' in x for x in r['abi_changed']))

    def test_no_port_returns_none(self):
        self.assertIsNone(A.port_diff('x.c', 's32 func(void){return 0;}'))

    def test_ps2_hash_ignores_port_branch_and_comments(self):
        a = 's32 func(void){\n#ifdef PORT\n return 1;\n#else\n return 2;\n#endif\n}\n'
        b = '/* otro */ s32 func(void){ return 2; }\n'
        c = 's32 func(void){ return 3; }\n'
        self.assertEqual(A.ps2_hash(a), A.ps2_hash(b)); self.assertNotEqual(A.ps2_hash(a), A.ps2_hash(c))


class CliTests(unittest.TestCase):
    def test_check_exit_code_and_baseline(self):
        with tempfile.TemporaryDirectory() as d:
            mk(d, 'f_00100000.c', 's32 func(s32 a, s32 b) { return a; }')
            mk(d, 'f_00100100.c', 's32 func_00100000(s32);\nvoid func(void){}')
            base = os.path.join(d, 'base.json')
            self.assertEqual(A.main(['check', d, '--show', 'ERROR', '--write-baseline', base]), 1)
            self.assertEqual(A.main(['check', d, '--show', 'ERROR', '--baseline', base]), 0)   # nada nuevo
            mk(d, 'f_00100200.c', 's32 func_00100000(void);\nvoid func(void){}')
            self.assertEqual(A.main(['check', d, '--show', 'ERROR', '--baseline', base]), 1)   # empeora

    def test_manifest_roundtrip(self):
        with tempfile.TemporaryDirectory() as d:
            p = mk(d, 'f_00100000.c', 's32 func(void) { return 1; }')
            m = os.path.join(d, 'm.json')
            self.assertEqual(A.main(['manifest', d, '--write', m]), 0)
            self.assertEqual(A.main(['manifest', d, '--check', m]), 0)
            mk(d, 'f_00100000.c', 's32 func(void) { return 2; }')
            self.assertEqual(A.main(['manifest', d, '--check', m]), 1)

    def test_robust_on_repo_sources(self):
        roots = [r for r in A.default_roots() if os.path.isdir(r)]
        if not roots: self.skipTest('sin src/')
        inf = [A.analyze(p, open(p, errors='replace').read()) for p in A.collect(roots)]
        self.assertGreater(len(inf), 0)


if __name__ == '__main__':
    unittest.main(verbosity=1)
