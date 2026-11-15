extern int off;
extern void f2030d0(int, void *, int);
extern void f11ec80(int, int, int);
struct S { unsigned short n; char pad[2]; int a; int b; };
struct P { char pad[24]; int x; };
void func(struct P *p) {
    struct S *s = *(struct S **)((char *)p + off);
    f2030d0(p->x, p, 1);
    f11ec80(s->a, 0, s->n << 4);
    f11ec80(s->b, 0, s->n << 4);
}
