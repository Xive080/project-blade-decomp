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
s32 func_00239010();                                /* extern */
s32 func_00239120();                                /* extern */
s32 func_00239190();                                /* extern */
extern struct { s32 v; char pad[12]; } D_002F0E08_;
#define D_002F0E08 (D_002F0E08_.v)
extern struct { s32 v; char pad[12]; } D_00332208_;
#define D_00332208 (D_00332208_.v)
extern struct { s32 v; char pad[12]; } D_00332220_;
#define D_00332220 (D_00332220_.v)
extern s32 *G_8918;
extern s32 *G_891C;

s32 *func(void) {
    s32 *temp_s1;
    s32 *temp_s0;

    if (G_8918 == NULL) {
        G_8918 = &D_00332220;
        temp_s0 = G_8918;
        M2C_FIELD(temp_s0, s32 *, 0) = 2;
        func_00121a58((s8 *)temp_s0 + 4, &D_002F0E08);
        if (G_891C == NULL) {
            G_891C = &D_00332208;
            temp_s1 = G_891C;
            M2C_FIELD(temp_s1, s32 *, 0) = func_00239190();
            M2C_FIELD(temp_s1, s32 *, 4) = func_00239120();
            M2C_FIELD(temp_s1, s32 *, 8) = func_00239010();
        }
        M2C_FIELD(temp_s0, s32 **, 0x14) = (s32 *) G_891C;
    }
    return G_8918;
}
