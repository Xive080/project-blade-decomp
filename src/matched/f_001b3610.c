struct S_arg0 { char pad10[16]; s32 f10; s32 f14; char pad40[40]; s32 f40; };
/*
 * This header contains macros emitted by m2c in "valid syntax" mode,
 * which can be enabled by passing `--valid-syntax` on the command line.
 *
 * In this mode, unhandled types and expressions are emitted as macros so
 * that the output is compilable without human intervention.
 */
#pragma mpwc_relax on
s32 func_00109d00(s32);                         /* extern */
s32 func_00109d20(s32);                         /* extern */

s32 func(struct S_arg0 *arg0) {
    s32 temp_s0;

    func_00109d20(arg0->f40);
    temp_s0 = arg0->f14 + (arg0->f10 << 0xF);
    func_00109d00(arg0->f40);
    return temp_s0;
}
