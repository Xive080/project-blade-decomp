struct V { float a, b, c, d, e, f; };
struct S { struct V v[7]; float f0, f1; int x0, x1, x2, x3; };
extern struct S D_00327ca0;
extern int D_002fa6d0;
extern int func_001a8010(int, float);
extern void func_00132950(float);
extern void func_001aa020(int);
extern int func_00249fa0(int);
extern int func_00249e50(int);
extern void func_001b5920(int);
int func(struct S *s) {
    unsigned i;
    float t;
    int m;
    for (i = 0; i < 7; i++) {
        D_00327ca0.v[i] = s->v[i];
    }
    t = s->f0;
    if (func_001a8010(1, t)) D_00327ca0.f0 = t;
    t = s->f1;
    func_00132950(t);
    D_00327ca0.f1 = t;
    m = s->x3;
    func_001aa020(m);
    D_002fa6d0 = m;
    D_00327ca0.x3 = m;
    D_00327ca0.x1 = func_00249fa0(s->x1);
    D_00327ca0.x2 = func_00249e50(s->x2);
    func_001b5920(s->x0);
    return 1;
}
