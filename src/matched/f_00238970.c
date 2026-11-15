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
s32 func_00121a58(s32 *, s32 *);            /* extern */
s32 func_002388e0();                                /* extern */
s32 func_00238910();                                /* extern */
extern struct { s32 v; char pad[12]; } D_002F0DF8_;
#define D_002F0DF8 (D_002F0DF8_.v)
extern struct { s32 v; char pad[12]; } D_00331F68_;
#define D_00331F68 (D_00331F68_.v)
extern struct { s32 v; char pad[12]; } D_00331F80_;
#define D_00331F80 (D_00331F80_.v)
extern s32 *G_88FC;
extern s32 *G_8900;

s32 *func(void) {
    s32 *temp_s1;
    s32 *temp_s0;

    if (G_88FC == NULL) {
        G_88FC = &D_00331F80;
        temp_s0 = G_88FC;
        M2C_FIELD(temp_s0, s32 *, 0) = 1;
        func_00121a58((s8 *)temp_s0 + 4, &D_002F0DF8);
        if (G_8900 == NULL) {
            G_8900 = &D_00331F68;
            temp_s1 = G_8900;
            M2C_FIELD(temp_s1, s32 *, 0) = func_00238910();
            M2C_FIELD(temp_s1, s32 *, 4) = func_002388e0();
            M2C_FIELD(temp_s1, s32 *, 8) = 0;
        }
        M2C_FIELD(temp_s0, s32 **, 0x14) = (s32 *) G_8900;
    }
    return G_88FC;
}
