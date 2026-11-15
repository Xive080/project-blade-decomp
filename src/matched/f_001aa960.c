struct O;
extern void func_00109d10(int);
extern void func_0010a670(struct O *, char *);
extern int G;
struct E { char pad[0x18]; int f; };
struct O { int n; struct E *e[95]; char pad[4]; };
void f(struct O *o) {
    struct E **p; int i; int n;
    func_0010a670(o, (char*)o + 384);
    n = o->n;
    p = o->e;
    i = 0;
    while (i < n) {
        p[i]->f = 1;
        i++;
    }
    func_00109d10(G);
}
