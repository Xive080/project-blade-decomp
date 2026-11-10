extern s32 func_0016b090(void);
extern void func_002605d0(void);

extern s32 g_unk_00187008;

s32 func(void) {
    if (g_unk_00187008 == 0 || func_0016b090() != 0) {
        func_002605d0();
    }
    return 1;
}
