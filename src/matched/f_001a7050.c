#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
/*
 * This header contains macros emitted by m2c in "valid syntax" mode,
 * which can be enabled by passing `--valid-syntax` on the command line.
 *
 * In this mode, unhandled types and expressions are emitted as macros so
 * that the output is compilable without human intervention.
 */
#pragma mpwc_relax on
extern struct { s32 v; char pad[12]; } D_0032A620_;
#define D_0032A620 (D_0032A620_.v)
extern s32 G_8524;

s32 func(s32 arg0) {
    s32 *temp_v0;
    s32 temp_a0;

    temp_v0 = (s32 *)(arg0 + G_8524);
    temp_a0 = *temp_v0;
    if (temp_a0 != 0) {
        *temp_v0 = 0;
        M2C_FIELD(&D_0032A620, s32 (**)(s32), 0x134)(temp_a0);
    }
    return arg0;
}
