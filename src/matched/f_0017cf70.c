struct V3 { float x, y, z; };
struct V4 { float x, y, z, w; };
struct Q { float x, y, z; int fl; };
struct E { char pad0[12]; struct V3 n; struct V3 p; };
struct O {
    int pad0; int a4; int a8; int hit; struct V3 hn;
    struct V3 *v28; struct V3 q; struct V3 *v44; int *i48; int *i52; int cnt;
};
extern int func_0017e1d0(int, void *, void *, void *, void *, int, int, int);
extern int func_0017d310(int, void *, void *, void *, void *, void *, int);
extern void func_0017ee60(void *);
extern void func_001ce3f0(void *, void *, int, int);
struct O *f(struct O *o, struct E *e) {
    struct V4 c, d, t;
    struct V3 q;
    int fl;
    int i;
    float r = o->v44->x;
    d.x = e->p.x - o->q.x;
    d.y = e->p.y - o->q.y;
    d.z = e->p.z - o->q.z;
    if (!(d.x * d.x + d.y * d.y + d.z * d.z <= r * r)) {
        if (func_0017e1d0(*(int *)0x70003FD8, &o->q, &e->p, &c, &d, 0, o->a8, o->a4)) {
            d.x = 0.05f * d.x;
            d.y = 0.05f * d.y;
            d.z = 0.05f * d.z;
            e->p.x = c.x + d.x;
            e->p.y = c.y + d.y;
            e->p.z = c.z + d.z;
            func_0017ee60(e);
        }
    }
    for (i = 0; i < o->cnt; i++) {
        if (o->i52[i] & 1) {
            *(struct V3 *)&c = o->v28[i];
            func_001ce3f0(&c, &c, 1, o->i48[i]);
            q = o->v44[i];
            if (func_0017d310(*(int *)0x70003FD8, &c, &q, &t, &d, &fl, o->a8)) {
                if (fl & 1) {
                    e->p.x = e->p.x + t.x;
                    e->p.y = e->p.y + t.y;
                    e->p.z = e->p.z + t.z;
                    func_0017ee60(e);
                }
                if (fl & 2) {
                    if (d.x * e->n.x + d.y * e->n.y + d.z * e->n.z < 0.0f) {
                        t.x = d.x * (e->n.x * d.x + e->n.y * d.y + e->n.z * d.z);
                        t.y = d.y * (e->n.x * d.x + e->n.y * d.y + e->n.z * d.z);
                        t.z = d.z * (e->n.x * d.x + e->n.y * d.y + e->n.z * d.z);
                        e->n.x = e->n.x - t.x;
                        e->n.y = e->n.y - t.y;
                        e->n.z = e->n.z - t.z;
                    }
                }
                o->hn = *(struct V3 *)&d;
                o->hit = 1;
            }
        }
    }
    o->q = e->p;
    return o;
}
