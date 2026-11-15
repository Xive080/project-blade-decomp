extern volatile int D_2FA364;
extern int D_2FA640;
extern int D_2FA64C;
extern int D_2FA658;
extern int D_2FA664;
extern int D_2FA670;
extern float D_2FA6AC;
extern int D_33305C;
extern char D_248400[];
extern void f_25f720(int, int);
extern void f_131540(int, char *, int);
extern float f_1b5c30(void);
extern float f_1b5cc0(void);

int func(int *a) {
    int t;
    f_25f720(16, 0);
    D_2FA364 = 2;
    t = D_2FA364;
    D_2FA364 = t & ~16;
    f_131540(0, D_248400, t);
    a[4] = -2;
    a[5] = 0;
    a[6] = 0;
    switch (D_33305C) {
    case 3:
        D_2FA640 = 8;
        D_2FA64C = 97;
        D_2FA658 = -1;
        D_2FA6AC = f_1b5cc0();
        D_2FA670 = 1;
        break;
    case 4:
        D_2FA640 = 0;
        D_2FA64C = 8;
        D_2FA658 = 2;
        D_2FA6AC = f_1b5c30();
        D_2FA670 = 1;
        D_2FA664 = 1;
        break;
    }
    return 1;
}
