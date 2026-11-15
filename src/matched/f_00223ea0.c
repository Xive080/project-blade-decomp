extern int func_001bf1c0(int, void *, int);
extern int func_001bf260(int, void *, int);
struct G { char pad[304]; int (*f)(int); };
extern char D_0032A620[];

struct E { char *link; char data[40]; };
struct B { int p0; int n; int p2; int p3; struct E *buf; };

struct B *func(int arg0, struct B *b) {
    int i;
    struct E *e;
    struct E *base;
    u32 v;
    b->buf = (struct E *)((struct G *)D_0032A620)->f(b->n * 44);
    base = b->buf;
    if (base == 0) return 0;
    for (i = 0, e = base; i < b->n; e++, i++) {
        if (func_001bf1c0(arg0, e->data, 40) == 0) return 0;
        if (func_001bf260(arg0, &v, 4) == 0) return 0;
        if (v == -1) e->link = 0;
        else e->link = (char *)base + (v / 44) * 44;
    }
    return b;
}
