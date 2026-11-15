extern s32 func_00142910();
extern s32 func_0016bd40(s32);
extern s32 func_001feeb0(s32);
extern s32 func_001c3490(s32);
extern s32 func_00142950(s32);
extern s32 func_00142940(s32);
extern void func_00142740(s32, s32, s32);
extern void func_001c3d30(s32);
s32 func(s32 a) {
    s32 s0, s1, s2, s3;
    if (func_00142910() == 0) {
        if (func_0016bd40(a) < 30000 && func_001feeb0(a) == -1) {
            s0 = func_001c3490(a);
            s1 = func_00142950(a);
            s2 = a;
            if (s1 != 0) {
                do {
                    s3 = func_00142940(s1);
                    func_00142740(s0, s1, s2);
                    s2 = s1;
                    s1 = s3;
                } while (s3 != 0);
            }
            s0 = func_00142940(a);
            func_001c3d30(a);
            return s0;
        }
    }
    s0 = func_00142950(a);
    if (s0 != 0) {
        do {
            s0 = func(s0);
        } while (s0 != 0);
    }
    return func_00142940(a);
}
