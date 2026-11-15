extern void f1bf2b0(int, void *);
extern int f201d20(int);
extern int f16f100(void);
extern void f16b370(int, int);
extern int f142a90(int);
extern int f142950(int);
extern int f177860(int);
int f(int a) {
    int sp[4];
    int s, v;
    f1bf2b0(a, sp);
    s = f201d20(a);
    f16b370(s, f16f100());
    if (s != 0) {
        v = f142950(f142a90(s));
        if (v != 0) {
            do {
                v = f177860(v);
            } while (v != 0);
        }
    }
    return s;
}
