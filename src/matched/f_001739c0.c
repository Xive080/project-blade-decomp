struct S { char pad[2208]; float v; };
extern struct S *D70003FDC;
extern int G8438, G8444;
extern void func_00131540(int, int);
extern void func_001744d0(int, int);
extern void func_001a7240(int, float);
extern void func_001a9a40(int, int);
int f(void) {
    func_00131540(0, 0);
    if (G8438 == 0) {
        func_001a9a40(-1, 0);
        func_001a7240(0, (*(struct S **)0x70003FDC)->v);
        func_001a7240(1, (*(struct S **)0x70003FDC)->v);
    }
    func_001744d0(0, 0);
    func_001744d0(1, 0);
    G8444 = 0;
    return 1;
}
