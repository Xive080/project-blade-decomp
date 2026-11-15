struct S { int pad[1]; int n; int p; };
extern char base[];
extern void f1(void);
extern void f2(int);
int func(int a) {
    struct S *g = (struct S *)(base + 0);
    g->n = g->n - 1;
    if (g->n == 0) f1();
    if (g->p != 0) { f2(g->p); g->p = 0; }
    return a;
}
