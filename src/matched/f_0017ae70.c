struct A { int a; int x; };
struct B { int a; int x; };
extern struct B *func_00142ad0(struct A *);
extern struct B *func_00142aa0(struct B *, struct B *);
extern int func_001a5a50(struct B *);
extern struct B *func_00201b60(void);
extern void func_00201cf0(struct B *, struct B *);
extern void func_00201cc0(struct B *, struct B *);
void f(struct A *a, struct B **b) {
    struct B *c, *n;
    n = func_00142ad0(a);
    while (n) {
        c = n;
        n = func_00142aa0((struct B *)a, n);
        if (func_001a5a50(c)) {
            if (*b == 0) {
                *b = func_00201b60();
                (*b)->x = a->x;
            }
            func_00201cf0((struct B *)a, c);
            func_00201cc0(*b, c);
        }
    }
}
