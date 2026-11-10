#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
/*
 * This header contains macros emitted by m2c in "valid syntax" mode,
 * which can be enabled by passing `--valid-syntax` on the command line.
 *
 * In this mode, unhandled types and expressions are emitted as macros so
 * that the output is compilable without human intervention.
 */
#pragma mpwc_relax on
extern s32 G_83A0;

s32 func(s32 arg0) {
    s8 *temp_a0;

    temp_a0 = (s8 *)(arg0 + G_83A0);
    M2C_FIELD(temp_a0, s32 *, 0) = 0x64;
    M2C_FIELD(temp_a0, s32 *, 4) = 0;
    M2C_FIELD(temp_a0, s32 *, 8) = 0;
    M2C_FIELD(temp_a0, s32 *, 0xC) = 0;
    return arg0;
}
