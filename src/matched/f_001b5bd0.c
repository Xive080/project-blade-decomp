/*
 * This header contains macros emitted by m2c in "valid syntax" mode,
 * which can be enabled by passing `--valid-syntax` on the command line.
 *
 * In this mode, unhandled types and expressions are emitted as macros so
 * that the output is compilable without human intervention.
 */
s32 func_001aa020();                            /* extern */
extern s32 D_002FA6D0;
extern s32 D_00327D5C;

s32 func(s32 arg0) {
    func_001aa020();
    D_002FA6D0 = arg0;
    D_00327D5C = arg0;
    return 1;
}
