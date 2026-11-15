typedef unsigned __int128 Q;
typedef struct { Q q; } V;

extern int func_001d8470();
extern int func_001d97c0(int);
extern int func_001d99e0(int);
extern int func_001d9af0(int, int, int, int);
extern int func_001d9c00(int, int, int *, int);
extern void func_0020ff50(int, void *);
extern void func_0020ffd0(int, V *, int);
extern void func_00210040(int, int, int, int);
extern void func_00210060(int, void *);
extern void func_00210220(int, int);
extern int *func_002105a0(int);
extern char D_0028C8E0[], D_002994B0[], D_00220D70[];
extern V D_002E5930, D_002E5940, D_002E5950, D_002E5960;
extern V D_003306E0, D_003306F0, D_00330700, D_00330710;
extern void *D_00330720[16];
extern int G_8888;
int f(void) {
    int i;
    int *s0;
    int s1, s2, r, t;
    for (i = 0; i < 16; i += 2) {
        D_00330720[i] = D_0028C8E0;
        D_00330720[i + 1] = D_0028C8E0;
    }
    D_00330720[0] = D_002994B0;
    t = func_001d99e0(func_001d8470());
    s0 = func_002105a0(1);
    s2 = func_001d9c00(t, 0, s0, 0);
    s1 = func_001d9af0(s2, *s0, 0, 0);
    D_00330710 = D_002E5930;
    D_00330700 = D_002E5940;
    D_003306F0 = D_002E5950;
    D_003306E0 = D_002E5960;
    func_0020ffd0(s1, &D_00330710, 5);
    func_0020ffd0(s1, &D_00330700, 6);
    func_0020ffd0(s1, &D_003306F0, 7);
    func_0020ffd0(s1, &D_003306E0, 8);
    func_00210040(s1, 4, 14, 3);
    r = func_001d97c0(s2);
    s1 = func_001d9af0(r, *s0, 0, 0);
    func_00210220(s1, 476);
    func_00210060(s1, D_00330720);
    func_0020ff50(s1, D_00220D70);
    G_8888 = r;
    return r;
}
