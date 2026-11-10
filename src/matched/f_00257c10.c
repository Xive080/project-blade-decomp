/*
 * This header contains macros emitted by m2c in "valid syntax" mode,
 * which can be enabled by passing `--valid-syntax` on the command line.
 *
 * In this mode, unhandled types and expressions are emitted as macros so
 * that the output is compilable without human intervention.
 */
s32 func_001892c0(s32);                         /* extern */
s32 func_00257c60();                            /* extern */
s32 func_00257d20();                            /* extern */
extern s32 D_00333260;
extern s32 D_0033349C;

void func(void) {
    if (D_00333260 != 0) {
        func_00257d20();
        func_00257c60();
        func_001892c0(D_00333260);
        D_00333260 = 0;
        D_0033349C = 0;
    }
}
