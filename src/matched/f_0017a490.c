#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
void func(void *arg0) {
    M2C_FIELD(arg0, s32 *, 0x324) = 0;
    M2C_FIELD(arg0, s32 *, 0x320) = 0;
    M2C_FIELD(arg0, s32 *, 0x5C) = 0x49742400;
    M2C_FIELD(arg0, s32 *, 0x60) = 0x49742400;
}
