extern s32 G;
extern struct L { struct L *next; struct L *prev; } H;
s32 f1(void);
s32 f2(void);
s32 f3(void);
void f4(s32, s32);
static inline int eq(int a, int b) { return a == b ? 1 : 0; }
s32 func(void) {
    if (eq(G, 1)) {
        return 1;
    }
    H.next = &H;
    H.prev = &H;
    f4(0, f1());
    f4(0, f2());
    f4(0, f3());
    G = 1;
    return 1;
}
