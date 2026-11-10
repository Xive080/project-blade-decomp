#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
/*
 * This header contains macros emitted by m2c in "valid syntax" mode,
 * which can be enabled by passing `--valid-syntax` on the command line.
 *
 * In this mode, unhandled types and expressions are emitted as macros so
 * that the output is compilable without human intervention.
 */
s32 func_001b9c00();                            /* extern */

s32 func(void *arg0, s32 *arg1, s32 arg2, void *arg3) {
    s32 var_s0;

    var_s0 = 0;
    switch (arg2) {                                 /* irregular */
    case 5:
        *arg1 |= 1;
        break;
    case 1:
        *arg1 |= 1;
        if (!(M2C_FIELD(arg3, f32 *, 4) < M2C_FIELD(arg0, f32 *, 0x28)) && ((u32) M2C_FIELD(arg3, u32 *, 0) >= (u32) M2C_FIELD(arg0, u32 *, 0x24))) {
            var_s0 = 1;
        }
        break;
    }
    func_001b9c00();
    return var_s0;
}
