struct SP { char pad[0x3fb0]; f32 f; };
struct Ent { s32 p0; s32 p4; s32 p8; f32 c; };
struct Slot { char pp[0x38]; s32 a, b, c, flag; char pad[0x44 - 16]; };
struct Rec { char pad[896]; s32 k; char pad2[512-4]; char x[1]; };
struct Obj {
    char pad0[0x130];
    struct Ent *ents;
    s32 pad134, pad138;
    s32 idx;
    s32 pad140, f144;
    char pad148[8];
    f32 f150;
    s32 f154;
};
struct Src { char pad[896]; s32 k; char pad2[512 - 4]; char x[0x600]; };
extern char D_00306C00[];
extern s32 func_002288d0();
extern s32 func_00228f80(s32);
extern s32 func_00229070(void *, s32);
extern void func_0011eac8(void *, void *, s32);
struct G { char pad[16]; void (*f)(void *, s32, void *); };
extern struct G *G_84AC;
void func(struct Obj *o) {
    s32 i;
    struct { s32 a; f32 b; f32 c; s32 d; } m;
    o->idx = func_002288d0();
    { f32 t = *(f32 *)0x70003FB0; f32 c = o->ents[o->idx].c; o->f150 = c + (15.0f + t); }
    o->f144 = 0;
    o->f154 = func_00228f80(o->ents[o->idx].p4);
    i = 2;
    while (i--) {
        struct Slot *sl = (struct Slot *)((char *)o + i * 0x44);
        char *s = D_00306C00 + i * 1456;
        char *s1;
        char *dst;
        sl->a = 0;
        sl->c = 0;
        sl->b = 0;
        s1 = s + 896;
        dst = (char *)o + *(s32 *)s1 * 0x44 + 0x38;
        func_0011eac8(dst + 16, s1 + 512, 30);
        func_0011eac8(dst + 46, s1 + 542, 6);
        func_0011eac8(dst + 52, s1 + 548, 6);
        func_0011eac8(dst + 58, s1 + 554, 9);
        func_0011eac8(dst + 67, s1 + 568, 1);
        sl->flag = *(s32 *)(s + 1240) != 0;
    }
    m.a = func_00229070(o, o->ents[o->idx].p4);
    m.b = o->f150;
    m.c = o->f150 - 3.0f;
    m.d = 0;
    if (G_84AC != 0) G_84AC->f(G_84AC, 14, &m);
}
