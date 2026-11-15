extern void f1892c0(int);
extern void f189650(int);
struct S { char p0[16]; void (*fn)(struct S *); char p1[16]; int a; int b; char p2[4]; int c; int d; int e; };
void f(struct S *s) {
    s->fn(s);
    if (s->d) { f1892c0(s->d); s->d = 0; s->e = 0; }
    f189650(s->b);
    s->b = 0; s->c = 0; s->a = 0;
}
