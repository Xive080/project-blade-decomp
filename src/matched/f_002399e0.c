typedef unsigned __int128 Q;
struct S { int p; int n; Q *src; Q *dst; };
void func(struct S *s) {
    Q *a = s->src;
    Q *e = (Q*)((char*)a + s->n);
    Q *d = s->dst;
    do { *d = *a; a++; d++; } while (a < e);
}
