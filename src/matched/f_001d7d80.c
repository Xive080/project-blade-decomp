extern s32 h;
extern s32 on;
void sub(s32);
s32 f(void) {
    s32 *p;
    p = &on;
    if (*(volatile s32*)p != 0) {
        sub(h);
        *p = 0;
    }
    return 1;
}
