extern void sub(s32);
extern s32 g;
extern char base[];
s32 func(void) {
    if (g == 0) { g = (s32)base; sub(g); }
    return g;
}
