struct T { char *a; char *b; int c; unsigned char n; char pad[3]; };
struct E { char pad0[464]; char z; unsigned char n; char pad1; char f; };
extern struct T D_002E01C0[];
extern struct E D_00308450[];
extern void func_001a86f0(char *, float);
extern void func_001a98c0(char *, char *, int, int);

int func(void) {
    unsigned i, j;
    struct E *e;
    char *q;
    struct T *t;
    e = D_00308450;
    t = D_002E01C0;
    i = 0;
    do {
        j = 0;
        q = (char *)e;
        e->n = t->n;
        e->z = 0;
        while (j < e->n) {
            char *b;
            func_001a98c0(q, t->a, t->c, 105);
            b = t->b;
            if (*b != 0) {
                func_001a98c0(q + 232, b, t->c, 105);
                func_001a86f0(q, -1.0f);
                func_001a86f0(q + 232, 1.0f);
                e->f = 1;
            } else {
                e->f = 0;
            }
            q += 116;
            j++;
        }
        i++;
        e++;
        t++;
    } while (i < 14);
    return 1;
}
