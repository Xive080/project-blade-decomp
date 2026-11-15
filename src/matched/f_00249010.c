extern char s0[], s1[], s2[], s3[], s4[];
extern s32 G;
s32 sub1(s32, s32, char *, char *);
s32 sub2(s32, s32, char *, char *, char *);
s32 f(void) {
    if (sub1(0, 440, s0, s1) < 0) return 0;
    G = sub2(4, 440, s2, s3, s4);
    return G >= 0;
}
