extern struct { s32 a; s32 b; } G_8398;
s32 func(s32 arg0, s32 arg1) {
    G_8398.a = arg1;
    G_8398.b += 1;
    return arg0;
}
