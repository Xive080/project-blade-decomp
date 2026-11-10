extern volatile s32 G_83A8;
extern volatile s32 G_83AC;

s32 func(s32 arg0, s32 arg1) {
    G_83A8 = arg1;
    G_83AC += 1;
    return arg0;
}
