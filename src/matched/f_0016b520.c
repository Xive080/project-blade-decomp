extern s32 G;
s32 func(s32 a, s32 b) {
    *(f32*)(a + G) = *(f32*)(b + G);
    return a;
}
