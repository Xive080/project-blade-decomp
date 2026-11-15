extern int G_8328;
extern char D[];
extern int f13b550(int, int);
extern void f195670(char *, int);
extern void f1956b0(char *, int, int);
extern void f1a3ac0(char *, int, int);
struct S { int p0; int p4; int a; int b; int c; char *d; int e; };
void f(struct S *o, int a1, int a2) {
    switch (a1) {
    case 0:
        o->a = f13b550(G_8328, 203);
        o->b = f13b550(G_8328, 205);
        o->d = D;
        o->c = 2;
        o->e = 0;
        o->p4 = 0;
        f195670(o->d, 276);
        f1956b0(o->d + 32, 275, 3);
    case 2:
        o->e = 0;
        break;
    default:
        break;
    }
    f1a3ac0((char *)o, a1, a2);
}
