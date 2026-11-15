extern s32 base;
void sub();
s32 f(s32 a, s32 i) {
    if (*(s32*)(i + base) != 0) sub();
    return a;
}
