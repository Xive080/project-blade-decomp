extern s32 base[];
s32 sub(s32, s32);
s32 f(s32 a) {
    s32 r = 0;
    s32 i;
    s32 *p = base;
    for (i = 0; i < 12; i++, p++) {
        if (p[209]) {
            r = sub(p[209], a);
            if (r) break;
        }
    }
    return r;
}
