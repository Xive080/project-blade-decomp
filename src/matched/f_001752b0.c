void func_00177150(int, int, void *, int, int);
void func_001a5420(char *);
void func_0011ec80(void *, int, int);
extern int D_002FA700[];
extern char D_00306C00[];
extern struct G { int a, b, c, d; int e0[13]; int e1[13]; } G_;

int func(void) {
    func_00177150(2, 12, D_002FA700, 896, 0);
    func_001a5420(D_00306C00);
    G_.a = 0;
    G_.c = 0;
    G_.d = 0;
    G_.b = 0;
    func_0011ec80(G_.e0, 0, 28);
    G_.e0[1] = 0x3F800000;
    G_.e0[7] = 0;
    G_.e0[8] = 0;
    G_.e0[9] = 0;
    G_.e0[11] = 0;
    G_.e0[12] = 0;
    G_.e0[10] = 0;
    func_0011ec80(G_.e1, 0, 28);
    G_.e1[1] = 0x3F800000;
    G_.e1[7] = 0;
    G_.e1[8] = 0;
    return 1;
}
