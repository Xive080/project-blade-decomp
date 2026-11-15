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
s32 func_0023a110();                                /* extern */
s32 func_0023a1b0();                                /* extern */
s32 func_0023a220();                                /* extern */
extern struct { s32 v; char pad[12]; } D_002F0E20_;
#define D_002F0E20 (D_002F0E20_.v)
extern struct { s32 v; char pad[12]; } D_003329C8_;
#define D_003329C8 (D_003329C8_.v)
extern struct { s32 v; char pad[12]; } D_003329E0_;
#define D_003329E0 (D_003329E0_.v)
extern s32 *G_8970;
extern s32 *G_8974;

s32 *func(void) {
    s32 *temp_s1;
    s32 *temp_s0;

    if (G_8970 == NULL) {
        G_8970 = &D_003329E0;
        temp_s0 = G_8970;
        M2C_FIELD(temp_s0, s32 *, 0) = 3;
        func_00121a58((s8 *)temp_s0 + 4, &D_002F0E20);
        if (G_8974 == NULL) {
            G_8974 = &D_003329C8;
            temp_s1 = G_8974;
            M2C_FIELD(temp_s1, s32 *, 0) = func_0023a220();
            M2C_FIELD(temp_s1, s32 *, 4) = func_0023a1b0();
            M2C_FIELD(temp_s1, s32 *, 8) = func_0023a110();
        }
        M2C_FIELD(temp_s0, s32 **, 0x14) = (s32 *) G_8974;
    }
    return G_8970;
}
