struct S { void *vt; s32 a; s32 b; s32 c; s32 d; s32 e; };
extern s32 func_0013b550(s32);
extern s32 func_001a3fb0(s32);
extern char D_001971D0[];
extern s32 G_8328;
void func(struct S *s, s32 a1, s32 a2, s32 a3, s32 t0) {
    s->a = func_0013b550(G_8328);
    s->vt = D_001971D0;
    s->b = 0;
    s->c = a2;
    s->d = a3;
    s->e = func_001a3fb0(t0);
}
