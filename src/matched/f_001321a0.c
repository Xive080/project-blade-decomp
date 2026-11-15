extern int func_001a7490(int);
extern int func_001a74e0(int);
extern int ta[];
extern int tb[];
float func(int i) {
    if (tb[i] != 0) return -1.0f;
    if (ta[i] == -1) return -1.0f;
    if (func_001a74e0(ta[i]) != 4) return -1.0f;
    return (float)(unsigned)func_001a7490(ta[i]) / 1000.0f;
}
