extern char gA[]; extern char gB[];
struct E { s32 x; s32 a; s32 b; };
struct E *func(s32 i, s32 a, s32 b) {
    struct E **p;
    u16 n; s32 k = 0;
    p = *(struct E ***)(gA + i * 4);
    n = *(u16 *)(gB + i * 2 + 652);
    for (; k < n; p++, k++) {
        struct E *e = *p;
        if (e != 0) {
            if (e->a == a || a == -1) {
                if (e->b == b || b == -1) return e;
            }
        }
    }
    return 0;
}
