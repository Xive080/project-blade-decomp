struct N { char pad[28]; struct N *next; };
extern struct N *D_00317400;
extern volatile int D_00317404;
extern struct N * volatile D_00317408;
extern volatile int D_0031740C;

void func(struct N *o, unsigned n) {
    struct N *p;
    unsigned i;
    p = D_00317400;
    if (p) {
        while (p != o && (p = p->next))
            ;
    }
    if (n) {
        for (i = 0; i < n; i++)
            p = p->next;
    }
    D_00317404 = 1;
    D_00317408 = p;
    D_0031740C = 0;
}
