struct S_arg0 { char pad84[132]; s32 f84; s32 f88; s32 f8C; s32 f90; };
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
    func_00188ff0(arg0->f88);
    arg0->f88 = 0;
    func_00188ff0(arg0->f8C);
    arg0->f8C = 0;
    func_001892c0(arg0->f90);
    arg0->f90 = 0;
    func_00189650(arg0->f84);
    arg0->f84 = 0;
}
