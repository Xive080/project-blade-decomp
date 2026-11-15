struct G { char pad[0x134]; void (*f)(void *); };
extern char D[];
extern void f200100(int);
struct S { char pad[0x5e4]; void *a; char pad2[0xc]; int b; };
int f(struct S *p) {
    if (p == 0) return 0;
    if (p->b != 0) {
        f200100(p->b);
        p->b = 0;
    }
    if (p->a != 0) {
        ((struct G *)D)->f(p->a);
        p->a = 0;
    }
    ((struct G *)D)->f(p);
    return 1;
}
