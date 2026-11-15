s32 func_00177390(s32, s32);
extern s32 D_00306070[];
s32 f(s32 a) {
    s32 r = 0;
    s32 i;
    s32 *p = D_00306070;
    for (i = 0; i < 3; i++, p++) {
        s32 x = p[228];
        if (x != 0) {
            r = func_00177390(x, a);
            if (r != 0) break;
        }
    }
    return r;
}
