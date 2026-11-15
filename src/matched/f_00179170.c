typedef int s32;
typedef unsigned int u32;
extern u32 A, B;
extern s32 (*P)(s32, s32);
s32 f1(void);
s32 f2(s32, s32, s32, s32);
s32 func(s32 x, s32 y) {
    if (f1()) {
        y = y * x;
        x = ~(A + 0xFFFFFFFFu) & ((B + A) + 0xFFFFFFFFu);
        B = x + y;
        f2(x, 0, y, -1);
    } else {
        x = P(x, y);
    }
    return x;
}
