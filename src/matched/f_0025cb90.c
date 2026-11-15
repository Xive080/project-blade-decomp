struct O;
struct C;
struct VT { int p0; int p1; float *(*f)(struct C *, struct O *, int *, float); };
struct C { struct VT *vt; int p1; };
struct O { struct O *next; int p1; struct C *c; };
struct En { int p0; void (*cb)(void *, unsigned int, int, float *); void *arg; unsigned int cnt; struct O *list; };
struct M { int n; float t; int pad; struct En e[1]; };

void func(struct M *m, float dt) {
    struct En *e;
    int i;
    unsigned int j;
    float f;
    struct O *o;
    struct O *p;
    int s74;
    int s78;
    int s7c;
    float *r;
    m->t = m->t + dt;
    e = m->e;
    for (i = 0; i < m->n; e++, i++) {
        o = e->list;
        f = *o->c->vt->f(o->c, o, &s74, m->t);
        if (!(f <= 0.0f) && f < 1.0f) {
            if (!(*o->c->vt->f(o->c, o, &s78, 0.02f + m->t) <= f)) {
                f = 0.0f;
            }
        }
        p = o->next;
        if (!(f <= 0.0f)) {
            for (j = 0; j < e->cnt; j++) {
                if (p->c != 0) {
                    r = p->c->vt->f(p->c, p, &s7c, m->t);
                    if (s74 != 0 || s7c != 0) {
                        e->cb(e->arg, j, p->c->p1, r);
                    }
                }
                p = p->next;
            }
        }
    }
}
