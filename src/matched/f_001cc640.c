extern char sym[];
extern s32 off;
s32 func(s32 a) {
    *(s32*)((s32)sym + off + 28) = a;
    return 1;
}
