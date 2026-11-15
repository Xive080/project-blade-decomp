struct O { int pad0; int f4; int f8; int fc; int f10; void *f14; int f18; };
extern s32 func_0013b550(s32, s32);
extern void func_00195600(void *, s32, s32, s32);
extern void func_001956b0(void *, s32, s32);
extern void func_00195a30(void *, s32, s32);
extern void func_001a3ac0(void *, s32, s32);
extern s32 func_001a3fe0(s32, s32, s32);
extern s32 func_001b5470(void);
extern void func_001b5480(s32);
extern void func_0024b540(s32, s32, s32 *);
extern s32 G_8328;
extern s32 G_851C;
extern s32 D_002FA610[];
extern unsigned char D_002FA61F[];
extern char D_00315CA0[];
extern char D_00315CC0[];
void func(struct O *a, s32 b, s32 c) {
    s32 t;
    struct { s32 x, y; } l;
    switch (b) {
    case 0:
        a->f8 = func_0013b550(G_8328, 0x81);
        a->fc = 0;
        a->f14 = D_00315CA0;
        a->f10 = 2;
        a->f18 = 0;
        a->f4 = 0;
        func_00195600(D_00315CA0, 0x74, 0x30, 0);
        func_00195a30(D_00315CC0, 0x75, 0x2B);
        a->f4 = a->f4 | 9;
        break;
    case 2:
        if (D_002FA610[0] == 3 && D_002FA61F[0] >= 6) {
            func_001956b0(D_00315CC0, 0x75, 1);
        } else {
            func_00195a30(D_00315CC0, 0x75, 0x2B);
        }
        break;
    case 3:
        t = func_001b5470() + 1;
        G_851C = 0;
        l.x = func_001a3fe0(func_0013b550(G_8328, 0x73), t, 0);
        l.y = 1;
        func_0024b540(0x12, 0, (s32*)&l);
        break;
    case 9:
        if (a->f18 == 1) func_001b5480(-1);
        break;
    }
    func_001a3ac0(a, b, c);
}
