struct N { struct N *n; struct N *p; };
struct E { char pad[164]; float lo; float hi; };
struct G { char pad[28]; struct N h; };
struct W { char pad[36]; int k; char pad2[4]; int z; char pad3[4]; struct G *g[1]; };
struct O { char pad[228]; int k; char pad2[80]; int i; char pad3[52]; float t; };
struct S { int a; struct G *g; int b[3]; int r; };
int f(struct O *o, struct W *w) {
    struct S *q;
    struct N *end;
    struct E *x;
    struct G *g;
    int r;
    struct N *e;
    if (w->k != o->k || w->z != 0) return 1;
    q = (struct S *)((o->i << 2) + (int)w);
    g = q->g;
    r = q->r;
    end = &g->h;
    if (r != 0) e = g->h.p; else e = g->h.n;
    while (e != end) {
        x = (struct E *)((char *)e - 336);
        if (*(int *)((char *)e - 16) != r) {
            if (x->lo < 10.0f + o->t) return 1;
            break;
        } else {
            if (!(x->hi <= 10.0f + o->t)) break;
        }
        if (r != 0) e = e->p; else e = e->n;
    }
    return 0;
}
