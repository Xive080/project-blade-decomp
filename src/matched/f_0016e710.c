struct G { char pad[0x130]; void *(*alloc)(int); void (*fre)(void *); };
extern char D_0032A620[];
struct E { int *p; int b; int c; int d; };
struct B { char pad[0x30]; struct E *e; };
struct H { struct B *a; int b; int c; int d; };
struct O { char pad[0x33c]; struct H *h; int *x; };
extern void func_0011ec80(void *, int, int);
extern int func_001c35a0();
extern void func_001ca2d0(int, void *, int);
extern struct B *func_001feb10(int, int, int, int, int);
extern void func_001fee10(int, struct B *);
extern void func_001feee0(void *, int);
void func(int a0, unsigned a1, struct O *o) {
    int n, i; int *q; int *t; void *(**ap)(int);
    struct G *g = (struct G *)D_0032A620;
    ap = &g->alloc;
    t = (int *)g->alloc(a1);
    func_001ca2d0(a0, t, a1);
    n = a1 >> 2;
    o->h = (struct H *)(*ap)(24);
    func_0011ec80(o->h, 0, 24);
    o->h->a = func_001feb10(n, 0, 0, 0x1000, 36);
    o->h->b = (int)func_001feb10(n, 0, 0, 0x1000, 24);
    o->h->c = (int)func_001feb10(n, 0, 0, 0x1000, 44);
    o->h->d = func_001c35a0();
    func_001feee0(o->h->a, 1);
    { struct B *bb = o->h->a; func_001fee10(o->h->d, bb); }
    i = 0;
    if (i < n) {
        q = t;
        do {
        o->h->a->e[i].p = (int *)*q;
        q++;
        o->h->a->e[i].c = 3;
            i++;
        } while (i < n);
    }
    o->x = (int *)(*ap)(n * 4);
    func_0011ec80(o->x, 0, n * 4);
    ((struct G *)D_0032A620)->fre(t);
}
