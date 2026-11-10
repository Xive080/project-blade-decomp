struct S { struct S *a; struct S *b; };
void func(struct S *s, struct S *d) {
    struct S *n = d - 1;
    d[-1].b = s->b;
    d[-1].a = s;
    s->b->a = n;
    s->b = n;
}
