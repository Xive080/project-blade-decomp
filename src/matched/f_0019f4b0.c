extern int G_8328;
extern char D_316040[];
extern char D_316060[];
extern char D_316080[];
extern char D_3160A0[];
extern int f13b550(int, int);
extern void f195a30(char *, int, int);
extern void f1956b0(char *, int, int);
extern void f1a3ac0(char *, int, int);
struct S { int p0; int fl; int a; int b; int c; char *d; int e; };
void f(struct S *o, int a1, int a2) {
    switch (a1) {
    case 0:
        o->a = f13b550(G_8328, 59);
        o->b = 0;
        o->d = D_316040;
        o->c = 4;
        o->e = 0;
        o->fl = 0;
        f195a30(D_316040, 219, 58);
        f1956b0(D_316060, 62, 7);
        f1956b0(D_316080, 63, 8);
        f195a30(D_3160A0, 253, 59);
        break;
    default:
        break;
    }
    f1a3ac0((char *)o, a1, a2);
}
