extern int G_8328;
extern char D_160C0[];
extern char D_160E0[];
extern int f13b550(int, int);
extern void f195510(char *, int, int);
extern void f1a3ac0(char *, int, int);
struct S { int p0; int fl; int a; int b; int c; char *d; int e; };
void f(struct S *o, int a1, int a2) {
    switch (a1) {
    case 0:
        o->a = f13b550(G_8328, 100);
        o->b = 0;
        o->d = D_160C0;
        o->c = 2;
        o->e = 0;
        o->fl = 0;
        f195510(D_160C0, 98, 0);
        f195510(D_160E0, 99, 1);
        o->fl = o->fl | 0x10;
        break;
    default:
        break;
    }
    f1a3ac0((char *)o, a1, a2);
}
