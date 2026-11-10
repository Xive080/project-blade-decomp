extern char base[];
extern s32 off;
s32 func(void) {
    s32 *p = (s32*)((s32)base + off);
    return *(s32*)((char*)p + 56);
}
