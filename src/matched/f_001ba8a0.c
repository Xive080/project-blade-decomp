#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
/*
 * This header contains macros emitted by m2c in "valid syntax" mode,
 * which can be enabled by passing `--valid-syntax` on the command line.
 *
 * In this mode, unhandled types and expressions are emitted as macros so
 * that the output is compilable without human intervention.
 */
s32 func_001a9c60(s32);                         /* extern */

void func(void *arg0) {
    func_001a9c60(M2C_FIELD(arg0, s32 *, 8));
    if (M2C_FIELD(arg0, s32 *, 4) == 1) {
        func_001a9c60(3);
    }
}
