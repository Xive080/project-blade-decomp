struct O { int p[8]; int f; float v[4]; };
struct B { unsigned char c[4]; };
struct V { float x, y, z, w; };
extern float gf;
extern volatile int D364[];
extern struct B D418[];
extern volatile int D41c[];
extern struct V D38c[];
extern unsigned char D61f[];
extern void f1();
extern void f2(int,int);
extern void f3();
extern void f4();
extern void f5(int,int);
extern void f6(int);
extern void f7(int, float);
int func(struct O *a) {
    unsigned char l[4];
    int *q;
    *(float*)l = gf;
    f1();
    f2(1,0);
    f3();
    f4();
    f5(-1,1);
    f7(0, 0.0f);
    f7(1, 0.0f);
    if ((*(int*)0x70003FC0 & 2) || ((q = *(int**)0x70003FD4) && (q[1] & 4))) {
        a->f = 0;
    } else {
        f6(D61f[0] * 10 + 8);
        a->f = 1;
        D364[0] = 3;
        D418[0] = *(struct B*)l;
        D364[0] &= ~8;
        D41c[0] = 0;
        a->v[0] = 0; a->v[1] = 0; a->v[2] = 0; a->v[3] = 255.0f;
        D38c[0] = *(struct V*)a->v;
    }
    return 1;
}
