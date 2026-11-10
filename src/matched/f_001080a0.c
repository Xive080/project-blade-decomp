struct B{char p[112]; int a; int pad; long long b;}; struct A{char p[64]; struct B *b;};
struct B *f(struct A *a){ struct B *p = a->b; p->b = 0; p->a = 0; return p; }
