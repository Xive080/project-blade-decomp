extern int f1ca2d0(int, void*, int);
extern int f16f760(int, int, int);
extern void f1a9c60(int);
extern void f1214b8(char*, char*, int);
extern char f1236f8(char);
extern void f121a58(char*, char*);
extern int f1a9d20(int, char*);
extern char D2F0338[];
extern int D2FA570;
extern int D306094;

int func(int a0) {
    int t;
    int r;
    int q;
    int s3;
    int m;
    char sp50[16];
    char sp60[512];
    char sp260[128];
    char sp2e0[512];
    char sp4e0[128];
    char *p;
    if (f1ca2d0(a0, sp50, 16) != 16) return 0;
    t = f16f760(99, 99, 0);
    switch (D306094) { case 1: s3 = 0; break; case 2: s3 = 1; break; case 3: s3 = 2; break; case 4: s3 = 3; break; case 0: default: s3 = -1; break; }
    f1a9c60(s3);
    f1214b8(sp260, D2F0338, t);
    p = sp260;
    while (*p != 0) {
        *p = f1236f8(*p);
        if (*p == 47) *p = 92;
        p++;
    }
    f121a58(sp60, sp260);
    if (f1a9d20(s3, sp60) == 0) r = 0;
    if (r == 0) return 0;
    switch (D306094) { case 1: m = 0; break; case 2: m = 1; break; case 3: m = 2; break; case 4: m = 3; break; case 0: default: m = -1; break; }
    if (m == 1) {
        if (D2FA570 & 1) {
            t = f16f760(99, 99, 1);
            f1a9c60(3);
            f1214b8(sp4e0, D2F0338, t);
            p = sp4e0;
            while (*p != 0) {
                *p = f1236f8(*p);
                if (*p == 47) *p = 92;
                p++;
            }
            f121a58(sp2e0, sp4e0);
            if (f1a9d20(3, sp2e0) == 0) q = 0;
            r = q;
        }
    }
    return r;
}
