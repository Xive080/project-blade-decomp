#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
/*
 * This header contains macros emitted by m2c in "valid syntax" mode,
 * which can be enabled by passing `--valid-syntax` on the command line.
 *
 * In this mode, unhandled types and expressions are emitted as macros so
 * that the output is compilable without human intervention.
 */
#define NULL 0
extern s8 *G_84AC;
extern s32 G_84B4;

void func(void) {
    if (G_84AC != NULL) {
        M2C_FIELD(G_84AC, s32 (**)(s8 *), 8)(G_84AC);
        G_84AC = NULL;
    }
    G_84B4 = 0;
}
