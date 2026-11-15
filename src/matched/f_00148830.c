extern int f1(void);
extern int f2(void *, int);
extern int f3(void *, int);
extern void f4(int);
extern char D_0032A620[];
struct G { char pad[308]; void (*fn)(void *); };
struct A { u32 fl; char pad[28]; int x[1]; };
int func(struct A *a) {
    int s0, s1;
    int *q;
    if (a == 0) return 0;
    if (!(a->fl & 8)) {
        if (a == 0) {
            s0 = 0;
        } else {
            s1 = f1();
            if (s1 != 0) {
                do {
                    s0 = s1;
                    s1 = f2(a, s1);
                    f3(a, s0);
                } while (s1 != 0);
            }
            q = a->x;
            f4(*q);
            *q = 0;
            s0 = 1;
        }
    }
    ((struct G *)D_0032A620)->fn(a);
    return s0;
}
