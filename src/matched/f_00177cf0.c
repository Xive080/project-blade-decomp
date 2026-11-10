/*
 * This header contains macros emitted by m2c in "valid syntax" mode,
 * which can be enabled by passing `--valid-syntax` on the command line.
 *
 * In this mode, unhandled types and expressions are emitted as macros so
 * that the output is compilable without human intervention.
 */
s32 func_00121a58(s32 *, s32);              /* extern */
extern s32 D_003082F0;

s32 func(s32 arg0) {
    if (arg0 != 0) {
        func_00121a58(&D_003082F0, arg0);
        return 1;
    }
    return 0;
}
