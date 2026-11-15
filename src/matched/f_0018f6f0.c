struct V { char p[24]; int (*f)(void *); };
struct O { char p[12]; struct V *v; };
struct B { float r[3]; char p0[4]; float u[3]; char p1[4]; float f[3]; char p2[4]; float t[3]; };
struct A { char p[0x414]; struct B *b; char q[0x5d4-0x418]; float o[3]; float k; };
extern struct B *func_001c3b70(int);
extern void func_001ce160(float *, float *);

int f(struct A *a, struct O *o) {
    struct B *c;
    struct B *s;
    float d[3];
    int r;
    c = func_001c3b70(o->v->f(o));
    s = a->b;
    d[0] = c->t[0] - s->t[0];
    d[1] = c->t[1] - s->t[1];
    d[2] = c->t[2] - s->t[2];
    func_001ce160(s->f, d);
    s->r[0] = s->u[1] * s->f[2] - s->u[2] * s->f[1];
    s->r[1] = s->u[2] * s->f[0] - s->u[0] * s->f[2];
    s->r[2] = s->u[0] * s->f[1] - s->u[1] * s->f[0];
    func_001ce160(s->r, s->r);
    s->f[0] = s->r[1] * s->u[2] - s->r[2] * s->u[1];
    s->f[1] = s->r[2] * s->u[0] - s->r[0] * s->u[2];
    s->f[2] = s->r[0] * s->u[1] - s->r[1] * s->u[0];
    func_001ce160(s->f, s->f);
    if (s->r[0] * c->f[0] + s->r[1] * c->f[1] + s->r[2] * c->f[2] < 0.0f) {
        r = 1;
        a->o[0] = s->r[0] * a->k;
        a->o[1] = s->r[1] * a->k;
        a->o[2] = s->r[2] * a->k;
    } else {
        r = 0;
        a->o[0] = s->r[0] * -a->k;
        a->o[1] = s->r[1] * -a->k;
        a->o[2] = s->r[2] * -a->k;
    }
    return r;
}
