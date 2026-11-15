#define D_F520 (*(volatile int*)0x1000F520)
#define D_F590 (*(volatile int*)0x1000F590)
#define D_2010 (*(volatile int*)0x10002010)
#define D_2020 (*(volatile int*)0x10002020)
void f1(int);
void f2(void);
void f3(void);
void f4(int);
int func(int *a) {
    int t;
    f1(a[16]);
    a[17] = 0;
    f2();
    t = *(int *)0x1000F520;
    *(int *)0x1000F590 = t | 0x10000;
    (*(int*)0x1000B400) = 5;
    D_F590 = D_F520 & 0xFFFEFFFF;
    f3();
    a[7] = (*(int*)0x1000B410);
    a[8] = (*(int*)0x1000B430);
    a[9] = (*(int*)0x1000B420);
    a[10] = (*(int*)0x1000B400);
    while (*(volatile int *)0x10002010 & 0xf0) ;
    f2();
    D_F590 = D_F520 | 0x10000;
    *(int *)0x1000B000 = 0;
    D_F590 = D_F520 & 0xFFFEFFFF;
    f3();
    a[11] = (*(int*)0x1000B010);
    a[12] = (*(int*)0x1000B020);
    a[13] = (*(int*)0x1000B000);
    a[14] = D_2020;
    a[15] = D_2010;
    f4(a[16]);
    return 1;
}
