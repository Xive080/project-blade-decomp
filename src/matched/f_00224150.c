struct E { struct E *next; char d[16]; };
struct O { int a; int n; int c; int d; struct E *p; };
struct G { char pad[304]; void *(*alloc)(int); };
extern char G_base[];
int func_001bf1c0(int, void *, int);
int func_001bf260(int, void *, int);
struct O *f(int h, struct O *o) {
    int i;
    struct E *e;
    struct E *p;
    unsigned t;
    o->p = (struct E *)((struct G *)G_base)->alloc(o->n * 20);
    p = o->p;
    if (p == 0) return 0;
    i = 0;
    for (e = p; i < o->n; e++, i++) {
        if (!func_001bf1c0(h, e->d, 16)) return 0;
        if (!func_001bf260(h, &t, 4)) return 0;
        if (t == 0xFFFFFFFF) e->next = 0;
        else e->next = p + t / 20;
    }
    return o;
}
