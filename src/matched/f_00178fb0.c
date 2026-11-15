struct R { f32 a, b, c, d; };
extern struct { s32 a; s32 b; s32 c; s32 d; s32 e; struct R r; } D;
s32 (**f0(void))(s32);
s32 func(s32 x) {
    D.a = (*f0())(x);
    D.c = 16;
    D.b = x;
    D.d = 0;
    D.e = 0;
    D.r = *(struct R *)f0();
    return D.a;
}
