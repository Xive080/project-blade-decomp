#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
/*
 * This header contains macros emitted by m2c in "valid syntax" mode,
 * which can be enabled by passing `--valid-syntax` on the command line.
 *
 * In this mode, unhandled types and expressions are emitted as macros so
 * that the output is compilable without human intervention.
 */
extern s32 D_0032A620;

void func(void) {
    *M2C_FIELD(&D_0032A620, s32 *(**)(s32), 0x130)(0x4C) = 0;
}
