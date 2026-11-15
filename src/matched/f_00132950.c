extern f32 func_001b5c80(s32);
extern void func_001a76f0(s32, f32);
extern s32 A[];
extern s32 B[];
extern s32 C[];
extern f32 E[];
void func(f32 f) {
    f32 v;
    if (A[0] != -1) {
        switch (B[0]) { case 0: case 1: case 2: v = func_001b5c80(A[0]); break; default: v = 1.0f; }
        f = f * v;
        func_001a76f0(A[0], f);
        C[0] = 0xBF800000;
    } else {
        E[0] = f;
    }
}
