typedef int s32;
extern s32 f1c2a00(s32, s32, char *, char *);
extern s32 f202590(s32, s32, char *, char *, char *);
extern s32 f2025c0(s32, s32, char *, char *, char *);
extern char S1[], S2[], S3[], S4[], S5[], S6[], S7[], S8[];
extern s32 G1, G2;
s32 func(void) {
    s32 r1, r2;
    if (f1c2a00(0, 363, S1, S2) < 0) return 0;
    r1 = f202590(96, 363, S3, S4, S5);
    G1 = r1;
    r2 = f2025c0(4, 363, S6, S7, S8);
    G2 = r2;
    return 1;
}
