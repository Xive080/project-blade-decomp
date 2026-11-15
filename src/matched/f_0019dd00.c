struct S { char p[4]; int f4; int f8; int fc; int f10; char *f14; int f18; };
extern int G;
extern char D[];
extern int h13b550(int, int);
extern void h195a30(char *, int, int);
extern void h19e220(int);
extern int h1a3ac0(void *, int, int);
extern int h1b4ee0();
extern int h1b5470();
extern int h1b6240();
int f(struct S *s, int a, int b)
{
    switch (a) {
    case 0:
        s->f8 = h13b550(G, 0);
        s->fc = 0;
        s->f14 = D;
        s->f10 = 1;
        s->f18 = 0;
        s->f4 = 0;
        s->f4 = s->f4 | 10;
        break;
    case 2:
        if (h1b4ee0() < 7) h195a30(D, 4, 46);
        else if (h1b5470() >= 0) h195a30(D, 4, 48);
        else h195a30(D, 4, 43);
        break;
    case 9:
        if (h1b6240() == 0) return 1;
        break;
    case 3:
        h19e220(1);
        break;
    }
    return h1a3ac0(s, a, b);
}
