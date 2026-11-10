extern volatile s32 D_00329758;
extern volatile s32 D_0032975C;
extern volatile s32 D_00329760;

s32 func(s32 arg0) {
    D_00329758 = 2;
    D_0032975C = arg0;
    D_00329760 = 3;
    return 1;
}
