extern s32 offset;
void func(s32 arg0, s32 arg1) {
    *(s32*)(arg0 + offset) = arg1;
}
