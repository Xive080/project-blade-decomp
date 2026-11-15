struct S { char p0[12]; s32 c; s32 d; char p1[8]; s16 e; s16 f; };
extern struct S *cur;
extern char base[];
s32 f(s32 x, struct S *s) {
    struct S * volatile *pp = &cur;
    struct S *t;
    s32 *d;
    *pp = s;
    t = *pp;
    d = (s32*)base;
    d[0] = t->e;
    d[1] = t->f;
    d[2] = t->c;
    d[3] = t->d;
    return 1;
}
