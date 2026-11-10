#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
/*
 * This header contains macros emitted by m2c in "valid syntax" mode,
 * which can be enabled by passing `--valid-syntax` on the command line.
 *
 * In this mode, unhandled types and expressions are emitted as macros so
 * that the output is compilable without human intervention.
 */
#define NULL 0
s32 func_0011ec80(s8 *, s32, s32);    /* extern */
extern s8 *G_84AC;

s32 func(s8 *arg0) {
    M2C_FIELD(arg0, s32 *, 0x158) = 0;
    M2C_FIELD(arg0, s32 *, 0x154) = 0;
    M2C_FIELD(arg0, s32 *, 0x15C) = 0;
    M2C_FIELD(arg0, s32 *, 0x160) = 0;
    M2C_FIELD(arg0, s32 *, 0x174) = 0;
    M2C_FIELD(arg0, s32 *, 0x168) = 0x1000;
    M2C_FIELD(arg0, s32 *, 0x16C) = 0;
    M2C_FIELD(arg0, s32 *, 0x178) = 0;
    M2C_FIELD(arg0, s32 *, 0x170) = 0;
    M2C_FIELD(arg0, s32 *, 0x17C) = 0x3F800000;
    func_0011ec80(arg0 + 0x78, 0, 8);
    func_0011ec80(arg0 + 0x80, 0, 8);
    func_0011ec80(arg0 + 0x88, 0, 8);
    M2C_FIELD(arg0, s32 *, 0x90) = 0;
    if (G_84AC != NULL) {
        M2C_FIELD(G_84AC, s32 (**)(s8 *, s32, s8 *), 0x10)(G_84AC, 3, arg0);
    }
    return 1;
}
