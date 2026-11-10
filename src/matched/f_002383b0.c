/*
 * This header contains macros emitted by m2c in "valid syntax" mode,
 * which can be enabled by passing `--valid-syntax` on the command line.
 *
 * In this mode, unhandled types and expressions are emitted as macros so
 * that the output is compilable without human intervention.
 */
s32 func_00238aa0(void *, s32, s32);    /* extern */

void func(s32 *arg0) {
    if (*arg0 != 0) {
        func_00238aa0((s8 *)arg0 + 4, 0, 0);
    }
}
