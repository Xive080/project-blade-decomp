/*
 * This header contains macros emitted by m2c in "valid syntax" mode,
 * which can be enabled by passing `--valid-syntax` on the command line.
 *
 * In this mode, unhandled types and expressions are emitted as macros so
 * that the output is compilable without human intervention.
 */
s32 func_00171880();                            /* extern */
s32 func_00198120(s32, s32);            /* extern */
s32 func_001a3fa0();                                /* extern */
extern s32 (*D_00309E00)(s32, s32);
extern s32 D_00309E04;
extern s32 D_00309E08;
extern s32 D_00309E0C;

void func(s32 arg0) {
    func_00171880();
    D_00309E04 = arg0;
    D_00309E08 = func_001a3fa0();
    D_00309E0C = 1;
    func_00198120(0, 0);
    D_00309E00(arg0, 1);
}
