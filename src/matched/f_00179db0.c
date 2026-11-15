extern s32 rnd(void);
extern void fa(s32);
extern void fb(s32, s32, s32);
void func(s32 a, s32 b, f32 *c, f32 x, f32 y) {
    f32 t = *(f32 *)0x70003FB0;
    if (!(t < *c)) {
        f32 r = (f32)(rnd() & 0x7FFF) / 32768.0f;
        r = r * x;
        *c = y + (t + r);
        fa(a);
        fb(a, b + 0x30, 0);
    }
}
