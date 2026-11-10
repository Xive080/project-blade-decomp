struct S_arg1 { char pad34[52]; s32 f34; s32 f38; };
/*
 * This header contains macros emitted by m2c in "valid syntax" mode,
 * which can be enabled by passing `--valid-syntax` on the command line.
 *
 * In this mode, unhandled types and expressions are emitted as macros so
 * that the output is compilable without human intervention.
 */
#pragma mpwc_relax on
s32 func_001892c0(s32);                         /* extern */

void func(s32 arg0, struct S_arg1 *arg1) {
    func_001892c0(arg1->f34);
    arg1->f34 = 0;
    arg1->f38 = 0;
}
