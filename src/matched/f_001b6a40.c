#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
/*
 * This header contains macros emitted by m2c in "valid syntax" mode,
 * which can be enabled by passing `--valid-syntax` on the command line.
 *
 * In this mode, unhandled types and expressions are emitted as macros so
 * that the output is compilable without human intervention.
 */
void **func_00133100(s32);                      /* extern */
s32 func_001a9a40(s32, s32);            /* extern */
extern volatile s32 D_002FA364;
extern volatile s32 D_002FA41C;
extern volatile s32 D_70003FC0;

s32 func(s32 arg0) {
    void **temp_s0;

    temp_s0 = func_00133100(4);
    D_002FA364 &= ~8;
    D_002FA41C = 0;
    func_001a9a40(-1, 0);
    if (!(D_70003FC0 & 2)) {
        M2C_FIELD(*temp_s0, s32 (**)(s32), 4)(arg0);
    }
    return 1;
}
