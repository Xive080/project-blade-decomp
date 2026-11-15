typedef unsigned __int128 Q;
extern int func_0013b550(int, int);
extern void func_001956b0(void *, int, int);
extern void func_00195a30(void *, int, int);
extern void func_001a3ac0(void *, int, int);
extern int func_001b4ee0();
extern int func_001b5470();
extern void func_0024b540(int, int, void *);
struct T { Q q[7]; };
struct L { int a[5]; int f5; int b[6]; int f12; int c[6]; int f19; int d[8]; };
extern struct L D_002E2530;
extern unsigned char D_002FA61F[];
extern char D_00315F40[];
extern int G_8328;
extern long long G_84D8;
extern int G_851C;
struct U { int n; void *p; };

void func(int *a, int b, int c) {
    switch (b) {
    case 0:
        a[2] = func_0013b550(G_8328, 0);
        a[3] = 0;
        a[5] = (int)D_00315F40;
        a[4] = 1;
        a[6] = 0;
        a[1] = 0;
        a[1] = a[1] | 0xa;
        break;
    case 2:
        if (func_001b4ee0() < 7) {
            func_00195a30(D_00315F40, 306, 46);
        } else if (func_001b5470() >= 0) {
            func_00195a30(D_00315F40, 306, 48);
        } else if (D_002FA61F[0] < 6) {
            func_00195a30(D_00315F40, 306, 43);
        } else {
            func_001956b0(D_00315F40, 306, 1);
        }
        break;
    case 3: {
        struct L t;
        struct U u;
        t = D_002E2530;
        G_851C = 0;
        t.f5 = func_0013b550(G_8328, 306);
        t.f12 = func_0013b550(G_8328, 243);
        t.f19 = func_0013b550(G_8328, 244);
        *(long long *)&u = G_84D8;
        u.n = 4;
        u.p = &t;
        func_0024b540(10, 0, &u);
        break; }
    }
    func_001a3ac0(a, b, c);
}
