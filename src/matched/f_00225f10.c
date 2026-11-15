struct O { char pad[0x20]; void (*fn)(void); };
struct P { struct O *o; s32 p4; s32 p8; s32 kind; char pad1[0x28]; s32 a38; char pad2[4]; s32 f40; s32 f44; char pad3[4]; f32 f4c; char pad4[0xc]; s32 f5c; s32 f60; };
struct H { char pad[0x5c]; s32 v; };
struct G { char pad[0x298]; char b298[0x304]; struct H *p59c; };
struct Q { char pad[0x10]; void (*fn)(struct Q *, s32, s32); };
extern void func_00132b30(s32, s32);
extern s32 func_0013b550(s32, s32);
extern void func_0016f380(s32);
extern void func_001b9ce0(void *, void *, s32);
extern unsigned char D_002FA61F[16];
extern char D_00306F80[];
extern char D_00329770[];
extern volatile s32 D_00306F84[4];
extern volatile s32 D_00307534[4];
extern s32 G_8328;
extern struct Q *G_84AC;
s32 func(struct P *p) {
    s32 t;
    struct G *g;
    switch (p->kind) {
    case 9:
        p->o->fn();
        break;
    case 8:
        func_00132b30(D_002FA61F[0], 1);
        break;
    case 10:
        g = (struct G *)D_00306F80;
        func_001b9ce0(D_00329770, g->b298 , p->a38);
        t = g->p59c->v;
        if (t != 0 && t != func_0013b550(G_8328, 0) && G_84AC != 0) {
            G_84AC->fn(G_84AC, 9, t);
        }
        D_00306F84[0] &= ~4;
        D_00307534[0] &= ~4;
        p->f5c = p->f5c + 1;
        if (p->f44 != 0) {
            p->f4c = *(f32 *)0x70003FB4;
        }
        func_0016f380(p->f60 + (u32)D_002FA61F[0] * 10);
        break;
    case 23:
        p->f44 = 1;
        break;
    }
    return 1;
}
