extern char FMT[];
extern void func_00121530(char *s, char *f, void *o);
extern char *func_0023a780(char *s, void *e);
extern void func_002387e0(void);
extern void func_00238750(void);
extern void func_00238860(void);
extern void func_002386c0(void);
struct E { int *q; int v; void *r; void *s; };
struct O { int pad[4]; int n; int q[2 * 38]; struct E e[16]; };
struct T { int pad[1]; int *k; };
struct X { int a; int b; int c; };
char *f(char *sa, struct O *o, struct T *t, unsigned n, struct X *x, int *cnt, char *tab)
{
    char *s = sa;
    unsigned i;
    struct E *ent;
    while (*s == 59) {
        while (*s != 10) s++;
        s++;
    }
    func_00121530(s, FMT, o);
    for (i = 0; i < n;) {
        ent = (struct E *)(tab + *cnt * 136);
        s = func_0023a780(s, ent);
        if (*(int *)((char *)ent + 4)) {
            int a, b;
            void *r;
            o->e[i].s = ent;
            o->e[i].q = &o->q[i * 2];
            o->e[i].v = x[0].c;
            a = x[0].a;
            b = x[0].b;
            o->q[i * 2] = a;
            o->q[i * 2 + 1] = b;
            a = *(int *)((char *)t->k + a * 20 + 16);
            b = *(int *)((char *)t->k + b * 20 + 16);
            if (a == 1 && b == 1) r = func_002387e0;
            else if (a == 1 && b == 3) r = func_00238750;
            else if (a == 3 && b == 1) r = func_00238860;
            else if (a == 3 && b == 3) r = func_002386c0;
            else r = 0;
            o->e[i].r = r;
            (*cnt)++;
            i++;
            x++;
        }
    }
    o->n = i;
    return s;
}
