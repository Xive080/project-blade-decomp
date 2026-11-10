struct S_arg1 { char pad24[36]; s32 f24; s32 f28; };
/*
 * This header contains macros emitted by m2c in "valid syntax" mode,
 * which can be enabled by passing `--valid-syntax` on the command line.
 *
 * In this mode, unhandled types and expressions are emitted as macros so
 * that the output is compilable without human intervention.
 */
#pragma mpwc_relax on
s32 func_00188ff0(s32);                         /* extern */

void func(s32 arg0, struct S_arg1 *arg1) {
    func_00188ff0(arg1->f24);
    arg1->f24 = 0;
    arg1->f28 = 0;
}
