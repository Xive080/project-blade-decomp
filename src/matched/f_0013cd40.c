#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
/*
 * This header contains macros emitted by m2c in "valid syntax" mode,
 * which can be enabled by passing `--valid-syntax` on the command line.
 *
 * In this mode, unhandled types and expressions are emitted as macros so
 * that the output is compilable without human intervention.
 */
void *func_00149e60();                              /* extern */

s32 func(s32 arg0) {
    M2C_FIELD(func_00149e60(), s32 (**)(s32), 0x1C)(arg0);
    return 1;
}
