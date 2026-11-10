struct S_arg0 { char pad4[4]; s32 f4; char padC[4]; s32 fC; };
/*
 * This header contains macros emitted by m2c in "valid syntax" mode,
 * which can be enabled by passing `--valid-syntax` on the command line.
 *
 * In this mode, unhandled types and expressions are emitted as macros so
 * that the output is compilable without human intervention.
 */
#pragma mpwc_relax on
s32 func_0017f6b0(s32, s32, s32, s32);  /* extern */
s32 func_0017f740(s32, s32, s32 *);         /* extern */
extern s32 D_00327AC0;

s32 func(struct S_arg0 *arg0) {
    s32 var_s0;

    var_s0 = 0;
    arg0->f4 = (s32) (arg0->f4 & ~0x1000);
    do {
        func_0017f6b0(arg0->fC, var_s0, 2, 1);
        func_0017f740(arg0->fC, var_s0, &D_00327AC0);
        var_s0 += 1;
    } while (var_s0 < 4);
    return 1;
}
