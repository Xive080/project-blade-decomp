struct S { f32 a, b, c, d; };
extern s32 A;
extern s32 B;
extern char V[];
extern struct S *f1(void);
s32 func(void) {
    s32 d = B - A;
    struct S *r;
    A = 0;
    B = 0;
    r = f1();
    *r = *(struct S *)V;
    return d;
}
