extern f32 func_0011a620(f32);
extern void func_001ce330(f32 *, s32);
struct V2 { f32 x; f32 y; };
f32 func(s32 p, s32 q, f32 f) {
    struct V2 a;
    struct V2 b;
    f32 *ay;
    f32 *by;
    f32 d, c, r, ad;
    s32 s2, s1;
    func_001ce330(&a.x, p);
    func_001ce330(&b.x, q);
    d = a.x * b.x + *(ay = &a.y) * *(by = &b.y);
    if (d < -1.0f) {
        d = -1.0f;
    } else if (!(d <= 1.0f)) {
        d = 1.0f;
    }
    ad = d >= 0.0f ? d : -d;
    if (ad < 0.01f) d = 0.0f;
    r = 57.29578f * func_0011a620(d);
    if (f == 0.0f) return r;
    c = a.x * *by - *ay * b.x;
    if (r != 0.0f) {
        if (!(f <= 0.0f)) s1 = 1;
        else if (f < 0.0f) s1 = -1;
        else s1 = 0;
        if (!(c <= 0.0f)) s2 = 1;
        else if (c < 0.0f) s2 = -1;
        else s2 = 0;
        if (s2 != s1) r = 360.0f - r;
    }
    return r;
}
