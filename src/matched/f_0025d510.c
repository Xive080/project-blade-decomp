extern s32 G_8630;
extern s32 G_8A00;
extern s32 G_8A08;
s32 f(void) {
    if (G_8A00 != 0) {
        G_8A00 = 0;
        G_8630 = G_8A08;
    }
    asm { sync }
    asm { ei }
    return 0;
}
