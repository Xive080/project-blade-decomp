extern int func_00109ce0(void *);
extern void func_001b4090(void *);
struct S { int a; int b; int c; int p0[3]; int d; };
int f(struct S *s, int a, int b, int c, int e, int f2) {
    int t[8];
    s->a = a;
    s->b = (b & 0xfffffff) | 0x20000000;
    s->c = c;
    s->d = c << 15;
    *(int *)((char *)s + 80) = e;
    *(int *)((char *)s + 84) = f2;
    t[2] = 1;
    t[1] = 1;
    *(int *)((char *)s + 64) = func_00109ce0(t);
    func_001b4090(s);
    *(long long *)((char *)s + 72) = 0;
    return 1;
}
