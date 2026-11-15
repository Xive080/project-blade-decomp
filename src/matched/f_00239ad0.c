struct T { int a; int (*fn)(void); };
struct S { char pad[20]; unsigned n; struct T *tab; };
int f(struct S *a, unsigned i) {
    if (i < a->n) {
        return a->tab[i].fn();
    }
    return 0;
}
