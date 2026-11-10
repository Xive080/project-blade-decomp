#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
extern s32 G_8578;

s32 func(s32 arg0) {
    M2C_FIELD(((arg0 + G_8578 + 0xF) & ~0xF), s32 *, 0x40) = 0;
    return arg0;
}
