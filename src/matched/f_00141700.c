#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
/*
 * This header contains macros emitted by m2c in "valid syntax" mode,
 * which can be enabled by passing `--valid-syntax` on the command line.
 *
 * In this mode, unhandled types and expressions are emitted as macros so
 * that the output is compilable without human intervention.
 */
s32 func_001b2f10();                            /* extern */
s32 func_001c35a0();                                /* extern */

s32 func(void *arg0, s32 *arg1) {
    func_001b2f10();
    M2C_FIELD(arg0, s32 *, 0) = (s32) *arg1;
    M2C_FIELD(arg0, s32 *, 0x288) = func_001c35a0();
    return 1;
}
