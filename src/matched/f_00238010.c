extern char D_001305B0[], D_0021E830[], D_0021E950[], D_0021E9F0[], D_0021EA30[], D_002A07B0[], D_002E58E0[], D_002E58F0[], D_002E5910[], D_002E5920[];
extern char *D_00331ED0[];
int func_001d8470(); int func_001d97c0(int); int func_001d99e0(int);
int func_001d9af0(int,int,int,int); int func_001d9c00(int,int,int*,int);
void func_0021a520(int,void*,int); void func_0021a780(int,int,int,int);
void func_0021a8d0(int,int); void func_0021a910(int,void*,int); void func_0021a980(int,int,void*);
int *func_0021aa70(); void func_0012e5e0(int,void*,void*);
void func(void) {
    int i; char **p;
    int *r; int s0, s1, s2;
    p = D_00331ED0;
    for (i = 0; i < 32; i += 2) {
        p[0] = D_002A07B0;
        p[1] = D_002A07B0;
        p += 2;
    }
    s0 = func_001d99e0(func_001d8470());
    r = func_0021aa70();
    s2 = func_001d9c00(s0, 0, r, 0);
    s1 = func_001d9af0(s2, *r, 0, 0);
    func_0021a520(s1, D_002E58E0, 0);
    func_0021a520(s1, D_002E58F0, 1);
    func_0021a520(s1, D_002E5910, 3);
    func_0021a520(s1, D_002E5920, 4);
    func_0021a780(s1, 4, 69, 0);
    s0 = func_001d97c0(s2);
    s1 = func_001d9af0(s0, *r, 0, 0);
    func_0021a8d0(s1, 276);
    func_0021a910(s1, D_00331ED0, 32);
    func_0021a980(s1, 2, 0);
    func_0021a980(s1, 3, D_0021E950);
    func_0021a980(s1, 4, D_0021E9F0);
    func_0021a980(s1, 5, D_0021EA30);
    func_0012e5e0(s0, D_001305B0, D_0021E830);
}
