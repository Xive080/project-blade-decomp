extern s32 func_00142aa0(s32, s32);
extern s32 func_00142ad0(void);
extern void func_001a63f0(s32, f32);
void func(s32 arg0) {
    s32 v;
    v = func_00142ad0();
    do {
        func_001a63f0(v, 0.0f);
        v = func_00142aa0(arg0, v);
    } while (v != 0);
}
