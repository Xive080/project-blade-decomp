#pragma mpwc_relax on
s32 func_00177390(u32, s32);
extern s32 D_00306070;
extern s32 D_00306218[];
extern s32 D_0030621C[];
s32 func(s32 x, s32 n) {
    s32 r = 0;
    s32 i;
    char *p;
    if (n == 0) {
        p = (char *)&D_00306070;
        i = 0;
        do {
            u32 a = *(u32 *)(p + 768);
            if (a != 0) {
                r = func_00177390(a, x);
                if (r != 0) break;
            }
            i++;
            p += 4;
        } while (i < 12);
    } else {
        u32 lo, hi;
        { u32 t = D_00306218[n * 5]; lo = D_00306070 + t; }
        i = 0;
        hi = lo + D_0030621C[n * 5];
        p = (char *)&D_00306070;
        do {
            u32 a = *(u32 *)(p + 768);
            if (a != 0 && a >= lo && a < hi) {
                r = func_00177390(a, x);
                if (r != 0) break;
            }
            i++;
            p += 4;
        } while (i < 12);
    }
    return r;
}
