#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
/*
 * This header contains macros emitted by m2c in "valid syntax" mode,
 * which can be enabled by passing `--valid-syntax` on the command line.
 *
 * In this mode, unhandled types and expressions are emitted as macros so
 * that the output is compilable without human intervention.
 */
s32 func_001fc4a0();                                /* extern */
s32 func_00209ff0(void *, s32);                 /* extern */
extern s32 D_002FA448;
extern s32 D_002FA44C;
extern s32 D_002FA450;
extern s32 D_002FA468;
extern s32 D_002FA474;

void func(void *arg0) {
    s32 temp_s0;

    temp_s0 = M2C_FIELD(arg0, s32 *, 0x6C);
    if (temp_s0 == func_001fc4a0()) {
        func_00209ff0(arg0, D_002FA450);
        return;
    }
    if ((temp_s0 != D_002FA468) && (temp_s0 != D_002FA474)) {
        if (M2C_FIELD(M2C_FIELD(arg0, void **, 0x18), u8 *, 2) & 8) {
            func_00209ff0(arg0, D_002FA44C);
            return;
        }
        func_00209ff0(arg0, D_002FA448);
    }
}
