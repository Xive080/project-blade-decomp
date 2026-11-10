#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
void *func(void *arg0, s8 arg1) {
    M2C_FIELD(arg0, s8 *, 2) = arg1;
    return arg0;
}
