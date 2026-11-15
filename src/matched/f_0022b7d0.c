typedef int s32;
extern s32 f1c2a40(s32);
extern s32 f1c2a80(void);
extern void f1c2ad0(s32 *, s32);
extern s32 f1c2b70(s32);
struct M { s32 a, b, c, d; };
s32 func(void) {
    struct M m;
    s32 n, i;
    if (f1c2a40(0) == 0) return 0;
    n = f1c2a80();
    for (i = 0; i < n; i++) {
        f1c2ad0(&m.a, i);
        if (m.a == 640 && m.b == 512 && m.c == 32 && m.d == 19 && f1c2b70(i) != 0) return 1;
    }
    return 0;
}
