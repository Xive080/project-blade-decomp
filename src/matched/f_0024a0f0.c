struct D { s32 a; s32 b; s32 c; s32 d; };
struct SB { u32 lo : 12; u32 mid : 11; u32 hi : 9; };
extern struct D dst;
extern struct SB src;
void func(void) {
    dst.c = 0;
    dst.d = 0;
    dst.a = src.lo;
    dst.b = src.mid;
}
