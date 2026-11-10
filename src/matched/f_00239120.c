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
s32 func_00239580(s32 *);                   /* extern */
extern struct { s32 v; char pad[12]; } D_00331FD0_;
#define D_00331FD0 (D_00331FD0_.v)
extern s32 *G_8928;
extern s32 *G_892C;
extern s32 G_8938;

s32 *func(void) {
    s32 *temp_s0;

    if (G_8928 == NULL) {
        G_8928 = &G_8938;
        temp_s0 = G_8928;
        M2C_FIELD(temp_s0, s32 *, 0) = 0x13;
        if (G_892C == NULL) {
            G_892C = &D_00331FD0;
            func_00239580(G_892C);
        }
        M2C_FIELD(temp_s0, s32 **, 4) = (s32 *) G_892C;
    }
    return G_8928;
}
