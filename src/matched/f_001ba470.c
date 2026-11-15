struct E { char pad[88]; int v[6]; };
struct T { struct E e[32]; int tail[3]; };
extern struct T D[];
extern int G1;
extern int *G2;
extern int func_0013b550(int, int);
extern void func_001ca2d0(void *, void *, int);
int f(int a, void *b) {
    unsigned i, j;
    struct E *p;
    int *q;
    func_001ca2d0(b, D, 3596);
    p = D->e;
    for (i = 0; i < 32; i++, p++) {
        q = p->v;
        for (j = 0; j < 6; j++, q++) {
            *q = func_0013b550(G1, *q);
        }
    }
    G2 = (int *)a;
    return 1;
}
