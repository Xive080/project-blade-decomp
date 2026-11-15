#pragma mpwc_relax on
s32 func_0013b550(s32, s32);
s32 func_001958a0(s32 *, s32);
s32 func_00195860(s32 *, s32);
s32 func_001a3ac0(s8 *, s32, s32);
extern struct { s32 v; char pad[12]; } D_00315660_;
#define D_00315660 (D_00315660_.v)
extern struct { s32 v; char pad[12]; } D_00315680_;
#define D_00315680 (D_00315680_.v)
extern s32 G_8328;
struct O { s32 p0; s32 fl; s32 a; s32 b; s32 c; s32 *d; s32 e; };
void func(struct O *o, s32 arg1, s32 arg2) {
    switch (arg1) {
    case 0:
    o->a = func_0013b550(G_8328, 55);
    o->b = func_0013b550(G_8328, 64);
    o->d = &D_00315660;
    o->c = 2;
    o->e = 0;
    o->fl = 0;
    func_001958a0(&D_00315660, 66);
    func_00195860(&D_00315680, 65);
    o->fl |= 0x10;
        break;
    default:
        break;
    }
    func_001a3ac0((s8 *)o, arg1, arg2);
}
