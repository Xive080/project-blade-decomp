#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
/*
 * This header contains macros emitted by m2c in "valid syntax" mode,
 * which can be enabled by passing `--valid-syntax` on the command line.
 *
 * In this mode, unhandled types and expressions are emitted as macros so
 * that the output is compilable without human intervention.
 */
s32 func_0018b8e0();                            /* extern */
s32 func_0018b9a0(s32, s8 *);                 /* extern */

void func(s8 *arg0) {
    func_0018b8e0();
    M2C_FIELD(arg0, s32 *, 8) = (s32) (M2C_FIELD(arg0, s32 *, 8) + 1);
    func_0018b9a0(M2C_FIELD(M2C_FIELD(arg0, s8 **, 0xC), s32 *, 0x84) + (M2C_FIELD(arg0, s32 *, 0x10) * 0x14) + 4, arg0 - 8);
}
