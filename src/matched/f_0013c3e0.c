#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define NULL 0
s32 func_00142a90(s32);                             /* extern */

s32 func(s8 *arg0) {
    s32 temp_a0;

    if ((arg0 == NULL) || (temp_a0 = M2C_FIELD(arg0, s32 *, 0x30), (temp_a0 == 0))) {
        return 0;
    }
    return func_00142a90(temp_a0);
}
