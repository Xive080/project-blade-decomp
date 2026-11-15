#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
struct S2_arg0 { char padC[12]; s32 fC; char pad34[36]; s32 f34; s32 f38; char padB0[116]; s32 fB0; char padCC[24]; s32 fCC; char pad3F8[808]; char f3F8[116]; char f46C[120]; char f4E4[4]; };
/*
 * This header contains macros emitted by m2c in "valid syntax" mode,
 * which can be enabled by passing `--valid-syntax` on the command line.
 *
 * In this mode, unhandled types and expressions are emitted as macros so
 * that the output is compilable without human intervention.
 */
#pragma mpwc_relax on
s32 func_0013be20(s8 *);                      /* extern */
s32 func_00143600(s32);                         /* extern */
s8 *func_0017a3c0();                              /* extern */
s32 func_0017f4b0(s32);                         /* extern */
s32 func_00180450(s32);                         /* extern */
s32 func_001a8d50(s8 *);                      /* extern */
s32 func_001a9780(s8 *);                      /* extern */
extern s32 G_8380;

void func(struct S2_arg0 *arg0) {
    s32 temp_a0;

    arg0->fC = 0;
    func_00143600(arg0->fB0);
    temp_a0 = arg0->f38;
    if ((temp_a0 != 0) && (temp_a0 != G_8380)) {
        func_00180450(temp_a0);
        arg0->f38 = 0;
    }
    func_0017f4b0(arg0->f34);
    func_001a8d50(arg0->f3F8);
    func_001a9780(arg0->f3F8);
    func_001a8d50(arg0->f46C);
    func_001a9780(arg0->f46C);
    func_001a8d50(arg0->f4E4);
    func_001a9780(arg0->f4E4);
    M2C_FIELD(func_0017a3c0(), s32 (**)(s8 *), 4)(arg0);
    if (arg0->fCC != 0) {
        arg0->fCC = 0;
    }
    func_0013be20(arg0);
}
