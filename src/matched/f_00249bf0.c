#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
/*
 * This header contains macros emitted by m2c in "valid syntax" mode,
 * which can be enabled by passing `--valid-syntax` on the command line.
 *
 * In this mode, unhandled types and expressions are emitted as macros so
 * that the output is compilable without human intervention.
 */
s32 func_001b9240(s32, void *);                     /* extern */

s32 func(void *arg0, s32 arg1) {
    if (func_001b9240(arg1, arg0) != 0) {
        if (M2C_FIELD(arg0, s32 *, 0) == 0x40000) {
            if ((M2C_FIELD(arg0, s32 *, 0x3C) != 0) && !(M2C_FIELD(arg0, s32 *, 0x10) & 2) && (M2C_FIELD(M2C_FIELD(arg0, void **, 0xC), s32 (**)(void *, s32), 0x10)(arg0, 0) != 0)) {
                M2C_FIELD(M2C_FIELD(arg0, void **, 0xC), s32 (**)(void *, s32, s32), 0x14)(arg0, 0, 0);
            }
        } else if ((M2C_FIELD(arg0, s32 *, 0x3C) != 1) && !(M2C_FIELD(arg0, s32 *, 0x10) & 2) && (M2C_FIELD(M2C_FIELD(arg0, void **, 0xC), s32 (**)(void *, s32), 0x10)(arg0, 1) != 0)) {
            M2C_FIELD(M2C_FIELD(arg0, void **, 0xC), s32 (**)(void *, s32, s32), 0x14)(arg0, 1, 0);
        }
    }
    return 1;
}
