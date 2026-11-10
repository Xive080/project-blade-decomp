/*
 * This header contains macros emitted by m2c in "valid syntax" mode,
 * which can be enabled by passing `--valid-syntax` on the command line.
 *
 * In this mode, unhandled types and expressions are emitted as macros so
 * that the output is compilable without human intervention.
 */
s32 func_001ca2d0(s32, s32 *, s32);              /* extern */
extern s32 D_00332F60;

s32 func(s32 arg0, s32 arg1) {
    func_001ca2d0(arg0, &D_00332F60, arg1);
    return 1;
}
