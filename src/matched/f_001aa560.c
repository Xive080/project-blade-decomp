#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
extern s32 D_002E3660;
extern s32 D_002E3664;
extern s32 D_002E3668;

void func(void *arg0) {
    D_002E3660 = M2C_FIELD(arg0, s32 *, 0);
    D_002E3664 = M2C_FIELD(arg0, s32 *, 4);
    D_002E3668 = M2C_FIELD(arg0, s32 *, 8);
    *(s32 *)0x2E366C = M2C_FIELD(arg0, s32 *, 0xC);
}
