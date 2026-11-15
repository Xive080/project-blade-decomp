extern s32 sub(void *);
extern void sub2(s32, s32, void *, s32, s32, s32);
extern struct { s32 n; s32 *p; char pad[8]; } G;
extern char A[];
extern char B[];
extern char C[];
s32 func(s32 a) {
    s32 t;
    G.p[0] = G.n;
    G.p[1] = a;
    t = (G.n + 1) << 5;
    do { } while (sub(C) != 0);
    sub2(0, 0x8018, G.p, t, 384, 0);
    if ((char*)G.p != A) { G.p = (s32*)A; } else { G.p = (s32*)B; }
    G.n = 0;
    return 1;
}
