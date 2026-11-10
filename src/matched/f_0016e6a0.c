#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
/*
 * This header contains macros emitted by m2c in "valid syntax" mode,
 * which can be enabled by passing `--valid-syntax` on the command line.
 *
 * In this mode, unhandled types and expressions are emitted as macros so
 * that the output is compilable without human intervention.
 */
s32 func_001ca2d0(s32, s32, u32);               /* extern */
extern s32 D_0032A620;

void func(s32 arg0, u32 arg1, void *arg2) {
    M2C_FIELD(arg2, s32 *, 0x348) = M2C_FIELD(&D_0032A620, s32 (**)(u32), 0x130)(arg1);
    func_001ca2d0(arg0, M2C_FIELD(arg2, s32 *, 0x348), arg1);
    M2C_FIELD(arg2, u32 *, 0x34C) = (u32) (arg1 >> 4);
}
