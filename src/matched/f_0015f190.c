#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
struct S2_arg1 { char pad8[8]; s32 f8; char pad14[8]; f32 f14; char f18[4]; };
struct S2_arg0 { char pad46C[1132]; char f46C[16]; s32 f47C; char pad4E0[96]; f32 f4E0; char f4E4[116]; s32 f558; };
/*
 * This header contains macros emitted by m2c in "valid syntax" mode,
 * which can be enabled by passing `--valid-syntax` on the command line.
 *
 * In this mode, unhandled types and expressions are emitted as macros so
 * that the output is compilable without human intervention.
 */
#pragma mpwc_relax on
s32 func_001a8600(s8 *, s8 *, s32);     /* extern */
s32 func_001a8850(s8 *, f32);                 /* extern */
s32 func_001a8e80(s8 *);                      /* extern */

/* Warning: Gap in callee-saved word stack region.
 * Saved: [0x0, 0x10, 0x14, 0x18, 0x1c, 0x20, 0x24, 0x28, 0x2c, 0x30, 0x34, 0x38, 0x3c], gap at: 0x8. */
void func(struct S2_arg0 *arg0, struct S2_arg1 *arg1) {
    f32 temp_f0;
    f32 temp_f1;
    f32 var_f20;

    if (arg0->f47C != 0) {
        func_001a8600(arg0->f46C, arg1->f18, 0);
        temp_f1 = arg1->f14;
        temp_f0 = M2C_FIELD(M2C_FIELD(arg0, s8 **, 0x3D8), f32 *, 0x1DC8);
        if (temp_f1 < temp_f0) {
            var_f20 = 0.75f + (0.25f * (temp_f1 / temp_f0));
            if ((arg0->f558 == 0) && (arg1->f8 == 1)) {
                func_001a8600(arg0->f4E4, arg1->f18, 0);
                func_001a8e80(arg0->f4E4);
                arg0->f558 = 1;
            }
        } else {
            arg0->f558 = 0;
            var_f20 = 0.85f + (0.15f * (temp_f1 / temp_f0));
        }
        if (arg0->f4E0 != var_f20) {
            arg0->f4E0 = var_f20;
            func_001a8850(arg0->f46C, var_f20);
        }
    }
}
