struct E { char c; char pad[63]; int a; int b; };
struct S { char pad[52]; int f34; int f38; int f3c; int f40; int f44; int f48; int f4c; struct E e[8]; };
void f(struct S *p) {
    int n;
    p->f34 = 0;
    p->f38 = 0;
    p->f3c = 0;
    n = 8;
    p->f40 = 0;
    p->f48 = 0;
    p->f4c = 0;
    p->f44 = 0;
    while (n--) {
        struct E *e = &p->e[n];
        e->c = 0;
        e->a = 0;
        e->b = 0;
    }
}
