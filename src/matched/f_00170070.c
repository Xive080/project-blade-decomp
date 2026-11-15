extern s32 f1(s32, s32);
extern s32 D[];
s32 func(s32 a) {
    s32 i;
    s32 r = 0;
    s32 *p = D;
    for (i = 0; i < 13; i++, p++) {
        if (p[179]) {
            r = f1(p[179], a);
            if (r != 0) break;
        }
    }
    return r;
}
