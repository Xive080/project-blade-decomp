extern s32 func_00247040(s32 a);
extern s32 func_00246e40(s32, s32);
extern void func_00242e00(s32, s32);
s32 func(s32 a, s32 b) {
 if (func_00247040(a) && func_00246e40(a, b)) { func_00242e00(a, b); return 1; }
 return 0;
}
