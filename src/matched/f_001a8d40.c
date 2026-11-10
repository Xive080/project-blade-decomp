#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
s32 func(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 0x10) == 1;
}
