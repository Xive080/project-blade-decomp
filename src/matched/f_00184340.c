struct V { float f[10]; };
struct R { int v; struct V s; char pad[68]; };
struct R2 { int v; struct V s; char pad[100]; };
struct H { char pad0[60]; char pad[68]; void (*b)(void *, void *, void *); void (*a)(void *, void *, void *); };
struct W { struct H *h; int x; };
struct P { int pad0; int n; int m; int a; };
struct O { union { struct V e[8]; struct { char pad[120]; struct V cur; struct V nxt; } u; } d; int idx; int mode; };
extern void func_00184560(struct V *, struct V *, int, struct P *, int, int);
extern void func_00186570(struct R *);
extern void func_00186970(struct R *);
void f(struct O *o, struct P *p, int t, int x, int c, struct W *w) {
    if ((p->m != 0 && t < 0) || (p->a != 0 && !(t < p->n))) {
    } else if (o->mode == 3) {
        struct R r;
        func_00184560(&r.s, &o->d.e[o->idx], 3, p, t, x);
        r.v = c;
        if (w->h == 0) func_00186570(&r);
        else w->h->a((char *)w->h + 60, &r, &w->x);
    } else {
        struct R2 r;
        func_00184560(&r.s, &o->d.e[o->idx], 4, p, t, x);
        r.v = c;
        if (w->h == 0) func_00186970((struct R *)&r);
        else w->h->b((char *)w->h + 60, &r, &w->x);
    }
    o->d.u.cur = o->d.e[o->idx];
    o->d.u.nxt = o->d.e[o->idx + o->mode - 1];
    o->idx = 3;
    o->mode = 2;
}
