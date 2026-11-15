extern float gF;
extern char *gP;
struct P { int pad[8]; float f; };
struct O { int z; int pad[4]; char *a; struct P *b; };
struct E { int pad0[4]; int s[4]; float x[4]; };
extern char *fn1c2510();
extern void fn1c2420(char *, float *);
extern int fn1c3b70(void *);
extern char *fn142a90(void *);
extern void fn1ce3f0(void *, void *, int, void *);
extern int fn16b090();
extern void fn1c7320(void *);
extern void fn1c42c0(void *, void *, int);
extern void fn1c3b00(void *);
extern void fn1c2320(char *, float *, int);
extern int fn131b70(char *);
extern void fn1c5f10(int, char *);
extern void fn1c5eb0(int, int);
extern void fn2014f0(void *);
extern void fn1c2170(char *);
extern char D_00145030[];
struct M { int a[16]; };
void func(struct O *o)
{
    int u, w;
    int tt;
    *(float *)&tt = gF;
    if (o->z == 0) {
        float v[2];
        char *s0;
        float *s2;
        v[0] = 0.05f + o->b->f;
        v[1] = v[0];
        fn1c2420(gP, v);
        s0 = fn1c2510(gP);
        s2 = (float *)fn1c3b70(s0);
        fn1ce3f0(s2 + 12, (char *)o->b + 20, 1, (void *)fn1c3b70(fn142a90(o->a)));
        s2[12] += s2[8] * -v[0];
        s2[13] += s2[9] * -v[0];
        s2[14] += s2[10] * -v[0];
        if (fn16b090()) {
            fn1c7320(s2);
            *(struct M *)(s0 + 80) = *(struct M *)(s0 + 16);
            fn1c42c0(s0, D_00145030, 0);
        } else {
            fn1c7320(s2);
            fn1c3b00(s0);
        }
        fn1c2320(gP, (float *)&tt, 1);
        if (fn131b70(gP)) {
            fn1c5f10(6, (char *)&u);
            fn1c5f10(8, (char *)&w);
            fn1c5eb0(6, 0);
            fn1c5eb0(8, 0);
            fn2014f0(o->a);
            fn1c5eb0(6, u);
            fn1c5eb0(8, w);
            fn1c2170(gP);
        }
    }
}
