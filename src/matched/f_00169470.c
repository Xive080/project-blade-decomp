struct V3 { float x, y, z; };
struct S { float r[3]; char p0[4]; float u[3]; char p1[4]; float f[3]; char p2[4]; struct V3 t; };
extern struct V3 D1;
extern struct V3 D2;
extern char D3[];
extern float D4[];
extern void func_001ce3f0(void *, void *, int, void *);
extern void func_001ce160(void *, void *);
extern void func_001c7610(void *, void *, int, float);
extern void func_001ce410(void *, void *, int, void *);

void f(struct S *s) {
    struct W { float x, y, z; } v;
    struct V3 *p;
    struct V3 *q;
    p = &D1;
    s->t = *p;
    func_001ce3f0(&s->t, &s->t, 1, D3);
    q = &D2;
    v = *(struct W *)q;
    func_001ce3f0(&v, &v, 1, D3);
    s->f[0] = v.x - s->t.x;
    s->f[1] = v.y - s->t.y;
    s->f[2] = v.z - s->t.z;
    func_001ce160(s->f, s->f);
    s->u[0] = 0; *(int *)&s->u[1] = 0x3f800000; s->u[2] = 0;
    func_001c7610((void *)0x70003ed0, s->f, 0, D4[0]);
    func_001ce410(s->u, s->u, 1, (void *)0x70003ed0);
    s->r[0] = s->u[1] * s->f[2] - s->u[2] * s->f[1];
    s->r[1] = s->u[2] * s->f[0] - s->u[0] * s->f[2];
    s->r[2] = s->u[0] * s->f[1] - s->u[1] * s->f[0];
    s->u[0] = s->f[1] * s->r[2] - s->f[2] * s->r[1];
    s->u[1] = s->f[2] * s->r[0] - s->f[0] * s->r[2];
    s->u[2] = s->f[0] * s->r[1] - s->f[1] * s->r[0];
}
