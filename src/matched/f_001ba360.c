#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
/*
 * This header contains macros emitted by m2c in "valid syntax" mode,
 * which can be enabled by passing `--valid-syntax` on the command line.
 *
 * In this mode, unhandled types and expressions are emitted as macros so
 * that the output is compilable without human intervention.
 */
s32 func_0011ec80(void *, s32, s32);    /* extern */

void func(void *arg0, void *arg1) {
    func_0011ec80(arg1, 0, 0x310);
    M2C_FIELD(arg1, s32 *, 0x304) = 0;
    M2C_FIELD(arg1, s32 *, 0x308) = 0;
    M2C_FIELD(arg1, s32 *, 0) = 0;
    M2C_FIELD(arg1, u8 *, 0x30C) = (u8) M2C_FIELD(arg0, u8 *, 0xE08);
    M2C_FIELD(arg1, u8 *, 0x30D) = (u8) M2C_FIELD(arg0, u8 *, 0xE09);
    M2C_FIELD(arg1, u8 *, 0x30E) = (u8) M2C_FIELD(arg0, u8 *, 0xE0A);
    M2C_FIELD(arg1, u8 *, 0x30F) = (u8) M2C_FIELD(arg0, u8 *, 0xE0B);
}
