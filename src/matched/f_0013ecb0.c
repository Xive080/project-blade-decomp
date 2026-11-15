extern void func_0015d760();
extern void func_001c3b00(int);
extern int func_001c3b70(int);
extern void func_001c7320(int);
extern void func_001ce160();
struct V { char pad[0xC]; float x, y, z; };
struct W { char pad[0xEAA4]; float x, y, z; };
struct E { char p0[8]; struct W *w; struct V *v; };
struct S { char pad[0x48]; int h; };
struct P { char p0[0xC]; struct S *s; };
int f(struct E *e, int arg1) {
    struct S *s = *(struct S **)((char *)e + 0xC);
    int h = func_001c3b70(s->h);
    struct V *v = e->v;
    float vec[3];
    float *q = &v->x;
    if (v->x == 0.0f && v->y == 0.0f && v->z == 0.0f) return 0;
    if (arg1 != 0) {
        struct W *w = e->w;
        float d = w->x * v->x + w->y * v->y + w->z * v->z;
        vec[0] = w->x * d;
        vec[1] = e->w->y * d;
        vec[2] = e->w->z * d;
        vec[0] = e->v->x - vec[0];
        vec[1] = e->v->y - vec[1];
        vec[2] = e->v->z - vec[2];
        func_001ce160(vec, vec, &vec[2]);
        func_0015d760(h, vec, &e->w->x);
    } else {
        func_001ce160(vec, q);
        func_0015d760(h, vec, 0);
    }
    func_001c7320(h);
    func_001c3b00(s->h);
    return 1;
}
