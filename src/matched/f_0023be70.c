extern s32 G;
s32 func(s32 a) {
    *(s32*)(a + G) = 0;
    return a;
}
