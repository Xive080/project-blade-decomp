extern void func_0012e710(int);
extern int func_00142aa0(int, int);
extern int func_00142ad0(int);
extern int func_00170000(int);
extern void func_001b8e40(int, void *);
extern int func_002018c0(int);
extern int func_00201b60(void);
extern void func_00201cc0(int, int);
extern void func_00209ff0(int, int);
extern int func_0022b470(int);
extern void func_002476c0(int, struct B *);
extern void func_00247de0(int, struct C *);
extern int D_002FA460;
extern int D_002FA464;
struct B { int x[6]; };
struct C { int x[11]; };
struct S {
    char pad0[0x70];
    char a70[0xEB10 - 0x70];
    int v10;
    int v14;
    struct B b18;
    struct C b30;
    int v5c;
    int v60;
    int v64;
    int v68;
};
void func(struct S *p, int arg1) {
    int s0;
    int t;
    unsigned i;
    t = func_00170000(arg1);
    s0 = func_00142ad0(t);
    i = 0;
    do {
        if (i == 0) {
            p->v5c = func_00201b60();
            p->v60 = func_002018c0(s0);
            func_00201cc0(p->v5c, p->v60);
            func_0012e710(p->v60);
            func_001b8e40(p->v5c, p->a70);
        } else if (i == 1) {
            p->v64 = func_002018c0(s0);
            func_00209ff0(p->v64, D_002FA460);
            func_002476c0(p->v64, &p->b18);
        } else if (i == 2) {
            p->v68 = func_002018c0(s0);
            func_00209ff0(p->v68, D_002FA464);
            func_00247de0(p->v68, &p->b30);
        }
        s0 = func_00142aa0(t, s0);
        i++;
    } while (s0 != 0);
    p->v10 = func_0022b470(0);
    p->v14 = func_0022b470(0);
}
