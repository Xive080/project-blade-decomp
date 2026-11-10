struct S;
struct V { s32 a; s32 b; void (*fn)(struct S *, s32); };
struct S { char pad[0xC]; struct V *v; u32 flags; char pad2[0x3DC - 0x14]; s32 *q; };
extern void func_0012b7e0(s32, struct S *, s32);
extern s32 D_70003FD8;
void func(struct S *p) {
    if (p->q == 0) {
        p->v->fn(p, 0);
        p->flags &= ~1;
        func_0012b7e0(D_70003FD8, p, 0);
        return;
    }
    *p->q = 0;
}
