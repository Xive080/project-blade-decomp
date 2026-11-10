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
s32 func_00148620(s32 *);                       /* extern */
extern struct { s32 v; char pad[12]; } D_0032A620_;
#define D_0032A620 (D_0032A620_.v)
extern s32 *G_8368;

s32 func(void) {
    s32 *temp_s0;

    temp_s0 = G_8368;
    if (temp_s0 != NULL) {
        if (temp_s0 != NULL) {
            if (!(*temp_s0 & 8)) {
                func_00148620(temp_s0);
            }
            M2C_FIELD(&D_0032A620, s32 (**)(s32 *), 0x134)(temp_s0);
        }
        G_8368 = NULL;
    }
    return 1;
}
