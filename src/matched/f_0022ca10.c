#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
/*
 * This header contains macros emitted by m2c in "valid syntax" mode,
 * which can be enabled by passing `--valid-syntax` on the command line.
 *
 * In this mode, unhandled types and expressions are emitted as macros so
 * that the output is compilable without human intervention.
 */
s32 func_001a8e80(s8 *);                      /* extern */
s32 func_0022caa0();                            /* extern */

s32 func(s8 *arg0, s32 arg1) {
    s32 temp_v1;

    M2C_FIELD(arg0, s32 *, 0x3C) = arg1;
    temp_v1 = M2C_FIELD(arg0, s32 *, 0x3C);
    switch (temp_v1) {                              /* irregular */
    case 0:
        break;
    case 2:
        func_0022caa0();
        M2C_FIELD(arg0, s32 *, 0x10) = (s32) (M2C_FIELD(arg0, s32 *, 0x10) & ~1);
        break;
    case 4:
        M2C_FIELD(arg0, s32 *, 0x10) = (s32) (M2C_FIELD(arg0, s32 *, 0x10) & ~1);
        func_001a8e80(arg0 + 0x1708);
        break;
    }
    return 1;
}
