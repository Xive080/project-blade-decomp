#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
/*
 * This header contains macros emitted by m2c in "valid syntax" mode,
 * which can be enabled by passing `--valid-syntax` on the command line.
 *
 * In this mode, unhandled types and expressions are emitted as macros so
 * that the output is compilable without human intervention.
 */
void *func_0017a3c0();                              /* extern */

void func(void *arg0, s32 arg1) {
    M2C_FIELD(func_0017a3c0(), s32 (**)(void *, s32), 8)(arg0, arg1);
    if ((M2C_FIELD(arg0, s32 *, 0x3C) != 0) && !(M2C_FIELD(arg0, s32 *, 0x10) & 2) && (M2C_FIELD(M2C_FIELD(arg0, void **, 0xC), s32 (**)(void *, s32), 0x10)(arg0, 0) != 0)) {
        M2C_FIELD(M2C_FIELD(arg0, void **, 0xC), s32 (**)(void *, s32, s32), 0x14)(arg0, 0, 0);
    }
    if ((M2C_FIELD(arg0, s32 *, 0x3C) != 2) && !(M2C_FIELD(arg0, s32 *, 0x10) & 2) && (M2C_FIELD(M2C_FIELD(arg0, void **, 0xC), s32 (**)(void *, s32), 0x10)(arg0, 2) != 0)) {
        M2C_FIELD(M2C_FIELD(arg0, void **, 0xC), s32 (**)(void *, s32, s32), 0x14)(arg0, 2, 0);
    }
}
