struct S { char pad[132]; int a, b, c; int d[3]; };
void f(struct S *s) {
    unsigned i;
    s->a = 0;
    s->b = 0;
    s->c = 0;
    for (i = 0; i < 3; i++) {
        s->d[i] = 0;
    }
}
