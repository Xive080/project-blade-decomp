#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
/*
 * This header contains macros emitted by m2c in "valid syntax" mode,
 * which can be enabled by passing `--valid-syntax` on the command line.
 *
 * In this mode, unhandled types and expressions are emitted as macros so
 * that the output is compilable without human intervention.
 */
extern void *G_89F0;

void func(void) {
    void *temp_a0;

    temp_a0 = M2C_FIELD(G_89F0, void **, 0x50);
    if (M2C_FIELD(temp_a0, s32 *, 0x28) != 0) {
        M2C_FIELD(temp_a0, s32 (**)(void *, s32), 0x1C)(temp_a0, 0);
    }
}
