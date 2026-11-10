struct S_arg1 { s32 f0; s32 f4; s32 f8; s32 fC; s32 f10; s32 f14; s32 f18; s32 f1C; s32 f20; s32 f24; };
/*
 * This header contains macros emitted by m2c in "valid syntax" mode,
 * which can be enabled by passing `--valid-syntax` on the command line.
 *
 * In this mode, unhandled types and expressions are emitted as macros so
 * that the output is compilable without human intervention.
 */
#pragma mpwc_relax on
s32 func_00188ff0(s32);                         /* extern */
s32 func_001891c0(s32, s32, s32);           /* extern */
s32 func_00189650(s32);                         /* extern */

void func(s32 arg0, struct S_arg1 *arg1) {
    s32 temp_a0;
    s32 temp_a0_2;
    s32 temp_a0_3;

    func_00188ff0(arg1->f4);
    arg1->f4 = 0;
    func_00188ff0(arg1->f8);
    arg1->f8 = 0;
    temp_a0 = arg1->f10;
    if (temp_a0 != 0) {
        func_00188ff0(temp_a0);
        arg1->f10 = 0;
        arg1->f14 = 0;
    }
    temp_a0_2 = arg1->fC;
    if (temp_a0_2 != 0) {
        func_00188ff0(temp_a0_2);
        arg1->fC = 0;
    }
    temp_a0_3 = arg1->f24;
    if (temp_a0_3 != 0) {
        func_001891c0(temp_a0_3, arg1->f20, 1);
    }
    arg1->f18 = 0;
    arg1->f14 = 0;
    func_00189650(arg1->f0);
    arg1->f1C = 0;
    arg1->f0 = 0;
}
