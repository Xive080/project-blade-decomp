extern char *sub1(s32);
extern f32 sub2(f32);
extern void sub3(s32, f32 *);
extern s32 D_002FA364;
extern s32 D_002FA630;
extern s32 D_70003FC0;
void func(s32 arg0, f32 a, f32 b) {
    f32 sp[2];
    f32 k, r;
    s32 w = *(s32 *)(sub1(arg0) + 12);
    s32 h = *(s32 *)(sub1(arg0) + 16);
    if (w > 0 && h > 0 && !(D_002FA364 & 0x40)) {
        k = ((f32)w / 640.0f) / ((f32)h / 512.0f);
    } else {
        k = 1.0f;
    }
    r = 1.0f / (b * k);
    a = 0.5f * a * k;
    if (D_70003FC0 & 2) {
        if (D_002FA630 & 2) a *= 1.5f; else a *= 0.6f;
    }
    sp[0] = sub2(0.017453292f * a);
    sp[1] = sp[0] * r;
    if ((D_002FA630 & 1) || (D_002FA364 & 0x40)) sp[1] *= 0.75f;
    sub3(arg0, sp);
}
