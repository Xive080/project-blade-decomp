#pragma mpwc_relax on
void func_0012e5e0(int, void *, void *);
int func_001d8470();
int func_001d97c0(int);
int func_001d99e0(int);
int func_001d9af0(int, int, int, int);
int func_001d9c00(int, int, int *, int);
void func_0021a520(int, void *, int);
void func_0021a780(int, int, int, int);
void func_0021a8d0(int, int);
void func_0021a910(int, void *, int);
void func_0021a980(int, int, void *);
int *func_0021aa70();
extern char D_0021E830[], D_0021E950[], D_0021E9F0[], D_00222A60[], D_00222C90[], D_0029A390[], D_002E58E0[];
extern char D_0029A390b[];
struct P{char*x;char*y;};
extern struct P D_00330810[];

void func(void) {
    int i;
    struct P *p;
    int *t;
    int a, c, b, d, e;
    p = D_00330810;
    i = 0;
    do {
        i += 2;
        p->x = D_0029A390;
        p->y = D_0029A390b;
        p++;
    } while (i < 32);
    a = func_001d99e0(func_001d8470());
    t = func_0021aa70();
    b = func_001d9c00(a, 0, t, 0);
    c = func_001d9af0(b, *t, 0, 0);
    func_0021a520(c, D_002E58E0, 0);
    func_0021a780(c, 1, 240, 0);
    d = func_001d97c0(b);
    e = func_001d9af0(d, *t, 0, 0);
    func_0021a8d0(e, 488);
    func_0021a910(e, D_00330810, 32);
    func_0021a980(e, 2, 0);
    func_0021a980(e, 3, D_0021E950);
    func_0021a980(e, 4, D_0021E9F0);
    func_0021a980(e, 5, D_00222C90);
    func_0012e5e0(d, D_00222A60, D_0021E830);
}
