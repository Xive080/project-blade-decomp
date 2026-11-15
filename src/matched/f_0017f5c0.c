struct S { int a0, a4, a8, ac, a10, a14; int pad[5]; int a2c; int a30, a34, a38, a3c, a40, a44; };
struct S *f(struct S *s) {
    s->a8 = 0; s->a4 = 0; s->a0 = 0;
    s->a14 = 0; s->a10 = 0; s->ac = 0;
    if (s->a2c != 0) {
        s->a44 = 0; s->a40 = 0; s->a3c = 0;
        s->a38 = 0; s->a34 = 0; s->a30 = 0;
    }
    return s;
}
