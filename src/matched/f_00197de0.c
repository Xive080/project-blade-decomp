struct S { int c; int d; float f8; };
struct E { int a; int b; struct S s; float f20; float f24; };
struct R { char b[148]; };
extern struct R g[];
void f(int a, int b) {
    struct R *r = &g[a];
    struct E *p = (struct E*)(r->b + b * 20);
    struct S *q;
    p->f20 = 0.5f;
    q = &p->s;
    p->f24 = 0.15f;
    if (p->s.d != 0) q->f8 = 0.15f;
}
