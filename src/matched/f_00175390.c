struct E { s32 p0, p1; s32 a; s32 p3[8]; s32 b; s32 c; };
extern struct E tbl[];
extern s32 func_001765e0(s32, s32, s32 *);
s32 func(s32 i, s32 f) {
    if (tbl[i].a == 0) return 1;
    tbl[i].b = 1;
    if (f != 0) tbl[i].c = 1;
    else tbl[i].c = 0;
    return func_001765e0(i, 3, &tbl[i].b);
}
