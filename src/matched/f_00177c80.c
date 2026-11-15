struct E { int (*fn)(int); int a, b, c; };
extern struct E T[];
int f(void) {
    int r = 1;
    int i;
    struct E *p = T;
    for (i = 0; i < 5; i++, p++) {
        if (p->fn) r &= p->fn(p->c);
    }
    return r;
}
