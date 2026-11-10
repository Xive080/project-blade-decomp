extern char sym[];
extern s32 off;
s32 func(void) {
    s32 *p = (s32*)(sym);
    s32 q = (s32)p;
    return *(s32*)((s32)sym + off + 16);
}
