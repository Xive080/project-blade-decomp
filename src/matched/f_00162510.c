struct S_arg1 { s32 f0; s32 f4; s32 f8; s32 fC; };
/*
 * This header contains macros emitted by m2c in "valid syntax" mode,
 * which can be enabled by passing `--valid-syntax` on the command line.
 *
 * In this mode, unhandled types and expressions are emitted as macros so
 * that the output is compilable without human intervention.
 */
#pragma mpwc_relax on
s32 func_001625b0(s32, s32, s32);               /* extern */
s32 func_0016f240(s32, s32, s32);                   /* extern */

void func(s32 arg0, struct S_arg1 *arg1, s32 arg2) {
    s32 var_a0;
    s32 var_v1;

    if (arg1->f0 == 0xFB) {
        var_v1 = arg1->f4;
        var_a0 = 0;
        if (var_v1 != 1) {
            do {
                var_v1 = var_v1 >> 1;
                var_a0 += 1;
            } while (var_v1 != 1);
        }
        func_001625b0(arg0, func_0016f240(var_a0, arg1->f8, arg1->fC), arg2);
    }
}
