struct O { s32 pad0; s32 f4; s32 f8; s32 pad0c; s32 f10; s32 f14; s32 f18; };
struct P { char pad[160]; s32 v; };
extern s32 func_00132280(s32);
extern s32 func_0016f4c0(s32, s32);
extern void func_00172270(s32, s32);
extern struct P *func_001718d0(void);
extern f32 func_001321a0(s32);
extern void func_00171860(f32);
extern void func_00171880(void);
extern s32 func_001718b0(void);
extern void func_00133120(s32);
extern s32 D_a;
extern s32 D_b;
extern f32 D_c[];
s32 f(struct O *o) {
    switch (o->f18) {
    case 0:
        if (func_00132280(0) != 0) {
            func_00172270(func_0016f4c0(D_b, 0), ~o->f8 == 0);
            o->f18 = 1;
        }
        return 1;
    case 1:
        if (func_001718d0()->v != 0) {
            D_a = 1;
            o->f18 = 2;
        }
        return 1;
    default:
        break;
    }
    func_00171860(func_001321a0(0));
    if (o->f14 == 0) {
        if (o->f10 == -2) {
            if (D_c[0] <= 0.5f && D_c[2] <= 0.5f) o->f10 = -1;
        } else if (D_c[0] > 0.5f) {
            o->f10 = 6;
        } else if (D_c[2] > 0.5f) {
            o->f10 = 8;
        }
        if (o->f10 >= 0) {
            func_00171880();
            o->f14 = 1;
            o->f10 = -1;
        }
    }
    if (func_001718b0() != 0) {
        if (o->f14 != 0) func_00133120(o->f4); else func_00133120(o->f8);
    }
    return 1;
}
