extern void f_239cf0(void);
extern void f_239dc0(void);
extern void f_239e60(void);
extern void f_239ee0(void);
extern void f_239f60(void);
extern s32 f_239bb0(void);
extern void f_239b80(void *);
extern char D_332468[];
extern char D_332450[];
extern char D_332240[];
extern char D_8968[];
extern void **gA;
extern void **gB;
extern s32 *gC;
extern void *gD;
extern s32 gE[2];
void **func(void) {
    void **s0;
    s32 *s1;
    void **t;
    if (gA == 0) {
        gA = (void **)D_332468;
        s0 = gA;
        if (gB == 0) {
            gB = (void **)D_332450;
            t = gB;
            t[0] = f_239f60;
            t[1] = f_239ee0;
            t[2] = f_239e60;
            t[3] = f_239dc0;
            t[4] = f_239cf0;
        }
        s0[0] = gB;
        if (gC == 0) {
            gC = gE;
            s1 = gC;
            s1[0] = 19;
            s1[1] = f_239bb0();
        }
        s0[1] = gC;
        if (gD == 0) {
            gD = D_332240;
            f_239b80(gD);
        }
        s0[2] = gD;
    }
    return gA;
}
