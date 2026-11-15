struct R { s32 a, b, c, d, e; };
struct G { u32 first; char pad0[420]; struct R r[4]; char pad1[1000]; };
extern struct G g;
extern int func_00177390(u32, s32);
int func(s32 a, s32 i) {
    int r = 0;
    if (i == 0) {
        int k;
        char *q = (char *)&g;
        for (k = 0; k < 12; k++, q += 4) {
            u32 p = *(u32 *)(q + 836);
            if (p) {
                r = func_00177390(p, a);
                if (r) break;
            }
        }
    } else {
        int k = 0;
        u32 lo;
        u32 hi;
        char *q;
        lo = g.first + g.r[i].a;
        hi = lo + g.r[i].b;
        q = (char *)&g;
        for (; k < 12; k++, q += 4) {
            u32 p = *(u32 *)(q + 836);
            if (p && p >= lo && p < hi) {
                r = func_00177390(p, a);
                if (r) break;
            }
        }
    }
    return r;
}
