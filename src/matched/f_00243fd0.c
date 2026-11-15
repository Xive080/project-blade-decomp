struct S;
struct V { char pad[0x10]; s32 (*q)(struct S *, s32); s32 (*r)(struct S *, s32, s32); };
struct S { char pad[0xc]; struct V *v; u32 fl; char pad2[0x28]; s32 st; char pad3[0x8c]; struct { char pad[0x18]; s32 x; } *c; s32 pad4; s32 d4; s32 d8; };
extern void func_0012b910(struct S *);
extern void func_0017a070(struct S *, s32);
s32 func(struct S *a, s32 b) {
    struct V **pv;
    a->st = b;
    switch (a->st) {
    case 0:
        func_0012b910(a);
        break;
    case 2:
        a->fl = a->fl & ~0x1E0;
        a->d4 = 0x7F7FFFFF;
        a->d8 = 0;
        func_0017a070(a, 1);
        break;
    case 4:
        if (a->c != 0 && a->c->x != 0) func_0017a070(a, 2);
        if (a->st != 1 && !(a->fl & 2)) {
            if ((*(pv = &a->v))->q(a, 1) != 0) (*pv)->r(a, 1, 0);
        }
        break;
    case 1:
        func_0017a070(a, 3);
        break;
    }
    return 1;
}
