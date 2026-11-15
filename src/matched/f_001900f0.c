struct B { char x[116]; };
struct S;
struct V { int pad; void (*fn)(struct S *); };
struct S { char p0[12]; int c; char p1[188]; int d; char p2[900]; struct B a; struct B b; struct B c2; char p3[32]; int h; };
void f1(int);
void f2(struct B *);
void f3(struct B *);
struct V *f4(void);
void f5(struct S *);
void func(struct S *s) {
    if (s->h) { f1(s->h); s->h = 0; }
    if (s->d) s->d = 0;
    f2(&s->a); f3(&s->a);
    f2(&s->b); f3(&s->b);
    f2(&s->c2); f3(&s->c2);
    f4()->fn(s);
    s->c = 0;
    f5(s);
}
