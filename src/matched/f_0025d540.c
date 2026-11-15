extern s32 G_A;
extern s32 G_B;
extern s32 G_C;
extern s32 G_D;
s32 f(void) {
    if (((*(u64 *)0x12001000 >> 13) & 1) == 0) {
        G_A = 1;
        G_B = G_C;
        G_C = 0;
    }
    asm { sync }
    asm { ei }
    return 0;
}
