extern struct G { s32 a; s32 p1[2]; s32 b; s32 p2[2]; s32 c; s32 p3[2]; s32 d; s32 p4[2]; s32 e; s32 p5[2]; s32 f; s32 p6[2]; s32 h; } g;
extern void f1a7940(s32);
void func(void) {
    if (g.a != -1) {
        f1a7940(g.a);
        g.h = 1;
        g.b = -1;
        g.c = -1;
        g.d = 0;
        g.e = 0;
        g.f = 0;
    }
}
