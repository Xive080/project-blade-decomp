extern char D_001305B0[], D_001FB0D0[], D_0021E830[], D_0021E950[], D_0021EA30[], D_0029C680[], D_002E58E0[], D_002E58F0[], D_002E5910[], D_002E5920[], D_002E5930[];
extern void *D_00331D20[];
extern int func_001d8470();
extern int func_001d99e0(int);
extern int *func_0021aa70();
extern int func_001d9c00(int, int, int*, int);
extern int func_001d9af0(int, int, int, int);
extern void func_0021a520(int, void*, int);
extern void func_0021a780(int, int, int, int);
extern int func_001d97c0(int);
extern void func_0021a8d0(int, int);
extern void func_0021a910(int, void*, int);
extern void func_0021a980(int, int, void*);
extern void func_0012e5e0(int, void*, void*);
void func(void) {
    int i;
    int s0, *p, s1, s2;
    for (i = 0; i < 32; i += 2) {
        D_00331D20[i] = D_0029C680;
        D_00331D20[i + 1] = D_0029C680;
    }
    s0 = func_001d99e0(func_001d8470());
    p = func_0021aa70();
    s2 = func_001d9c00(s0, 0, p, 0);
    s1 = func_001d9af0(s2, *p, 0, 0);
    func_0021a520(s1, D_002E58E0, 0);
    func_0021a520(s1, D_002E58F0, 1);
    func_0021a520(s1, D_002E5910, 3);
    func_0021a520(s1, D_002E5920, 4);
    func_0021a520(s1, D_002E5930, 5);
    func_0021a780(s1, 5, 44, 14);
    s0 = func_001d97c0(s2);
    s1 = func_001d9af0(s0, *p, 0, 0);
    func_0021a8d0(s1, 220);
    func_0021a910(s1, D_00331D20, 32);
    func_0021a980(s1, 2, 0);
    func_0021a980(s1, 3, D_0021E950);
    func_0021a980(s1, 4, D_001FB0D0);
    func_0021a980(s1, 5, D_0021EA30);
    func_0012e5e0(s0, D_001305B0, D_0021E830);
}
