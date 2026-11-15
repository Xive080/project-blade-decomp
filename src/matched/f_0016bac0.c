struct E { int a; float b; };
struct T { char pad[12]; int n; struct E *e; };
int f(struct T *t, int i, int v, float x) {
    if (t == 0 || i < 0 || i >= t->n) return 0;
    t->e[i].a = v;
    t->e[i].b = x;
    return 1;
}
