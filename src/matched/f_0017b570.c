#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
/*
 * This header contains macros emitted by m2c in "valid syntax" mode,
 * which can be enabled by passing `--valid-syntax` on the command line.
 *
 * In this mode, unhandled types and expressions are emitted as macros so
 * that the output is compilable without human intervention.
 */
#define NULL 0
extern s32 D_0032A620;

void func(s8 *arg0) {
    if ((M2C_FIELD(arg0, s32 *, 0) == 2) && (arg0 != NULL)) {
        M2C_FIELD(&D_0032A620, s32 (**)(s8 *), 0x134)(M2C_FIELD(arg0, s8 **, 0x1C));
        M2C_FIELD(&D_0032A620, s32 (**)(s8 *), 0x134)(M2C_FIELD(arg0, s8 **, 0x2C));
        M2C_FIELD(&D_0032A620, s32 (**)(s8 *), 0x134)(M2C_FIELD(arg0, s8 **, 0x30));
    }
    M2C_FIELD(&D_0032A620, s32 (**)(s8 *), 0x134)(arg0);
}
