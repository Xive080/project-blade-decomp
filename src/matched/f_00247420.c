extern int func_001d8470();
extern int func_001d97c0(int);
extern int func_001d99e0(int);
extern int func_001d9af0(int, int, int, int);
extern int func_001d9c00(int, int, int*, int);
extern int func_0020ff50(int, void*);
extern int func_0020ffd0(int, void*, int);
extern int func_00210040(int, int, int, int);
extern int func_00210060(int, void*);
extern int func_00210220(int, int);
extern int *func_002105a0(int);
extern char D_00247580[];
extern char D_002D3F90[];
extern char D_002E58E0[];
extern char D_002E58F0[];
extern char D_002E5910[];
extern void *D_00332EC0[];

int func(void) {
    int a1;
    void **a2;
    int s0;
    int *v2;
    int v4, v3, v0, v5;
    v2 = func_002105a0(1);
    a2 = D_00332EC0;
    a1 = 0;
    do {
        a1 += 2;
        a2[0] = D_002D3F90;
        a2[1] = D_002D3F90;
        a2 += 2;
    } while (a1 < 32);
    s0 = func_001d99e0(func_001d8470());
    v3 = func_001d9c00(s0, 0, v2, 0);
    v4 = func_001d9af0(v3, *v2, 0, 0);
    func_0020ffd0(v4, D_002E58E0, 0);
    func_0020ffd0(v4, D_002E58F0, 1);
    func_0020ffd0(v4, D_002E5910, 3);
    func_00210040(v4, 3, 81, 27);
    v0 = func_001d97c0(v3);
    v5 = func_001d9af0(v0, *v2, 0, 0);
    func_00210220(v5, 243);
    func_00210060(v5, D_00332EC0);
    func_0020ff50(v5, D_00247580);
    return v0;
}
