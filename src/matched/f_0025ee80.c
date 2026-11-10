#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
/*
 * This header contains macros emitted by m2c in "valid syntax" mode,
 * which can be enabled by passing `--valid-syntax` on the command line.
 *
 * In this mode, unhandled types and expressions are emitted as macros so
 * that the output is compilable without human intervention.
 */
s32 func_00131540(s32, s32);            /* extern */

s32 func(void *arg0) {
    M2C_FIELD(arg0, s32 *, 0xC) = 0;
    func_00131540(0, 0);
    return 1;
}
