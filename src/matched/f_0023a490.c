#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
/*
 * This header contains macros emitted by m2c in "valid syntax" mode,
 * which can be enabled by passing `--valid-syntax` on the command line.
 *
 * In this mode, unhandled types and expressions are emitted as macros so
 * that the output is compilable without human intervention.
 */
s32 func_001a8d40(s32);                         /* extern */
void *func_00239190();                              /* extern */

void func(s32 arg0) {
    func_001a8d40(arg0 + 0x38);
    M2C_FIELD(func_00239190(), s32 (**)(s32), 8)(arg0);
}
