#pragma mpwc_relax on
s32 func_0013b550(s32, s32);
s32 func_001956b0(s32 *, s32, s32);
s32 func_0019e220(s32);
s32 func_001a3ac0(s8 *, s32, s32);
s32 func_001b6240(void);
extern struct { s32 v; char pad[12]; } D_00315F00_;
#define D_00315F00 (D_00315F00_.v)
extern s32 G_8328;
struct O { s32 p0; s32 fl; s32 a; s32 b; s32 c; s32 *d; s32 e; };
s32 func(struct O *o, s32 arg1, s32 arg2) {
    switch (arg1) {
    case 0:
    o->a = func_0013b550(G_8328, 0);
    o->b = 0;
    o->d = &D_00315F00;
    o->c = 1;
    o->e = 0;
    o->fl = 0;
    func_001956b0(&D_00315F00, 4, 1);
    o->fl |= 0xa;
        break;
    case 9:
        if (func_001b6240() == 0) return 1;
        break;
    case 3:
        func_0019e220(1);
        break;
    default:
        break;
    }
    return func_001a3ac0((s8 *)o, arg1, arg2);
}
