extern s32 D_002FA360;
extern char D_002FA370[];
extern s32 D_002FA424;
extern void f195380(s32);
extern void f195290(void);
extern s32 f1c21a0(s32);
extern s32 f1c21c0(s32);
extern s32 f1c2510(s32);
extern void f1c2520(s32);
extern void f1c36f0(s32);
extern void f1c8500(s32);
void func(void) {
    s32 i;
    char *p;
    f195380(D_002FA424);
    f195290();
    p = D_002FA370;
    for (i = 0; i < 2; i++) {
        f1c8500(f1c21a0(*(s32 *)(p + 4)));
        f1c8500(f1c21c0(*(s32 *)(p + 4)));
        f1c2520(*(s32 *)(p + 4));
        p += 76;
    }
    f1c8500(f1c21a0(D_002FA360));
    f1c8500(f1c21c0(D_002FA360));
    f1c36f0(f1c2510(D_002FA360));
    f1c2520(D_002FA360);
}
