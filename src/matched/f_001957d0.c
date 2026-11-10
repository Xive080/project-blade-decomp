#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
/*
 * This header contains macros emitted by m2c in "valid syntax" mode,
 * which can be enabled by passing `--valid-syntax` on the command line.
 *
 * In this mode, unhandled types and expressions are emitted as macros so
 * that the output is compilable without human intervention.
 */
#pragma mpwc_relax on
s32 func_0013b550(s32);                             /* extern */
extern struct { s32 v; char pad[12]; } D_00196450_;
#define D_00196450 (D_00196450_.v)
extern s32 G_8328;

void func(s8 *arg0, s32 arg1, s32 arg2) {
    M2C_FIELD(arg0, s32 *, 4) = func_0013b550(G_8328);
    M2C_FIELD(arg0, s32 **, 0) = &D_00196450;
    M2C_FIELD(arg0, s32 *, 8) = 0;
    M2C_FIELD(arg0, s32 *, 0x1C) = arg2;
}
