#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
struct S2_arg0 { char pad30[48]; s32 f30; char padB4[128]; s32 fB4; s32 fB8; char padC0[4]; s32 fC0; s32 fC4; s32 fC8; char padD0[4]; s32 fD0; char padDC[8]; char fDC[16]; s32 fEC; char pad150[96]; char f150[16]; s32 f160; char pad1C4[96]; char f1C4[16]; s32 f1D4; char pad238[96]; char f238[16]; s32 f248; char pad2AC[96]; char f2AC[16]; s32 f2BC; char pad354[148]; s32 f354; s32 f358; s32 f35C; };
/*
 * This header contains macros emitted by m2c in "valid syntax" mode,
 * which can be enabled by passing `--valid-syntax` on the command line.
 *
 * In this mode, unhandled types and expressions are emitted as macros so
 * that the output is compilable without human intervention.
 */
#pragma mpwc_relax on
s8 *func_0013c300();                              /* extern */
s32 func_001a8d50(s8 *);                      /* extern */
s32 func_001a9780(s8 *);                      /* extern */
s32 func_00201c00(s32);                         /* extern */
s32 func_00221e20();                            /* extern */

void func(struct S2_arg0 *arg0) {
    s32 temp_a0;
    s32 temp_a0_2;
    s32 temp_a0_3;
    s32 temp_a0_4;
    s32 temp_a0_5;

    func_00221e20();
    if (arg0->fEC != 0) {
        func_001a8d50(arg0->fDC);
        func_001a9780(arg0->fDC);
    }
    if (arg0->f160 != 0) {
        func_001a8d50(arg0->f150);
        func_001a9780(arg0->f150);
    }
    if (arg0->f1D4 != 0) {
        func_001a8d50(arg0->f1C4);
        func_001a9780(arg0->f1C4);
    }
    if (arg0->f248 != 0) {
        func_001a8d50(arg0->f238);
        func_001a9780(arg0->f238);
    }
    if (arg0->f2BC != 0) {
        func_001a8d50(arg0->f2AC);
        func_001a9780(arg0->f2AC);
    }
    if (!(arg0->fD0 & 0x10)) {
        temp_a0 = arg0->fB8;
        if ((temp_a0 != 0) && (temp_a0 != arg0->f30)) {
            func_00201c00(temp_a0);
        }
        temp_a0_2 = arg0->fB4;
        if ((temp_a0_2 != 0) && (temp_a0_2 != arg0->f30)) {
            func_00201c00(temp_a0_2);
        }
        func_00201c00(arg0->f30);
        arg0->f30 = 0;
        arg0->fB4 = 0;
        arg0->fB8 = 0;
        temp_a0_3 = arg0->fC8;
        if ((temp_a0_3 != 0) && (temp_a0_3 != arg0->fC0)) {
            func_00201c00(temp_a0_3);
        }
        temp_a0_4 = arg0->fC4;
        if ((temp_a0_4 != 0) && (temp_a0_4 != arg0->fC0)) {
            func_00201c00(temp_a0_4);
        }
        temp_a0_5 = arg0->fC0;
        if (temp_a0_5 != 0) {
            func_00201c00(temp_a0_5);
        }
        arg0->fC8 = 0;
        arg0->fC4 = 0;
        arg0->fC0 = 0;
    }
    arg0->f354 = 0;
    arg0->f358 = 0;
    arg0->f35C = 0;
    M2C_FIELD(func_0013c300(), s32 (**)(s8 *), 4)(arg0);
}
