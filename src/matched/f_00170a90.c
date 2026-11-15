extern void func_00128f90(int);
extern void func_00131550(float);
extern int func_0016d610(char *, float);
extern void func_0016f2e0(int);
extern void func_001a7190(char *);
extern char *func_001c3b70(int);
extern void func_002226c0(void);
extern void func_00249270(void);
extern char D_00305D04[];
extern char D_003126EC[];
extern char D_003174A0[];
struct V { float x, y, z; };
struct O { char pad[0x68]; int h; };
int func(void)
{
    char *p = *(char **)0x70003FDC;
    int r;
    char *v;
    func_0016f2e0(0x8bf0000);
    if (*(int *)0x70003FC0 & 1) {
        int h = (*(struct O **)0x70003FE0)->h;
        if (h != 0) {
            v = func_001c3b70(h);
            *(struct V *)D_00305D04 = *(struct V *)(v + 0x30);
            *(struct V *)D_003126EC = *(struct V *)(v + 0x30);
        }
    }
    func_0016f2e0(0x8400);
    if (*(int *)(p + 0x344) != 0) {
        r = func_0016d610(p, *(float *)0x70003FA8);
    }
    func_00128f90(*(int *)0x70003FD8);
    func_001a7190(D_003174A0);
    func_00131550(*(float *)0x70003FA8);
    func_002226c0();
    func_00249270();
    return r;
}
