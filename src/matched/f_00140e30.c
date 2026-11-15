struct T;
struct O { void *pad[4]; void (*fn)(struct O *, s32, void *); };
struct S {
    char p0[0x154]; f32 f154; char p1[4]; f32 f15c; char p2[8];
    s32 s168; char p3[4]; f32 f170; char p4[4]; s32 s178; f32 f17c;
};
extern void func_00140f10(struct S *, s32, struct T *, f32);
struct T {s32 a[8];};
extern struct T D_002EC0F8;
extern f32 D_002FEBBC[];
extern struct O *G_84AC;
s32 f(struct S *p) {
    s32 i;
    f32 t;
    if (p->s168 == 0x1000) {
        func_00140f10(p, 0x2000, &D_002EC0F8, 0.0f);
    }
    p->s178++;
    if (p->s178 < 6) i = p->s178; else i = 6;
    t = D_002FEBBC[i];
    p->f170 += t * p->f17c;
    p->f154 += t * p->f17c;
    p->f15c += 0.001f * t;
    if (G_84AC != 0) {
        G_84AC->fn(G_84AC, 1, p);
    }
    return 1;
}
