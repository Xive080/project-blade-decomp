typedef int s32;
extern s32 f170690(s32, void * volatile *, s32, s32);
extern s32 f1a9ed0(s32, s32);
extern s32 f1a7370(s32, s32);
extern s32 f1a7240(s32, float);
extern char A[], B[];
extern void * volatile D0[];
extern volatile s32 D2, D3;
s32 func(void) {
    D0[0] = A;
    D0[1] = B;
    D2 = 0;
    D3 = 0;
    f170690(128, D0, 16, 0);
    f1a9ed0(0, 0x68c00);
    f1a9ed0(1, 0x16800);
    f1a9ed0(2, 0x11f800);
    f1a9ed0(3, 0x16800);
    f1a7370(0, 5);
    f1a7370(1, 5);
    f1a7240(0, 0.0f);
    f1a7240(1, 0.0f);
    return 1;
}
