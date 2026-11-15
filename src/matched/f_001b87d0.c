struct V { char pad[304]; int (*alloc)(int); void (*fr)(int *); };
extern char vt[];
extern int rd(int, int*);
extern int rd2(int, int*, int);
int *f(int a) {
    struct { int x; int n; int y; int z; } l;
    int *p;
    int *o;
    int n;
    if (rd(a, &l.x) == 0) return 0;
    p = &l.n;
    if ((o = (int*)((struct V*)vt)->alloc(*p + 4)) == 0) return 0;
    o[0] = *p;
    n = *p;
    if (n != rd2(a, o + 1, n)) {
        ((struct V*)vt)->fr(o);
        return 0;
    }
    return o;
}
