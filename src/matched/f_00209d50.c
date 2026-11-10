extern s32 offset;
s32 func(s32 arg0) {
    return *(s32*)(arg0 + offset);
}
