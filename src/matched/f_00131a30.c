s32 func_0016fb00(s32);
s32 func_00170070(void *);
void func_00170950();
void func_001709e0(s32, s32);
s32 func_001d9af0(s32, s32, s32, s32);
s32 func_00202b70(s32, s32);
s32 func_00202ca0(s32);
void func_00210050(s32, void *);
s32 *func_002105a0(s32);
void func_0023c4b0();
void func_0023c570(s32, s32);
void func_0023c6f0(f32, s32, s32, s32, s32);
extern char D_00130520[];
extern char D_002EC080[];
extern s32 D_002FA430;
extern s32 D_00306094;

void func(s8 *arg0) {
    s32 temp_s0;
    s32 var_s1;
    s32 temp_s2;
    s32 temp_s4;
    s32 temp_v0;

    temp_s2 = D_00306094;
    func_0023c4b0();
    temp_s0 = *(s32 *)(arg0 + 0x18);
    for (var_s1 = 0; var_s1 < func_00202ca0(temp_s0); var_s1++) {
        temp_v0 = func_00202b70(temp_s0, var_s1);
        temp_s4 = func_0016fb00(temp_v0);
        func_00170950();
        func_001709e0(temp_s4, 0);
        func_0023c570(temp_v0, 2);
        func_0023c6f0(0.8f, temp_v0, func_00170070(D_002EC080), D_002FA430, 0);
        func_00170950();
        func_001709e0(temp_s2, 0);
        temp_s4 = *func_002105a0(1);
        func_00210050(func_001d9af0(*(s32 *)(arg0 + 0x6c), temp_s4, 0, 0), D_00130520);
    }
}
