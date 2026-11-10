#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define NULL 0
s8 *func_00147d50(s8 *);                        /* extern */
s8 *func_00147e20();                              /* extern */

s32 func(s8 *arg0, f32 *arg1, f32 *arg2) {
    s8 *temp_v0;
    s8 *temp_v0_2;

    if ((arg0 == NULL) || (M2C_FIELD(arg0, s16 *, 6) == 0)) {
        return 0;
    }
    if (arg1 != NULL) {
        temp_v0 = func_00147e20();
        if (temp_v0 != NULL) {
            *arg1 = M2C_FIELD(temp_v0, f32 *, 0xC);
        }
    }
    if (arg2 != NULL) {
        temp_v0_2 = func_00147d50(arg0);
        if (temp_v0_2 != NULL) {
            *arg2 = M2C_FIELD(temp_v0_2, f32 *, 0xC);
        }
    }
    return 1;
}
