struct O { char pad[0x88]; s32 a; char pad2[4]; s32 b; s32 c; s32 d; };
struct M { char pad[0x130]; struct O *(*alloc)(s32); };
extern char D_0032A620[];
extern s32 G_8520;
extern s32 G_8524;
s32 func_001bf260(s32, s32 *, s32);
void func_001a5570(s32, s32, s32, f32);
void func_001ca2d0(s32, struct O *, s32);
void func_00209ff0(s32, s32);
s32 func(s32 arg0, s32 arg1, s32 arg2) {
    s32 sp3C;
    struct O *v;
    s32 a1, a0, a2;
    if (func_001bf260(arg0, &sp3C, 4) == 0) return 0;
    if (sp3C == 0) return arg0;
    v = ((struct M *)D_0032A620)->alloc(0x9c);
    if (v == 0) {
        v = 0;
    } else {
        v->a = 0;
        v->c = 0;
        v->d = 1;
    }
    if (v == 0) return 0;
    *(struct O **)(arg2 + G_8524) = v;
    a1 = (sp3C >> 8) & 0x1f;
    a0 = (sp3C >> 0xd) & 0xff;
    a2 = (sp3C >> 0x15) & 7;
    if (a1 == 0) {
        func_001ca2d0(arg0, v, 0x88);
    } else {
        func_001a5570(arg2, a1, a2, (f32)a0 / 16.0f);
    }
    func_00209ff0(arg2, G_8520);
    return arg0;
}
