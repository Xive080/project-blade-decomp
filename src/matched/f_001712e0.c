void func_001a4c60(int);
void func_0024af90(void);
void func_00131540(int, void *);
void func_001a9a40(int, int);
void func_00132c50(unsigned char);
void func_00131d00(void);
void F_001713c0(void);
extern int G_8434;
extern struct { int a; int b; } G_80;
extern int D_002FA364[];
extern unsigned char D_002FA61F[];
extern float D_002FA6D8[];
extern int *D_70003FD4[];
extern float D_70003FB0[];

int func(void) {
    if (G_8434 != 0) {
        G_8434 = 0;
        func_001a4c60(0);
    } else {
        func_001a4c60(1);
    }
    func_0024af90();
    func_00131540(0, F_001713c0);
    D_002FA364[0] = 4;
    D_002FA364[0] |= 0x10;
    func_001a9a40(-1, 0);
    if (*(int**)0x70003FD4 == 0 || !((*(int**)0x70003FD4)[1] & 0x10)) {
        func_00132c50(D_002FA61F[0]);
    }
    {float x = *(float *)0x70003FB0; x = 1.0f + x; G_80.a = 0; G_80.b = 0; D_002FA6D8[0] = x;}
    func_00131d00();
    return 1;
}
