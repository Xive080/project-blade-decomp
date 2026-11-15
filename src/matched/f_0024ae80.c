extern s32 off;
extern s32 g2;
extern void s(s32, s32);
s32 f(s32 a, s32 b) {
    s32 t = *(s32*)(b + off);
    *(s32*)(a + off) = t;
    if (t != 0) s(a, g2);
    return a;
}
