extern int G_8328;
extern int func_0013b550(int, int);
extern void func_00195780(void *, int, int);
extern void func_001a3ac0(void *, int, int);
extern char D_00315880[];
extern char D_003158A0[];
extern char D_003158C0[];
extern char D_003158E0[];
struct S { int p0; int f4; int f8; int fc; int f10; void *f14; int f18; };
void func(struct S *a, int b, int c) {
    switch (b) {
    case 0:
        a->f8 = func_0013b550(G_8328, 175);
        a->fc = func_0013b550(G_8328, 176);
        a->f14 = D_00315880;
        a->f10 = 4;
        a->f18 = 0;
        a->f4 = 0;
        func_00195780(D_00315880, 177, 1);
        func_00195780(D_003158A0, 178, 2);
        func_00195780(D_003158C0, 179, 4);
        func_00195780(D_003158E0, 180, 8);
        a->f4 = a->f4 | 0x10;
        break;
    }
    func_001a3ac0(a, b, c);
}
