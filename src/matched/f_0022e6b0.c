void f_00188ff0(int);
void f_00189650(int);
struct B { int a, b, c, d, e, f, g; };
struct S { char pad[0xf8]; struct B b; };
void func(struct S *p) {
    struct B *q = &p->b;
    if (p->b.a != 0) {
        if (q->b != 0) { f_00188ff0(q->b); q->b = 0; }
        f_00188ff0(q->c);
        q->c = 0;
        if (q->d != 0) { f_00188ff0(q->d); q->d = 0; }
        f_00189650(q->a);
        q->a = 0;
        q->e = 0;
        q->f = 0;
        q->g = 0;
    }
}
