extern void f1(int, int);
struct S { char pad[0x24]; int n; };
void f(int a, struct S *s) {
    int i;
    int n = s->n;
    for (i = 0; i < n; i++) f1(0, *(int*)((char*)s + i*4 + 0x28));
    f1(0, a);
}
