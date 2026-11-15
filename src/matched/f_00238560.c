extern void memset2(void *, int, int);
struct B { char pad[10320]; int x; char rest[19584]; };
struct S { int on; char a[22276]; struct B b; };
void f(struct S *p) { memset2(p->a, 0, sizeof(p->a)); memset2(&p->b, 0, sizeof(p->b)); p->b.x = 0; p->on = 0; }
