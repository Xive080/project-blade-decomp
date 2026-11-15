#pragma mpwc_relax on
s32 func_0013b550(s32, s32);
s32 func_001956b0(s32 *, s32, s32);
s32 func_00195a30(s32 *, s32, s32);
s32 func_001a3ac0(s8 *, s32, s32);
extern struct { s32 v; char pad[44]; } D_00315780_;
#define D_00315780 (D_00315780_.v)
extern s32 G_8328;
struct O { s32 p0; s32 fl; s32 a; s32 b; s32 c; s32 *d; s32 e; };
void func(struct O *o, s32 arg1, s32 arg2) {
    switch (arg1) {
    case 0:
        o->a = func_0013b550(G_8328, 209);
        o->b = func_0013b550(G_8328, 210);
        o->d = &D_00315780;
        o->c = 2;
        o->e = 0;
        o->fl = 0;
        func_001956b0(o->d, 280, 2);
        func_00195a30(o->d + 8, 281, 66);
        o->fl |= 8;
        break;
    default:
        break;
    }
    func_001a3ac0((s8 *)o, arg1, arg2);
}
