struct S { void *a; void *b; void *c; void *d; void *e; };
extern struct S g_s;
extern struct S *g_ptr;
extern void fa(void); extern void fb(void); extern void fc(void); extern void fd(void); extern void fe(void);
struct S *func(void) {
    if (g_ptr == 0) {
        struct S *p;
        g_ptr = &g_s;
        p = g_ptr;
        p->a = fa;
        p->b = fb;
        p->c = fc;
        p->d = fd;
        p->e = fe;
    }
    return g_ptr;
}
