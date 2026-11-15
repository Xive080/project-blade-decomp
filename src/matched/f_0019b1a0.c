extern int f13b550(int, int);
extern void f1956b0(char *, int, int);
extern void f1a3ac0(int *, int, int);
extern int f1a3fe0(int, int, int);
extern int f1b6f40(void);
extern void f24b540(int, int, int *);
extern int G8328;
extern int G851C;
extern char D15C40[];
extern char D15C60[];
void func(int *p, int k, int z) {
    struct { int a, b; } sp;
    int t;
    switch (k) {
    case 0:
        p[2] = f13b550(G8328, 111);
        p[3] = 0;
        p[5] = (int)D15C40;
        p[4] = 2;
        p[6] = 0;
        p[1] = 0;
        f1956b0(D15C40, 122, 4);
        f1956b0(D15C60, 121, 5);
        p[1] = p[1] | 9;
        break;
    case 3:
        t = f1b6f40();
        G851C = 0;
        sp.a = f1a3fe0(f13b550(G8328, 118), t, 0);
        sp.b = 1;
        f24b540(18, 0, (int *)&sp);
        break;
    }
    f1a3ac0(p, k, z);
}
