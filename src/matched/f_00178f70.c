/*
 * This header contains macros emitted by m2c in "valid syntax" mode,
 * which can be enabled by passing `--valid-syntax` on the command line.
 *
 * In this mode, unhandled types and expressions are emitted as macros so
 * that the output is compilable without human intervention.
 */
extern s32 D_00306070;
extern s32 (*D_00306088)(s32);

void func(void) {
    D_00306088(D_00306070);
    D_00306070 = 0;
}
