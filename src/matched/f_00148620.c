extern int f1(void);
extern int f2(void *, int);
extern int f3(void *, int);
extern void f4(int);
struct A { char pad[32]; int x; };
int func(struct A *a) {
    int s0, s1;
    if (a == 0) return 0;
    s0 = f1();
    if (s0 != 0) {
        do {
            s1 = s0;
            s0 = f2(a, s0);
            f3(a, s1);
        } while (s0 != 0);
    }
    f4(a->x);
    a->x = 0;
    return 1;
}
