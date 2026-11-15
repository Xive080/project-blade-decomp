struct T { void *a; void *b; s32 c; s32 d; };
extern struct T tbl;
extern char fa[], fb[], buf[];
extern s32 G;
void sub1(s32, struct T *, s32, s32);
void sub2(char *, s32, s32);
s32 f(void) {
    tbl.a = fa;
    tbl.b = fb;
    tbl.c = 0;
    tbl.d = 0;
    sub1(0x4000, &tbl, 0, 0);
    sub2(buf, 0, 0xe0c);
    G = 0;
    return 1;
}
