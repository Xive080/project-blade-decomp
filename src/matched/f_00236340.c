struct S_arg0 { char pad34[52]; s32 f34; s32 f38; s32 f3C; s32 f40; s32 f44; s32 f48; s32 f4C; s32 f50; s32 f54; s32 f58; s32 f5C; s32 f60; s32 f64; s32 f68; s32 f6C; };
/*
 * This header contains macros emitted by m2c in "valid syntax" mode,
 * which can be enabled by passing `--valid-syntax` on the command line.
 *
 * In this mode, unhandled types and expressions are emitted as macros so
 * that the output is compilable without human intervention.
 */
#pragma mpwc_relax on
s32 func_00188ff0(s32);                         /* extern */
s32 func_001892c0(s32);                         /* extern */
s32 func_00189650(s32);                         /* extern */

void func(struct S_arg0 *arg0) {
    s32 temp_a0;
    s32 temp_a0_2;

    func_00188ff0(arg0->f3C);
    arg0->f3C = 0;
    func_00188ff0(arg0->f40);
    arg0->f40 = 0;
    temp_a0 = arg0->f44;
    if (temp_a0 != 0) {
        func_001892c0(temp_a0);
        arg0->f44 = 0;
    }
    temp_a0_2 = arg0->f48;
    if (temp_a0_2 != 0) {
        func_001892c0(temp_a0_2);
        arg0->f48 = 0;
    }
    arg0->f4C = 0;
    func_00188ff0(arg0->f50);
    func_00188ff0(arg0->f54);
    arg0->f50 = 0;
    arg0->f54 = 0;
    arg0->f58 = 0;
    func_00188ff0(arg0->f5C);
    func_00188ff0(arg0->f64);
    func_00188ff0(arg0->f68);
    arg0->f5C = 0;
    arg0->f60 = 0;
    arg0->f64 = 0;
    arg0->f68 = 0;
    arg0->f6C = 0;
    func_00189650(arg0->f34);
    arg0->f34 = 0;
    arg0->f38 = 0;
}
