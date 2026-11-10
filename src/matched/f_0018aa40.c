#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
/*
 * This header contains macros emitted by m2c in "valid syntax" mode,
 * which can be enabled by passing `--valid-syntax` on the command line.
 *
 * In this mode, unhandled types and expressions are emitted as macros so
 * that the output is compilable without human intervention.
 */
#pragma mpwc_relax on
f32 func_00119ff8(f32);                             /* extern */
f32 func_0011a398(f32);                             /* extern */

/* Warning: Gap in callee-saved word stack region.
 * Saved: [0x0, 0x10, 0x14, 0x18, 0x1c, 0x20, 0x24, 0x28, 0x2c], gap at: 0x8. */
s32 func(f32 *arg0, s8 *arg1, f32 fparg0) {
    f32 temp_f0;
    f32 temp_f20;
    f32 temp_f20_2;
    f32 temp_f2;
    f32 temp_f2_2;

    temp_f20 = 0.017453292f * (*arg0 * fparg0);
    temp_f20_2 = func_0011a398(temp_f20);
    temp_f0 = func_00119ff8(temp_f20);
    temp_f2 = M2C_FIELD(arg1, f32 *, 8);
    M2C_FIELD(arg1, f32 *, 8) = (f32) ((M2C_FIELD(arg1, f32 *, 0xC) * temp_f20_2) + (temp_f2 * temp_f0));
    M2C_FIELD(arg1, f32 *, 0xC) = (f32) ((M2C_FIELD(arg1, f32 *, 0xC) * temp_f0) - (temp_f2 * temp_f20_2));
    temp_f2_2 = M2C_FIELD(arg1, f32 *, 0x10);
    M2C_FIELD(arg1, f32 *, 0x10) = (f32) ((M2C_FIELD(arg1, f32 *, 0x14) * temp_f20_2) + (temp_f2_2 * temp_f0));
    M2C_FIELD(arg1, f32 *, 0x14) = (f32) ((M2C_FIELD(arg1, f32 *, 0x14) * temp_f0) - (temp_f2_2 * temp_f20_2));
    return 1;
}
