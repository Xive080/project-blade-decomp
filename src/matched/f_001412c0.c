struct S_arg0 { char pad288[648]; s32 f288; };
/*
 * This header contains macros emitted by m2c in "valid syntax" mode,
 * which can be enabled by passing `--valid-syntax` on the command line.
 *
 * In this mode, unhandled types and expressions are emitted as macros so
 * that the output is compilable without human intervention.
 */
#pragma mpwc_relax on
s32 func_001b2bf0();                            /* extern */
s32 func_001c36f0(s32);                         /* extern */

void func(struct S_arg0 *arg0) {
    s32 temp_a0;

    func_001b2bf0();
    temp_a0 = arg0->f288;
    if (temp_a0 != 0) {
        func_001c36f0(temp_a0);
        arg0->f288 = 0;
    }
}
