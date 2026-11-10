#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
/*
 * This header contains macros emitted by m2c in "valid syntax" mode,
 * which can be enabled by passing `--valid-syntax` on the command line.
 *
 * In this mode, unhandled types and expressions are emitted as macros so
 * that the output is compilable without human intervention.
 */
s32 func_001b8e40(s32, s8 *);                 /* extern */

void func(s8 *arg0) {
    s32 temp_a0;
    s32 temp_a0_2;
    s32 temp_a0_3;
    s32 temp_a0_4;
    s32 temp_a0_5;

    func_001b8e40(M2C_FIELD(arg0, s32 *, 0xBC), arg0 + 0x70);
    temp_a0 = M2C_FIELD(arg0, s32 *, 0xB4);
    if (temp_a0 != 0) {
        func_001b8e40(temp_a0, arg0 + 0x70);
    }
    temp_a0_2 = M2C_FIELD(arg0, s32 *, 0xB8);
    if (temp_a0_2 != 0) {
        func_001b8e40(temp_a0_2, arg0 + 0x70);
    }
    temp_a0_3 = M2C_FIELD(arg0, s32 *, 0xC0);
    if (temp_a0_3 != 0) {
        func_001b8e40(temp_a0_3, arg0 + 0x70);
    }
    temp_a0_4 = M2C_FIELD(arg0, s32 *, 0xC4);
    if (temp_a0_4 != 0) {
        func_001b8e40(temp_a0_4, arg0 + 0x70);
    }
    temp_a0_5 = M2C_FIELD(arg0, s32 *, 0xC8);
    if (temp_a0_5 != 0) {
        func_001b8e40(temp_a0_5, arg0 + 0x70);
    }
    M2C_FIELD(arg0, s32 *, 0x8C) = 1;
    M2C_FIELD(arg0, s32 *, 0x7C) = 2;
}
