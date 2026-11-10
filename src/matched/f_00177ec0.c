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
s8 *func_001782b0(s32, s32 *);                     /* extern */
extern struct { s32 v; char pad[12]; } D_002EFB90_;
#define D_002EFB90 (D_002EFB90_.v)
extern struct { s32 v; char pad[12]; } D_002EFBA0_;
#define D_002EFBA0 (D_002EFBA0_.v)
extern s32 G_8484;
extern s32 *G_8488;

s32 func(s32 arg0) {
    s8 *temp_a0;
    s8 *temp_v0;

    temp_v0 = func_001782b0(arg0, &D_002EFB90);
    if (temp_v0 != NULL) {
        if ((temp_v0 != NULL) && (temp_a0 = M2C_FIELD(temp_v0, s8 **, 0x568), (temp_a0 != NULL))) {
            M2C_FIELD(temp_a0, s32 (**)(s8 *, s8 *), 4)(temp_a0, temp_v0);
        } else {
            G_8484 = 3;
            G_8488 = &D_002EFBA0;
        }
        return 1;
    }
    return 0;
}
