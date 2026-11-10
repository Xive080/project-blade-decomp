#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
/*
 * This header contains macros emitted by m2c in "valid syntax" mode,
 * which can be enabled by passing `--valid-syntax` on the command line.
 *
 * In this mode, unhandled types and expressions are emitted as macros so
 * that the output is compilable without human intervention.
 */
s32 func_0011ec80(void *, s32, s32);    /* extern */
extern s32 G_84B8;

s32 func(void *arg0, void *arg1) {
    if ((G_84B8 == 0) || (M2C_FIELD(arg0, s32 *, 0x1E4) == 0)) {
        return 0;
    }
    func_0011ec80(arg1, 0, 8);
    M2C_FIELD(arg1, s32 *, 0) = 1;
    M2C_FIELD(arg1, s32 *, 4) = 0x12;
    return 1;
}
