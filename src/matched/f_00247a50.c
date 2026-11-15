extern char D_002D5E40[];
extern char D_002E58E0[];
extern char D_002E58F0[];
extern char D_002E5910[];
extern char D_002E5920[];
extern char D_00247BD0[];
extern char *D_00332FB0[];
extern int func_001d8470();
extern int func_001d97c0(int);
extern int func_001d99e0(int);
extern int func_001d9af0(int, int, int, int);
extern int func_001d9c00(int, int, int *, int);
extern void func_0020ff50(int, char *);
extern void func_0020ffd0(int, char *, int);
extern void func_00210040(int, int, int, int);
extern void func_00210060(int, char *);
extern void func_00210220(int, int);
extern int *func_002105a0(int);
int func(void) {
    int i;
    int  s0;
    int  t;
    int  r;
    int * p;
    int  y;
    int  x;
    for (i = 0; i < 32; i += 2) {
        D_00332FB0[i] = D_002D5E40;
        D_00332FB0[i + 1] = D_002D5E40;
    }
    s0 = func_001d8470();
    t = func_001d99e0(s0);
    p = func_002105a0(1);
    x = func_001d9c00(t, 0, p, 0);
    y = func_001d9af0(x, *p, 0, 0);
    func_0020ffd0(y, D_002E58E0, 0);
    func_0020ffd0(y, D_002E58F0, 1);
    func_0020ffd0(y, D_002E5910, 3);
    func_0020ffd0(y, D_002E5920, 4);
    func_00210040(y, 4, 69, 23);
    r = func_001d9af0(func_001d97c0(x), *p, 0, 0);
    func_00210220(r, 276);
    func_00210060(r, (char *)D_00332FB0);
    func_0020ff50(r, D_00247BD0);
    return s0;
}
