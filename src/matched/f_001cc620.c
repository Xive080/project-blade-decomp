extern char base[];
extern s32 off;
s32 func(void) {
    return *(s32*)((char*)base + off + 24);
}
