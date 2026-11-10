struct T { void *a[5]; };
extern char tbl[];
extern struct T *g;
extern char f0[], f1[], f2[], f3[], f4[];
struct T *func(void) {
    struct T *p;
    if (g == 0) {
        g = (struct T *)tbl;
        p = g;
        p->a[0] = f0;
        p->a[1] = f1;
        p->a[2] = f2;
        p->a[3] = f3;
        p->a[4] = f4;
    }
    return g;
}
