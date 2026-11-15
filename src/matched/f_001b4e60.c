extern s32 func_001b4c00(s32);
extern s32 G_8550;
s32 func(s32 arg0) {
    arg0++;
    for (; arg0 < 7; arg0++) {
        if (func_001b4c00(arg0) != 0) {
            if (!(G_8550 & (1 << arg0))) return arg0;
        }
    }
    return 7;
}
