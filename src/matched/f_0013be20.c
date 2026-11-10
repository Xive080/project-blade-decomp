#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
struct S_arg0 { char pad24[36]; s32 f24; s32 f28; };
/*
 * This header contains macros emitted by m2c in "valid syntax" mode,
 * which can be enabled by passing `--valid-syntax` on the command line.
 *
 * In this mode, unhandled types and expressions are emitted as macros so
 * that the output is compilable without human intervention.
 */
#pragma mpwc_relax on
s32 func_0012b910();                            /* extern */
extern s32 D_0032A620;

void func(struct S_arg0 *arg0) {
    func_0012b910();
    M2C_FIELD(&D_0032A620, s32 (**)(s32), 0x134)(arg0->f24);
    arg0->f24 = 0;
    arg0->f28 = 0;
}
