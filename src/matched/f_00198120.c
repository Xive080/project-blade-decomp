extern struct G { s32 a, b, c, d; } g;
void func(s32 x, s32 y) {
    g.b = 1;
    g.c = x;
    if (y != 0) {
        g.d = g.a;
    } else {
        g.d = 0;
    }
}
