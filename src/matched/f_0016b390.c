typedef int s32;
extern char A[], B[], C[], D[], E[], F[], H[], I[];
extern s32 G;
s32 f1(s32, s32, char *, char *);
s32 f2(s32, s32, char *, char *, char *);
s32 f3(s32, char *, char *, char *);
s32 func(void) {
    if (f1(0, 336, A, B) < 0) return 0;
    G = f2(4, 336, C, D, E);
    if (G < 0) return 0;
    return f3(336, F, H, I) >= 0;
}
