#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
/*
 * This header contains macros emitted by m2c in "valid syntax" mode,
 * which can be enabled by passing `--valid-syntax` on the command line.
 *
 * In this mode, unhandled types and expressions are emitted as macros so
 * that the output is compilable without human intervention.
 */
s32 func_001784a0(s32);                     /* extern */
s32 func_001785a0(s32);                     /* extern */
s32 func_00198120(s32, s32);                /* extern */
s32 func_0024b310(s32);                         /* extern */
s32 func_0024b470(s32, s32);                /* extern */
s32 func_0024b4b0(s32, s32);            /* extern */
s32 func_0024b540(s32, s32, s32);       /* extern */

s32 func(void *arg0, s32 arg1) {
    s32 temp_a0;
    s32 temp_v0;

    switch (arg1) {                                 /* irregular */
    case 6:
        if (M2C_FIELD(arg0, s32 *, 8) & 1) {
            func_001785a0(5);
        } else {
            temp_a0 = M2C_FIELD(arg0, s32 *, 0x14);
            if (temp_a0 != 0) {
                func_00198120(temp_a0, 1);
            } else {
                func_001784a0(0);
            }
            func_001785a0(0);
        }
        break;
    case 0:
        temp_v0 = func_0024b310(0xB);
        if (M2C_FIELD(arg0, s32 *, 8) & 1) {
            if ((u32) (temp_v0 - 1) < 2U) {
                func_0024b4b0(0xB, 1);
            }
        } else {
            if ((temp_v0 == 0) || (temp_v0 == 3)) {
                func_0024b540(0xB, 1, M2C_FIELD(arg0, s32 *, 0x10));
            }
            func_0024b470(0xB, M2C_FIELD(arg0, s32 *, 0xC));
        }
        break;
    }
    return 1;
}
