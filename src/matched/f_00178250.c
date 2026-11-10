#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
/*
 * This header contains macros emitted by m2c in "valid syntax" mode,
 * which can be enabled by passing `--valid-syntax` on the command line.
 *
 * In this mode, unhandled types and expressions are emitted as macros so
 * that the output is compilable without human intervention.
 */
#pragma mpwc_relax on
#define NULL 0
extern struct { s32 v; char pad[12]; } D_002EFBA0_;
#define D_002EFBA0 (D_002EFBA0_.v)
extern s32 G_8484;
extern s32 *G_8488;

s32 func(s8 *arg0) {
    s8 *temp_a0;

    if (arg0 != NULL) {
        temp_a0 = M2C_FIELD(arg0, s8 **, 0x568);
        if (temp_a0 != NULL) {
            return M2C_FIELD(temp_a0, s32 (**)(s8 *, s8 *), 4)(temp_a0, arg0);
        }
        goto block_4;
    }
block_4:
    G_8484 = 3;
    G_8488 = &D_002EFBA0;
    return -1;
}
