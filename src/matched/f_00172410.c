extern void func_00107b88(char *, char *, int);
extern void func_00107fe8(char *, int, void (*)(void), void *);
extern void func_00178e60(int);
extern void func_001b4230(char *, char *, char *, int, int, int);
extern int func_001c8760(int, int, int, int);
extern char D_00308180[];
extern void func_00172600(void);
extern void func_00172AF0(void);
extern void func_00172B20(void);
extern char D_0032A620[];
extern int *G_83D4;
extern char *G_8410;
struct Z { char pad[0x3a8b80]; int x; int y; };
struct Big { char pad[0x3a8ab8]; int ab8; char abc; char p1[0x3a8c30-0x3a8abd]; int c30; int p2; int c38; int p3; int c40; };
struct Tbl { char pad[0x130]; char *(*f)(int); };
int f(int *a) {
    char *p;
    unsigned i;
    unsigned j;
    int *r;
    char *q;
    a[0] = 0x1000;
    a[3] = (int)D_00308180;
    G_83D4 = a;
    func_00178e60(64);
    p = ((struct Tbl *)D_0032A620)->f(0x3a8c60);
    func_00178e60(16);
    func_00107b88(p + 0x3a8a10, p + 0x240000, 0x168800);
    func_00107fe8(p + 0x3a8a10, 1, func_00172600, 0);
    func_00107fe8(p + 0x3a8a10, 2, func_00172B20, 0);
    func_00107fe8(p + 0x3a8a10, 3, func_00172AF0, 0);
    func_001b4230(p + 0x3a8a58, p + 0x140000, p + 0x3a8800, 32, 0, 0);
    j = 0;
    q = p;
    for (; j < 2; j++) {
        r = (int *)(q + 0x3a8ae0);
        for (i = 0; i < 40; i++) {
            *r = func_001c8760(128, 64, 32, 4);
            r++;
        }
        ((struct Z *)q)->x = 0;
        ((struct Z *)q)->y = 0;
        q += 168;
    }
    ((struct Big *)p)->c30 = 0;
    ((struct Big *)p)->ab8 = 0;
    ((struct Big *)p)->c38 = 0;
    ((struct Big *)p)->c40 = 0;
    ((struct Big *)p)->abc = 0;
    G_8410 = p;
    return 1;
}
