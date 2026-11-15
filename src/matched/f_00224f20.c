extern char D329770[];
extern char D306F84[];
extern int func_001b9690(void*, int, int, int, void*, int);
extern void func_00243290(int*, int, int, int);
extern void func_00224ff0(void);
int f(int *p, int a1, int a2, int a3) {
    int r = func_001b9690(D329770, a1 + 664, a2, a3, func_00224ff0, a1);
    func_00243290(p, a1, a2, a3);
    if (a2 == 1) {
        if (p[3] == 15) {
            int *q = (int*)(D306F84 + *(int*)a1 * 1456);
            *q |= 4;
        }
    }
    return r;
}
