struct P { char pad[0x84]; char *tbl; };
struct Q { char pad[0x14]; struct P *p; };
struct A { char pad[0x1c]; u16 idx; char pad2[0x14]; s32 f34; s32 f38; s32 f3c; s32 f40; s32 f44; s32 f48; char pad3[4]; s32 f50; char pad4[8]; s32 f5c; };
extern struct Q *G_84B0;
extern void func_00230ce0(struct A *, s32, f32);
void func(struct A *a) {
    struct P *p;
    s32 *q;
    a->f34 = 0;
    a->f3c = 0;
    a->f40 = 0;
    a->f44 = 0;
    a->f38 = 0;
    a->f48 = 0;
    a->f50 = 0;
    a->f5c = 0;
    p = G_84B0->p;
    q = (s32 *)(p->tbl + a->idx * 20);
    *q |= 0x82;
    func_00230ce0(a, 2, 0.7f);
    func_00230ce0(a, 3, 0.8f);
}
