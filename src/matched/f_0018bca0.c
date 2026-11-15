extern void func_00170690(int, volatile void *, int, int);
extern char D_0018BDD0[], D_0018BF50[], D_0018C610[], D_0018CA90[], D_0018CCA0[], D_0018CD50[], D_0018E410[], D_0018E960[], D_0018FAB0[], D_0018FBC0[], D_001900F0[], D_00190190[];
extern void * volatile D_003127A0, * volatile D_003127A8, * volatile D_003127AC, * volatile D_003127B8, * volatile D_003127F0, * volatile D_003127F4, * volatile D_003127F8, * volatile D_003127FC, * volatile D_00312800, * volatile D_00312804, * volatile D_00312808, * volatile D_0031280C, * volatile D_00312810;
extern volatile int D_003127A4, D_003127B0;
extern char D_003127D0[];
int f(void) {
    D_003127F0 = D_00190190;
    D_003127F4 = D_001900F0;
    D_003127F8 = D_0018FBC0;
    D_003127FC = D_0018CD50;
    D_00312800 = D_0018FAB0;
    D_00312804 = D_0018E960;
    D_00312808 = D_0018E410;
    D_0031280C = D_0018CCA0;
    D_00312810 = D_0018CA90;
    D_003127A0 = D_0018BF50;
    D_003127A4 = 0;
    D_003127A8 = D_0018BDD0;
    D_003127AC = D_0018C610;
    func_00170690(0x200000, &D_003127F0, 0x610, 0x5C);
    func_00170690(0x8000, &D_003127A0, 0xCC, 0);
    D_003127B0 = 1;
    D_003127B8 = D_003127D0;
    return 1;
}
