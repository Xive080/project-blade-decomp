#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
/*
 * This header contains macros emitted by m2c in "valid syntax" mode,
 * which can be enabled by passing `--valid-syntax` on the command line.
 *
 * In this mode, unhandled types and expressions are emitted as macros so
 * that the output is compilable without human intervention.
 */
s32 func_001cc7d0(s32);                         /* extern */
extern s32 D_0032A620;

s32 func(void *arg0) {
    s32 temp_a0;

    temp_a0 = M2C_FIELD(arg0, s32 *, 0x1C08);
    if (temp_a0 != 0) {
        func_001cc7d0(temp_a0);
    }
    M2C_FIELD(&D_0032A620, s32 (**)(void *), 0x134)(arg0);
    return 1;
}
