struct P { s32 a, b, c, d, e, f; void *p; };
extern char D1[];
extern char D2[];
void f1(s32, char *);
void f2(s32, s32);
void f3(struct P *);
void f4(s32);
s32 f(void) {
    struct P p;
    f1(0, D1);
    f2(-1, 1);
    p.a = 0x40;
    p.b = 0;
    p.c = 1;
    p.d = 2;
    p.e = 0;
    p.f = 0;
    p.p = D2;
    f3(&p);
    f4(0);
    f4(1);
    return 1;
}
