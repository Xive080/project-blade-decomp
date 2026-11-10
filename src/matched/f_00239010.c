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
s32 func_00238fd0(s32 *);                   /* extern */
s32 func_002390e0();                                /* extern */
extern struct { s32 v; char pad[12]; } D_00239290_;
#define D_00239290 (D_00239290_.v)
extern struct { s32 v; char pad[12]; } D_00331FA0_;
#define D_00331FA0 (D_00331FA0_.v)
extern struct { s32 v; char pad[12]; } D_00332150_;
#define D_00332150 (D_00332150_.v)
extern s32 *G_8924;
extern s32 *G_8928;
extern s32 *G_8930;
extern s32 G_8938;
extern s32 G_8940;

s32 *func(void) {
    s32 *temp_s0;
    s32 *temp_s1;

    if (G_8930 == NULL) {
        G_8930 = &D_00331FA0;
        temp_s0 = G_8930;
        if (G_8924 == NULL) {
            G_8924 = &D_00332150;
            func_00238fd0(G_8924);
        }
        M2C_FIELD(temp_s0, s32 **, 0) = (s32 *) G_8924;
        if (G_8928 == NULL) {
            G_8928 = &G_8938;
            temp_s1 = G_8928;
            M2C_FIELD(temp_s1, s32 *, 0) = 0x13;
            M2C_FIELD(temp_s1, s32 *, 4) = func_002390e0();
        }
        M2C_FIELD(temp_s0, s32 **, 4) = (s32 *) G_8928;
        M2C_FIELD(temp_s0, s32 *, 8) = 0;
        M2C_FIELD(temp_s0, s32 *, 0xC) = 0;
        M2C_FIELD(temp_s0, s32 **, 0x10) = &G_8940;
        M2C_FIELD(temp_s0, s32 *, 0x14) = 4;
        M2C_FIELD(temp_s0, s32 *, 0x18) = 0;
        M2C_FIELD(temp_s0, s32 *, 0x1C) = 0;
        M2C_FIELD(temp_s0, s32 **, 0x20) = &D_00239290;
    }
    return G_8930;
}
