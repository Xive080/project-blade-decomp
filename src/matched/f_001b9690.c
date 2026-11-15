struct S { unsigned short m; unsigned short lim; int type; char pad[104]; };
struct Ent { int flags; int cnt; int p; int z0; int z1; int z2; };
struct B { int mask; struct Ent e[1]; };
extern unsigned char D_0032a578[4];
extern int (*D_002e36f0[])();
int f(struct S *s, struct B *b, int x, int y, int (*cb)(), int z) {
    unsigned i;
    struct S *p;
    struct Ent *e;
    unsigned r = 0;
    unsigned n;
    e = b->e;
    p = s;
    n = D_0032a578[0] + D_0032a578[1] + D_0032a578[2] + D_0032a578[3];
    for (i = 0; i < n; i++, p++, e++) {
        if (p->m & b->mask) {
            if (!(e->flags & 2)) {
                if (D_002e36f0[p->type](p, e, x, y)) {
                    e->cnt++;
                    e->z0 = 0;
                    e->z1 = 0;
                    e->z2 = 0;
                    r |= p->m;
                    if (cb) cb(p, e, x, y, z);
                    if (e->cnt == p->lim) {
                        e->flags |= 2;
                        e->flags &= ~1;
                    }
                }
            }
        }
    }
    return r & 0xf;
}
