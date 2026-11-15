extern int G_8328;
extern char D_003156C0[];
extern char D_003156E0[];
int func_0013b550(int, int);
void func_00195a30(char *, int, int);
void func_001a3ac0(char *, int, int);
struct S { int p0; int a; int b; int c; int d; char *e; int f; };
void func(struct S *o, int b, int c) {
    switch (b) {
    case 0:
        o->b = func_0013b550(G_8328, 53);
        o->c = func_0013b550(G_8328, 206);
        o->e = D_003156C0;
        o->d = 2;
        o->f = 0;
        o->a = 0;
        func_00195a30(D_003156C0, 55, 69);
        func_00195a30(D_003156E0, 56, 22);
        break;
    case 2: break;
    }
    func_001a3ac0((char*)o, b, c);
}
