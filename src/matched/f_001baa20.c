#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
/*
 * This header contains macros emitted by m2c in "valid syntax" mode,
 * which can be enabled by passing `--valid-syntax` on the command line.
 *
 * In this mode, unhandled types and expressions are emitted as macros so
 * that the output is compilable without human intervention.
 */
s32 func_00202e40(void *, s32 *, s32);      /* extern */
extern s32 D_001BAA80;
extern s32 D_001BABB0;

s32 func(void *arg0, s32 arg1) {
    s32 temp_a2;
    void *temp_a0;

    temp_a0 = M2C_FIELD(arg0, void **, 0x18);
    temp_a2 = M2C_FIELD(temp_a0, s32 *, 0x2C);
    if (temp_a2 == 0) {
        return 0;
    }
    if (arg1 != 0) {
        func_00202e40(temp_a0, &D_001BAA80, temp_a2);
    } else {
        func_00202e40(temp_a0, &D_001BABB0, temp_a2);
    }
    return 1;
}
