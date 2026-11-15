extern int G_8328;
extern int G_851C;
extern char D_00315C00[];
extern char D_00315C20[];
extern int f13b550(int, int);
extern int f16ea40(void);
extern void f1956b0(char *, int, int);
extern void f1a3ac0(char *, int, int);
extern int f1a3fe0(int, int, int);
extern void f24b540(int, void *, void *);

void func(char *a, int b, int c) {
    int pad[2]; int t[2];
    int s3;
    switch (b) {
    case 0:
        *(int *)(a + 8) = f13b550(G_8328, 0x77);
        *(int *)(a + 12) = 0;
        *(char **)(a + 20) = D_00315C00;
        *(int *)(a + 16) = 2;
        *(int *)(a + 24) = 0;
        *(int *)(a + 4) = 0;
        f1956b0(D_00315C00, 0x7A, 4);
        f1956b0(D_00315C20, 0x79, 5);
        *(int *)(a + 4) = *(int *)(a + 4) | 9;
        break;
    case 3:
        s3 = f16ea40() + 1;
        G_851C = 0;
        t[0] = f1a3fe0(f13b550(G_8328, 0x78), s3, 0);
        t[1] = 1;
        f24b540(0x12, 0, t);
        break;
    }
    f1a3ac0(a, b, c);
}
