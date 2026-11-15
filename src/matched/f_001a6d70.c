struct O { char pad[2]; unsigned short lo:5, mid:8, hi:3; };
extern int G_8524;
int f1(int, int *, int); int f2(int, struct O *, int);
int f(int a, int b, int c) {
    struct O *s0; int v; int t;
    s0 = *(struct O **)(c + G_8524);
    if (s0 != 0) {
        v = (s0->lo << 8) | 1 | (s0->mid << 13) | (s0->hi << 21);
    } else v = 0;
    t = v;
    if (f1(a, &t, 4) == 0) return 0;
    if (t == 0) return a;
    if (s0->lo == 0) {
        if (f2(a, s0, 0x88) == 0) return 0;
    }
    return a;
}
