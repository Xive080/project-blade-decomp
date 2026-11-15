extern void func_0017fa40(void *, int, int);
extern void func_0017f270(void *, int, int);
struct P { int a, b, c; char pad[0x20]; int n; int x, y, z; char pad2[0x10]; int base; int cnt; int en; };
struct P *func(struct P *p, int k) {
    int i, off;
    p->c = 0; p->b = 0; p->a = 0;
    if (p->n > 1) {
        if (p->en == 0) return p;
        p->z = 0; p->y = 0; p->x = 0;
        for (i = 0, off = 0; i < p->cnt; off += 64, i++) {
            func_0017fa40(p, p->base + off, k);
            func_0017f270(p, p->base + off + 24, p->base + off);
        }
    }
    return p;
}
