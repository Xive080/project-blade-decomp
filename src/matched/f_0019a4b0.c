extern int func_0013b550(int, int);
extern void func_00195670(void *, int);
extern void func_00195a30(void *, int, int);
extern int func_001a3ac0(char *, int, int);
extern int func_001a3fe0(int, int, int);
extern void func_0024b540(int, void *, void *);
extern void func_00132a00(void);
extern int G_8328;
extern int G_851C;
extern char D_00315A00[];
extern char D_00315A20[];
struct O { int p0; int fl; int a; int b; int c; int *d; int e; };
void func(struct O *o, int k, int c)
{
    int s[2];
    switch (k) {
    case 0:
        o->a = func_0013b550(G_8328, 247);
        o->b = 0;
        o->d = (int*)D_00315A00;
        o->c = 2;
        o->e = 0;
        o->fl = 0;
        func_00195670(D_00315A00, 191);
        func_00195a30(D_00315A20, 195, 61);
        o->fl |= 1;
        break;
    case 3:
        G_851C = 0;
        s[0] = func_001a3fe0(func_0013b550(G_8328, 248), 0, 0);
        s[1] = 1;
        func_0024b540(18, 0, &s[0]);
        func_00132a00();
        break;
    default:
        break;
    }
    func_001a3ac0((char*)o, k, c);
}
