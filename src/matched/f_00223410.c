extern char D_0032A620[];
struct G { char pad[0x130]; char *(*f)(s32); };
struct E { char *p; char a[4]; char b[8]; };
struct S { s32 x; s32 n; char pad[8]; struct E *t; };
extern s32 func_001bf1c0(s32, char *, s32);
extern s32 func_001ca2d0(s32, char *, s32);
extern s32 func_001bf260(s32, s32 *, s32);
struct S *func(s32 a, struct S *s) {
    s32 i;
    struct E *e;
    char *base;
    s32 v;
    s->t = (struct E *)((struct G *)D_0032A620)->f(s->n * 16);
    base = (char *)s->t;

    if (base == 0) return 0;

    for (i = 0, e = (struct E *)base; i < s->n; e++, i++) {
        if (func_001bf1c0(a, e->a, 4) == 0) return 0;
        if (func_001ca2d0(a, e->b, 6) == 0) return 0;
        if (func_001bf260(a, &v, 4) == 0) return 0;
        if (v == -1) e->p = 0; else e->p = base + (v & ~0xF);
    }
    return s;
}
