/*
 * This header contains macros emitted by m2c in "valid syntax" mode,
 * which can be enabled by passing `--valid-syntax` on the command line.
 *
 * In this mode, unhandled types and expressions are emitted as macros so
 * that the output is compilable without human intervention.
 */
#pragma mpwc_relax on
s32 func_0011ec80(s32 *, s32, s32); /* extern */
s32 func_0024d2a0();                            /* extern */
extern struct { s32 v; char pad[12]; } D_00308450_;
#define D_00308450 (D_00308450_.v)
extern s32 G_848C;

s32 func(s32 arg0) {
    G_848C = arg0;
    func_0011ec80(&D_00308450, 0, 0x19C8);
    func_0024d2a0();
    return 1;
}
