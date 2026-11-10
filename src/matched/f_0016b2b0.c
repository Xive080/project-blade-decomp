/*
 * This header contains macros emitted by m2c in "valid syntax" mode,
 * which can be enabled by passing `--valid-syntax` on the command line.
 *
 * In this mode, unhandled types and expressions are emitted as macros so
 * that the output is compilable without human intervention.
 */
#pragma mpwc_relax on
s32 func_0022b8a0(s32);                         /* extern */
extern struct { s32 v; char pad[12]; } D_00305F7C_;
#define D_00305F7C (D_00305F7C_.v)
extern s32 G_8388;

s32 func(void) {
    if (G_8388 == 0) {
        return 0;
    }
    func_0022b8a0(D_00305F7C);
    return 1;
}
