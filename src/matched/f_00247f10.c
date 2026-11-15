extern char *func_001625a0(void);
extern int func_001c3b70(int);
extern void func_001a8270(int, int, int);
extern void func_001a9b60(void);
int f(void) {
    int i, n, p, r;
    n = (*(int*)0x70003FC0 & 2) ? 2 : 1;
    for (i = 0; i < n; i++) {
        if (*(int*)0x70003FC8 == 6 || *(int*)0x70003FC8 == 8) p = *(int*)0x70003FE0 + 896; else p = *(int*)0x70003FE0 + i * 448;
        r = (*(int(**)(int))(func_001625a0() + 24))(p);
        if (r == 0) return 0;
        r = func_001c3b70(r);
        if (r == 0) return 0;
        func_001a8270(i, r, 0);
    }
    func_001a9b60();
    return 1;
}
