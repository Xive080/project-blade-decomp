extern void f109d20(int);
extern void f109d00(int);
struct S { char p0[20]; int a; char p1[40]; int h; char p2[4]; long long b; };
void f(struct S *s, int n) {
    f109d20(s->h);
    s->a = s->a + n;
    s->b = s->b + n;
    f109d00(s->h);
}
