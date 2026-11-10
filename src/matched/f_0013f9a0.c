/*
 * This header contains macros emitted by m2c in "valid syntax" mode,
 * which can be enabled by passing `--valid-syntax` on the command line.
 *
 * In this mode, unhandled types and expressions are emitted as macros so
 * that the output is compilable without human intervention.
 */
s32 func_00127010(s32, s32 *, s32);              /* extern */
extern s32 D_0013F9E0;

s32 func(s32 arg0, s32 arg1, s32 arg2, s32 arg3) {
    func_00127010(arg0, &D_0013F9E0, arg3);
    return arg0;
}
