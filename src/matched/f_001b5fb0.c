struct E { int a, b, c, d, e; };
struct S { int a; char pad[28]; struct E e[3]; };
void g1(char *, int, int);
void func(struct S *p) {
    unsigned i;
    g1((char *)p + 4, 0, 8);
    *(int *)((char *)p + 12) = 3;
    for (i = 0; i < 3; i++) {
        p->e[i].a = 0;
    }
    p->a = 2;
}
