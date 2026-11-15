extern s32 G_84B8;
extern s32 G_84C4;
extern char D_00312830[];
extern char D_00312880[];
extern char D_00312880[];
extern void func_00192110(void *, s32, void *, void *, void *);
extern char *func_00192430(void *, void *, void *);
extern s32 func_00115590(s32, s32, void *, void *, s32);
extern s32 func_00114cf8(s32, s32 *, s32 *);
extern s32 func_00114fb8(s32, s32, void *, s32, s32, char *);
struct F { f32 a, b, c, d, e; };
struct A { char p0[0xa0]; s32 h; char q[0x1e4-0xa4]; s32 w; s32 x; };
s32 func(struct A *a, s32 unused, s32 *in) {
    char b1[320];
    char b2[256];
    char b3[40];
    s32 e1;
    s32 e2;
    s32 h;
    char *r;
    s32 v;
    if (G_84B8 == 0 || a->w == 0) return 0;
    h = a->h;
    if (in == 0) return 0;
    func_00192110(a, unused, b1, b2, b3);
    if (a->x != 0) {
        e1 = -1;
        e2 = -1;
        r = func_00192430(a, b2, b3);
        if (r != 0) {
            v = in[0];
            if (v > -1) {
                if (v == 0) *(u16*)(r + 20) &= 0xfffd;
                else *(u16*)(r + 20) |= 2;
            }
            v = in[1];
            if (v > -1) {
                if (v == 0) *(u16*)(r + 20) &= 0xfff7;
                else *(u16*)(r + 20) |= 8;
            }
            if (func_00115590(h, 0, b1, r, 4) == 0 && func_00114cf8(0, &e1, &e2) > 0 && e1 == 14 && e2 == 0) return 1;
        }
    } else {
    if (func_00114fb8(h, 0, b2, 0, 1, D_00312880) == 0) {
        G_84C4 = 0;
        *(struct F*)D_00312830 = *(struct F*)in;
        return 1;
    }
    }
    return 0;
}
