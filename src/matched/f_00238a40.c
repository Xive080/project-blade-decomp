#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
/*
 * This header contains macros emitted by m2c in "valid syntax" mode,
 * which can be enabled by passing `--valid-syntax` on the command line.
 *
 * In this mode, unhandled types and expressions are emitted as macros so
 * that the output is compilable without human intervention.
 */
s32 func_00239570();                                /* extern */

s32 func(void *arg0, s32 arg1) {
    s32 sp3C;

    if (func_00239570() != 0) {
        M2C_FIELD(M2C_FIELD(arg0, void **, 0x10), s32 (**)(void *, s32, s32 *), 0x10)(arg0, arg1, &sp3C);
    }
    return sp3C;
}
