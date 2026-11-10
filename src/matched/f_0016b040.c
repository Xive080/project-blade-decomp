/*
 * This header contains macros emitted by m2c in "valid syntax" mode,
 * which can be enabled by passing `--valid-syntax` on the command line.
 *
 * In this mode, unhandled types and expressions are emitted as macros so
 * that the output is compilable without human intervention.
 */
s32 func_00109bd0();                                /* extern */
s32 func_00109c00();                            /* extern */
s32 func_00109c10(s32);                         /* extern */
s32 func_00109c30(s32);                         /* extern */
extern s32 D_00305F50;
extern s32 D_00305F7C;

void func(void) {
    if (D_00305F50 != 0) {
        func_00109c10(D_00305F7C);
        func_00109c30(func_00109bd0());
        func_00109c00();
    }
}
