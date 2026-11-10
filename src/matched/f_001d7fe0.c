struct S { u16 flags; s16 f2; s32 f4; s32 f8; s32 fC; s32 f10; };
extern void func_001dbc80(s32, s32);
extern s32 G_8620;
struct S *func(struct S *p, s32 a1, s16 a2, s32 a3) {
    s32 t = p->f4;
    if (t != 0 && !(p->flags & 2) && t != a1) {
        func_001dbc80(G_8620, t);
        p->f4 = 0;
    }
    p->f4 = a1;
    p->f8 = a1;
    p->f2 = a2;
    p->flags |= 3;
    p->fC = a3;
    p->f10 = a3;
    return p;
}
