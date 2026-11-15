#pragma mpwc_relax on
s32 func_0013b550(s32, s32);
s32 func_00195a90(s32 *, s32);
s32 func_0019df30(void);
s32 func_0019e220(s32);
s32 func_001a3ac0(s8 *, s32, s32);
extern struct { s32 v; char pad[12]; } D_003156A0_;
#define D_003156A0 (D_003156A0_.v)
extern s32 D_002FA610[];
extern s32 G_8328;
struct O { s32 p0; s32 fl; s32 a; s32 b; s32 c; s32 *d; s32 e; };
void func(struct O *o, s32 arg1, s32 arg2) {
    switch (arg1) {
    case 0:
    o->a = func_0013b550(G_8328, 218);
    o->b = 0;
    o->d = &D_003156A0;
    o->c = 1;
    o->e = 0;
    o->fl = 0;
    func_00195a90(&D_003156A0, 218);
    o->fl |= 0x12;
        break;
    case 3:
        if (D_002FA610[0] == 3) func_0019df30(); else func_0019e220(0);
        break;
    default:
        break;
    }
    func_001a3ac0((s8 *)o, arg1, arg2);
}
