struct T { int p0,p1,v; };
struct S { int p0,p1,p2; int a; int p4; struct T *b; };
struct S *f_00210790(struct S *s, int x) {
    struct S *r = 0;
    if (s) {
        if (s->a) {
            if (s->b) s->b->v = x;
            r = s;
        }
    }
    return r;
}
