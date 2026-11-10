/*
 * This header contains macros emitted by m2c in "valid syntax" mode,
 * which can be enabled by passing `--valid-syntax` on the command line.
 *
 * In this mode, unhandled types and expressions are emitted as macros so
 * that the output is compilable without human intervention.
 */
s32 func_0011ec80(s32 *, s32, s32); /* extern */
extern s32 D_00333260;
extern s32 D_003334A0;

void func(s32 arg0) {
    func_0011ec80(&D_00333260, 0, 0x2B8);
    D_003334A0 = arg0;
}
