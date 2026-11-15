extern volatile int D_002FA364[];
extern volatile int D_002FA640[];
extern volatile int D_002FA64C[];
extern volatile int D_002FA658[];
extern volatile int D_002FA664[];
extern volatile int D_002FA670[];
extern int G_83C8;
extern int G_83CC;
extern char D_00171840[];
extern char D_002EFB18[];
extern void func_00131540(int, char *, int);
extern int func_00131fd0(int);
extern int func_00170070(char *);
extern void func_001a9a40(int, int);
extern void func_0025f720(int, int);
int func(void) {
    int t;
    D_002FA364[0] = 2;
    t = D_002FA364[0];
    D_002FA364[0] = t & ~0x10;
    func_00131540(0, D_00171840, t);
    func_0025f720(3, func_00170070(D_002EFB18));
    func_001a9a40(-2, 1);
    if (D_002FA640[0] != 8) {
        if ((D_002FA64C[0] = 8) && func_00131fd0(0) == 0) {
            D_002FA640[0] = 8;
            D_002FA64C[0] = 8;
            D_002FA658[0] = 0;
            D_002FA670[0] = 1;
            D_002FA664[0] = 1;
        }
    }
    G_83CC = 0;
    return G_83C8 = 1;
}
