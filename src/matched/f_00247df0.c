extern char A[], B[], C[], D[], E[];
s32 h1(s32, s32, char *, char *);
s32 h2(s32, s32, char *, char *, char *);
extern s32 G;
s32 func(void) {
    if (h1(0, 0x1b7, A, B) < 0) return 0;
    G = h2(4, 0x1b7, C, D, E);
    return G >= 0;
}
