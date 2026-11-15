extern float *func_001c3b70(void *);
extern void func_001ce160(void *, void *);
struct VT { char p[24]; void *(*get)(void *); };
struct Q { char p[12]; struct VT *vt; };
struct S { float a[3]; float pa; float b[3]; float pb; float c[3]; float pc; float pos[3]; };
struct M { char p[1044]; struct S *s; };
int func(struct M *m, struct Q *q) {
    float *p;
    float d[3];
    int r;
    struct S *s;
    p = func_001c3b70(q->vt->get(q));
    s = m->s;
    d[0] = p[12] - s->pos[0];
    d[1] = p[13] - m->s->pos[1];
    d[2] = p[14] - m->s->pos[2];
    if (m->s->c[0] * d[0] + m->s->c[1] * d[1] + m->s->c[2] * d[2] > 0.0f) {
        r = 1;
    } else {
        d[0] = -d[0];
        d[1] = -d[1];
        d[2] = -d[2];
        r = 0;
    }
    func_001ce160(s->c, d);
    s->a[0] = s->b[1] * s->c[2] - s->b[2] * s->c[1];
    s->a[1] = s->b[2] * s->c[0] - s->b[0] * s->c[2];
    s->a[2] = s->b[0] * s->c[1] - s->b[1] * s->c[0];
    func_001ce160(s->a, s->a);
    s->c[0] = s->a[1] * s->b[2] - s->a[2] * s->b[1];
    s->c[1] = s->a[2] * s->b[0] - s->a[0] * s->b[2];
    s->c[2] = s->a[0] * s->b[1] - s->a[1] * s->b[0];
    func_001ce160(s->c, s->c);
    return r;
}
