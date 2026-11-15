struct S { int p0; int fl; int a; int b; int c; char *d; int e; };
extern int G_8328;
extern char D1[];
extern char D2[];
extern char D3[];
extern int f13b550(int, int);
extern void f1958a0(char *, int);
extern void f195860(char *, int);
extern void f1954d0(char *, int);
extern void f1a3ac0(char *, int, int);
void f(struct S *o, int a1, int a2) {
    switch (a1) {
    case 0:
        o->a = f13b550(G_8328, 55);
        o->b = f13b550(G_8328, 64);
        o->d = D1;
        o->c = 3;
        o->e = 0;
        o->fl = 0;
        f1958a0(D1, 66);
        f195860(D2, 65);
        f1954d0(D3, 67);
        o->fl = o->fl | 0x10;
        break;
    default:
        break;
    }
    f1a3ac0((char *)o, a1, a2);
}
