struct T { void *a; void *b; void *c; void *d; void *e; };
extern struct T *gp_p;
extern struct T buf;
extern void f1(void);
extern void f2(void);
extern void f3(void);
extern void f4(void);
extern void f5(void);
struct T *func(void) {
    struct T *p;
    if (gp_p == 0) {
        gp_p = &buf;
        p = gp_p;
        p->a = f1;
        p->b = f2;
        p->c = f3;
        p->d = f4;
        p->e = f5;
    }
    return gp_p;
}
