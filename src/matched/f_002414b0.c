struct S_arg1 { char pad34[52]; s32 f34; s32 f38; s32 f3C; s32 f40; s32 f44; };
/*
 * This header contains macros emitted by m2c in "valid syntax" mode,
 * which can be enabled by passing `--valid-syntax` on the command line.
 *
 * In this mode, unhandled types and expressions are emitted as macros so
 * that the output is compilable without human intervention.
 */
#pragma mpwc_relax on
s32 func_00188ff0(s32);                         /* extern */
s32 func_00189650(s32);                         /* extern */

void func(s32 arg0, struct S_arg1 *arg1) {
    func_00188ff0(arg1->f3C);
    func_00188ff0(arg1->f40);
    arg1->f3C = 0;
    arg1->f40 = 0;
    arg1->f44 = 0;
    func_00189650(arg1->f34);
    arg1->f34 = 0;
    arg1->f38 = 0;
}
