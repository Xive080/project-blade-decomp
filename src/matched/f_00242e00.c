#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
s32 func_00242e40();                                /* extern */

s32 func(void *arg0, s32 arg1) {
    if (func_00242e40() != 0) {
        M2C_FIELD(arg0, s32 *, 0xC) = arg1;
    }
    return 1;
}
