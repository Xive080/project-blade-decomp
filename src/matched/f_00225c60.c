extern s32 func_00225f10(s32 a);
extern s32 func_00225cd0(s32, s32);
extern void func_00242e00(s32, s32);
s32 func(s32 a, s32 b) {
 if (func_00225f10(a) && func_00225cd0(a, b)) { func_00242e00(a, b); return 1; }
 return 0;
}
