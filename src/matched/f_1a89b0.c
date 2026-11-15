#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#pragma mpwc_relax on
void func_00109d00(s32);
void func_00109d20(s32);
void func_0011eac8(s32, s32 *, s32);
void func_0011fe10(s32 *, s32 *);
void func_001214b8(s32 *, s32 *, s32, s32, s32, s32, s32, s32);
void func_001aa740(s32);
extern s32 D_002F00B0[];
extern s32 D_002F0110[];
extern struct { s32 v; char pad[12]; } D_003176B0_;
#define D_003176B0 (D_003176B0_.v)
extern struct { s32 v; char pad[12]; } D_003176B4_;
#define D_003176B4 (D_003176B4_.v)
extern s32 D_00327740[];
extern s32 G_806C;
extern s32 G_852C;
struct S { s32 p0[4]; s32 st; s32 p1[2]; s32 f28; char pad[60]; u32 n92; u32 n96; f32 r; };

s32 func(struct S *arg0, s32 arg1) {
    s32 sp30[32];
    s32 temp_a3;
    s32 temp_s0;

    if (arg0->st != 1) {
        return 0;
    }
    if (arg0->n96 != arg1) {
        arg0->n96 = arg1;
        arg0->r = (f32)arg0->n96 / (f32)arg0->n92;
        func_00109d20(G_806C);
        D_00327740[0] = arg0->f28;
        D_00327740[1] = arg1;
        temp_s0 = (D_003176B0 + 1) * 8;
        if (G_852C != 0) {
            func_001214b8(sp30, D_002F00B0, 0x800F, M2C_FIELD(&D_00327740, s32 *, 0), M2C_FIELD(&D_00327740, s32 *, 4), D_003176B0, temp_s0, 8);
            func_0011fe10(D_002F0110, sp30);
        }
        temp_a3 = temp_s0 * 4;
        *(s32 *)(D_003176B4 + temp_a3) = 0x800F;
        func_0011eac8(D_003176B4 + ((temp_s0 + 1) * 4), D_00327740, 8);
        D_003176B0 += 1;
        if (D_003176B0 >= 0x3FF) {
            func_001aa740(0);
        }
        func_00109d00(G_806C);
    }
    return 1;
}
