struct S_arg0 { char pad84[132]; s32 f84; s32 f88; };
/*
 * This header contains macros emitted by m2c in "valid syntax" mode,
 * which can be enabled by passing `--valid-syntax` on the command line.
 *
 * In this mode, unhandled types and expressions are emitted as macros so
 * that the output is compilable without human intervention.
 */
#pragma mpwc_relax on
s32 func_00188ff0(s32);                         /* extern */

void func(struct S_arg0 *arg0) {
    s32 temp_a0;
    s32 temp_a0_2;

    temp_a0 = arg0->f84;
    if (temp_a0 != 0) {
        func_00188ff0(temp_a0);
        arg0->f84 = 0;
    }
    temp_a0_2 = arg0->f88;
    if (temp_a0_2 != 0) {
        func_00188ff0(temp_a0_2);
        arg0->f88 = 0;
    }
}
