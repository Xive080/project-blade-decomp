struct S { int p0; int p4; int p8; int pc; int p10; char *p14; int p18; };
extern int D_002FA610[];
extern int G_8328;
extern char D_00315740[];
int f13b550(int, int);
void f195670(char *, int);
void f1956b0(char *, int, int);
void f1a3ac0(struct S *, int, int);
void func(struct S *s, int a, int b) {
    switch (a) {
    case 0:
    case 2: {
        if (D_002FA610[0] == 2) {
            s->p8 = f13b550(G_8328, 202);
            s->pc = f13b550(G_8328, 204);
            s->p14 = D_00315740;
            s->p10 = 2;
            s->p18 = 0;
            s->p4 = 0;
        } else {
            s->p8 = f13b550(G_8328, 201);
            s->pc = f13b550(G_8328, 204);
            s->p14 = D_00315740;
            s->p10 = 2;
            s->p18 = 0;
            s->p4 = 0;
        }
        f195670(s->p14, 276);
        f1956b0(s->p14 + 32, 275, 0);
        s->p18 = 0;
        break;
    }
    }
    f1a3ac0(s, a, b);
}
