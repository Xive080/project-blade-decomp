extern s32 f1ca2d0(s32, void *, s32);
extern void f16f910(s32, void *);
s32 func(s32 a0) {
    char buf[32];
    if (f1ca2d0(a0, buf, 32) != 32) return 0;
    f16f910(27, buf);
    return 1;
}
