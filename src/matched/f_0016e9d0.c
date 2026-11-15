s32 func_001332c0(s32, void *);
void D_0016EFE0(void); void D_0016EFC0(void); void D_0016EA50(void);
struct T { void *a; void *b; void *c; s32 d; char pad[12]; void *e; };
extern struct T D_00306020;
extern s32 G_83B0;
void f(void) {
    D_00306020.a = D_0016EFE0;
    D_00306020.b = D_0016EFC0;
    D_00306020.c = D_0016EA50;
    D_00306020.d = 0;
    D_00306020.e = &D_00306020;
    func_001332c0(0, &D_00306020.e);
    G_83B0 = 0;
}
