extern char A[], B[], C[], D[], E[], F[];
extern s32 G;
s32 f_001c2a00(s32, s32, char *, char *);
s32 f_00202590(s32, s32, char *, char *, char *);
s32 func(void) {
    if (f_001c2a00(0, 438, A, B) < 0) return 0;
    G = f_00202590(4, 438, C, D, E);
    return G >= 0;
}
