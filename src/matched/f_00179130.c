/*
 * This header contains macros emitted by m2c in "valid syntax" mode,
 * which can be enabled by passing `--valid-syntax` on the command line.
 *
 * In this mode, unhandled types and expressions are emitted as macros so
 * that the output is compilable without human intervention.
 */
s32 func_0016afd0();                                /* extern */
extern s32 (*D_00306088)(s32);

void func(s32 arg0) {
    if (func_0016afd0() == 0) {
        D_00306088(arg0);
    }
}
