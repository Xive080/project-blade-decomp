struct P { char pad[12]; s32 a; s32 b; };
struct L { s32 w0; s32 w1; s32 w2; s32 w3; };
extern struct P *G;
extern s32 sub(s32, struct L *);
s32 f(void) {
    s32 r = 0;
    if (G != 0) {
        struct L l;
        l.w1 = 0;
        l.w0 = 0;
        l.w2 = G->a;
        l.w3 = G->b;
        r = sub(0, &l);
    }
    return r;
}
