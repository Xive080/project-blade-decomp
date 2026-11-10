extern struct G { char pad[0x3a40]; s32 a; s32 pad1; s32 b; s32 pad2; s32 c; s32 pad3; s32 e; s32 pad4; s32 d; } g;
void func(void) {
    if (g.a == 8 && g.b == 8) return;
    g.a = 8;
    g.b = 8;
    g.c = 0;
    g.d = 1;
    g.e = 1;
}
