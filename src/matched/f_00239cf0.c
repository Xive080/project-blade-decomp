struct V { char p[16]; int (*f)(void *, int, int *); };
struct O { char p[16]; struct V *vt; };
struct G { char p[20]; int n; struct O **l; };
int func(struct G *g, int a, int *out) {
    int n, i, r, t;
    switch (a) {
    case 0:
    n = g->n;
    r = 0;
    for (i = 0; i < n; i++) { struct O *o = *(struct O **)((char *)g->l + i * 4); if (o->vt->f(o, 0, &t) != 0 && t == 1) r = 1; }
    *out = r;
    return 1;
    default: break;
    }
    return 0;
}
