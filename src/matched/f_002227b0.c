#pragma mpwc_relax on
void func_00131b70(s32);
s32 *func_00170070(void *);
void func_001c2170(s32);
void func_00221210(s32);
s32 func_002212a0(s32, s32);
extern char D_002F0A90[];
extern s32 D_002FA360;
extern s32 D_00330760[][4];

s32 func(void) {
    u16 i, j;
    s32 t = *func_00170070(D_002F0A90);
    func_00131b70(D_002FA360);
    for (i = 0; i < 2; i++) {
        for (j = 0; j < 3; j++) {
            D_00330760[i][j] = func_002212a0(0x76, t);
            func_00221210(D_00330760[i][j]);
        }
    }
    func_001c2170(D_002FA360);
    return 1;
}
