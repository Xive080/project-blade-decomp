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
extern struct { s32 v; char pad[12]; } D_003322D0_;
#define D_003322D0 (D_003322D0_.v)
extern s32 *G_8960;

s32 *func(void) {
    if (G_8960 == NULL) {
        G_8960 = &D_003322D0;
        func_00239580(G_8960);
    }
    return G_8960;
}
