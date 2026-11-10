/*
 * This header contains macros emitted by m2c in "valid syntax" mode,
 * which can be enabled by passing `--valid-syntax` on the command line.
 *
 * In this mode, unhandled types and expressions are emitted as macros so
 * that the output is compilable without human intervention.
 */
s32 func_00148900(s32, s32, s32);       /* extern */
extern s32 G_8368;

s32 func(void) {
    G_8368 = func_00148900(2, 0, 0x16);
    return 1;
}
