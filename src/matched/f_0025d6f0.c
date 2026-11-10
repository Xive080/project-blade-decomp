/*
 * This header contains macros emitted by m2c in "valid syntax" mode,
 * which can be enabled by passing `--valid-syntax` on the command line.
 *
 * In this mode, unhandled types and expressions are emitted as macros so
 * that the output is compilable without human intervention.
 */
s32 func_0011ec80(s32, s32, s32);       /* extern */

s32 func(s32 arg0, s32 arg1, s32 arg2) {
    func_0011ec80(arg2, 0, 0x14);
    return 0;
}
