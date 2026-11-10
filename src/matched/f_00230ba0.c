#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
/*
 * This header contains macros emitted by m2c in "valid syntax" mode,
 * which can be enabled by passing `--valid-syntax` on the command line.
 *
 * In this mode, unhandled types and expressions are emitted as macros so
 * that the output is compilable without human intervention.
 */
s32 func_0011ec80(s8 *, s32, s32);    /* extern */
s32 func_00188ff0(s32);                         /* extern */
s32 func_00189650(s32);                         /* extern */

void func(s32 arg0, s8 *arg1) {
    s8 *temp_s0;

    temp_s0 = (s8 *)arg1 + 0x114;
    func_00188ff0(M2C_FIELD(arg1, s32 *, 0x120));
    func_00188ff0(M2C_FIELD(temp_s0, s32 *, 0x14));
    func_00188ff0(M2C_FIELD(temp_s0, s32 *, 0x18));
    func_00189650(M2C_FIELD(arg1, s32 *, 0x114));
    func_0011ec80(temp_s0, 0, 0x4C);
}
