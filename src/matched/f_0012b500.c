struct C { char pad0[24]; int w; char pad1[4]; int h; char pad2[140]; char *buf; int *tbl; };
struct E { u16 a; u16 b; char *c; char *d; char *f; };
extern void f1bf2b0(int, int *);
extern void f1ca2d0(int, char *, int);
extern char D[];
struct G { char pad[0x130]; char *(*alloc)(int); };
int func(int a, struct C *o) {
    int r[4];
    int j; char *p; int i; struct E *e;
    f1bf2b0(a, r);
    o->buf = ((struct G*)D)->alloc(r[1]);
    f1ca2d0(a, o->buf, r[1]);
    p = o->buf;
    for (i = 0; i < o->w; i++) {
        for (j = 0; j < o->h; j++) {
            e = (struct E *)p;
            p += 16;
            o->tbl[(i + j * o->w) * 11] = (int)e;
            e->b = (u16)(int)e->f;
            e->c = p;
            p += e->a * 16;
            e->f = p;
            p += e->b * 16;
            e->d = p;
            p += (e->b * 4 + 16) - ((e->b * 4) & 15);
        }
    }
    return 1;
}
