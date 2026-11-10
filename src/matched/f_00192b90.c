#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
/*
 * This header contains macros emitted by m2c in "valid syntax" mode,
 * which can be enabled by passing `--valid-syntax` on the command line.
 *
 * In this mode, unhandled types and expressions are emitted as macros so
 * that the output is compilable without human intervention.
 */
s32 func_0011ec80(void *, s32, s32);    /* extern */
extern s32 G_805C;
extern s32 G_8060;
extern s32 G_84C8;

s32 func(void *arg0, void *arg1) {
    if ((G_805C >= 0) || (G_8060 != M2C_FIELD(arg0, s32 *, 0xA0))) {
        return 0;
    }
    func_0011ec80(arg1, 0, 0x18);
    M2C_FIELD(arg1, s64 *, 0) = (s64) (G_84C8 << 0xA);
    M2C_FIELD(arg1, s64 *, 0x10) = (s64) (G_84C8 << 0xA);
    M2C_FIELD(arg1, s64 *, 8) = (s64) (0x7D0000 - M2C_FIELD(arg1, s64 *, 0));
    return 1;
}
