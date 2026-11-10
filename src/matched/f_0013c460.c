extern char sym[];
struct S { s32 a, b, c, d; s32 e; s32 pad1[2]; s32 f; s32 pad2[2]; s32 g; };
s32 func(s32 *d, s32 *s) {
    d[0] = s[0];
    d[1] = s[1];
    d[2] = s[2];
    d[4] = 0;
    d[9] = 0;
    d[11] = -1;
    d[15] = 0;
    d[16] = 0;
    d[17] = 0;
    d[18] = 0;
    d[3] = (s32)sym;
    d[14] = 0;
    d[13] = 0;
    d[12] = 0;
    d[23] = 0;
    d[24] = 0;
    return 1;
}
