extern int D_B400, D_B410, D_B420, D_B430;
#define D_F520 (*(volatile int*)0x1000F520)
#define D_F590 (*(volatile int*)0x1000F590)
void f1(void);
int f2(int, int, int);
void f3(int);
int func(char *a) {
    int t, u;
    f1();
    t = *(int *)0x1000F520;
    u = t | 0x10000;
    *(int *)0x1000F590 = u;
    D_B400 = 5;
    D_F590 = D_F520 & 0xFFFEFFFF;
    f2(u, t, 0x1000F590);
    D_B420 = 0; D_B410 = 0; D_B430 = 0;
    f3(*(int *)(a + 64));
    return 1;
}
