struct S_arg0 { char padC[12]; s32 fC; char pad68[88]; s32 f68; char pad70[4]; s32 f70; };
/*
 * This header contains macros emitted by m2c in "valid syntax" mode,
 * which can be enabled by passing `--valid-syntax` on the command line.
 *
 * In this mode, unhandled types and expressions are emitted as macros so
 * that the output is compilable without human intervention.
 */
#pragma mpwc_relax on
s32 func_001c36f0(s32);                         /* extern */
s32 func_001feca0(s32);                         /* extern */

void func(struct S_arg0 *arg0) {
    s32 temp_a0;

    func_001c36f0(arg0->f68);
    temp_a0 = arg0->f70;
    if (temp_a0 != 0) {
        func_001feca0(temp_a0);
        arg0->f70 = 0;
    }
    arg0->fC = 0;
}
