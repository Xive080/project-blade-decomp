struct O { char pad[0x10]; s32 (*fn)(struct O *, s32, void *); };
struct S { char p0[0xc]; s32 k; char p1[0x28]; f32 x; };
extern void func_002432e0();
extern f32 *func_0013b550(s32, s32);
extern s32 G_8328;
extern struct O *G_84AC;
s32 func(struct S *p) {
    struct { f32 a; f32 b; } t;
    s32 r;
    f32 *q;
    func_002432e0();
    if (p->k == 5) {
        if (G_84AC != 0) { r = G_84AC->fn(G_84AC, 7, &t.a); } else { r = 0; }
        if (r != 0 && !(t.a <= p->x)) {
            q = func_0013b550(G_8328, 0x207);
            if (G_84AC != 0) G_84AC->fn(G_84AC, 8, q);
            p->x = 40.0f;
        }
    }
    return 1;
}
