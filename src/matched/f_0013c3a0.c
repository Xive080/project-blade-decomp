#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
/*
 * This header contains macros emitted by m2c in "valid syntax" mode,
 * which can be enabled by passing `--valid-syntax` on the command line.
 *
 * In this mode, unhandled types and expressions are emitted as macros so
 * that the output is compilable without human intervention.
 */
#define NULL 0
s32 func_002014f0(s32);                         /* extern */

s32 func(s8 *arg0) {
    s32 temp_a0;

    if ((arg0 == NULL) || (temp_a0 = M2C_FIELD(arg0, s32 *, 0x30), (temp_a0 == 0))) {
        return 0;
    }
    func_002014f0(temp_a0);
    return 1;
}
