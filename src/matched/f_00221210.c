#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
struct S_arg0 { char pad4[4]; s32 f4; s32 f8; s32 fC; s32 f10; s32 f14; s32 f18; };
/*
 * This header contains macros emitted by m2c in "valid syntax" mode,
 * which can be enabled by passing `--valid-syntax` on the command line.
 *
 * In this mode, unhandled types and expressions are emitted as macros so
 * that the output is compilable without human intervention.
 */
#pragma mpwc_relax on
s32 func_0011ec80(s32, s32, s32);           /* extern */
s32 func_002030d0(s32, s8 *, s32);        /* extern */

void func(struct S_arg0 *arg0) {
    s8 *temp_a1;

    temp_a1 = M2C_FIELD(arg0, s8 **, 0);
    func_002030d0(M2C_FIELD(temp_a1, s32 *, 0x18), temp_a1, 1);
    func_0011ec80(arg0->fC, 0, arg0->f4 * 0x10);
    func_0011ec80(arg0->f10, 0, arg0->f4 * 0x10);
    func_0011ec80(arg0->f14, 0, arg0->f4 * 0x10);
    func_0011ec80(arg0->f18, 0, arg0->f4 * 0x10);
    arg0->f8 = 0;
}
