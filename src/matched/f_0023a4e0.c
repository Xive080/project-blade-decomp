struct E { int a; int b; int c; void (*fn)(int, int, int, int); int d; };
void f(int unused, char *o) {
    unsigned i;
    char *s;
    for (i = 0, s = o; i < *(unsigned *)(o + 1556); i++) {
        struct E *e = (struct E *)(s + 1560);
        e->fn(e->d, e->a, e->b, e->c);
        s += 20;
    }
}
