#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
/*
 * This header contains macros emitted by m2c in "valid syntax" mode,
 * which can be enabled by passing `--valid-syntax` on the command line.
 *
 * In this mode, unhandled types and expressions are emitted as macros so
 * that the output is compilable without human intervention.
 */
s32 func_00243090();                            /* extern */
extern u8 D_002FA61F;
extern s32 D_002FA620;

void func(void **arg0) {
    s32 var_s0;

    var_s0 = 3;
    func_00243090();
    if ((D_002FA61F == 8) || (D_002FA620 == 1)) {
        var_s0 = 8;
    }
    M2C_FIELD(*arg0, s32 (**)(void **, s32), 0x18)(arg0, var_s0);
}
