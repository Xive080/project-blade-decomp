struct O { int z; int fl; int a; int b; int c; void *d; int e; };
extern int D610[];
extern unsigned char D61f[];
extern char D5d00[];
extern int G8328;
extern int G851C;
extern int f13b550(int, int);
extern void f1956b0(char *, int, int);
extern void f195a30(char *, int, int);
extern int f1a3ac0(struct O *, int, int);
extern int f1a3fe0(int, int, int);
extern int f1b5470();
extern void f24b540(int, int, void *);
void func(struct O *o, int b, int c) {
    int l[2];
    int t;
    switch (b) {
    case 0:
        o->a = f13b550(G8328, 129);
        o->b = 0;
        o->d = D5d00;
        o->c = 1;
        o->e = 0;
        o->fl = 0;
        f195a30(D5d00, 129, 43);
        o->fl = o->fl | 9;
        break;
    case 2:
        if (D610[0] == 3 && D61f[0] >= 6) {
            f1956b0(D5d00, 129, 1);
        } else {
            f195a30(D5d00, 129, 43);
        }
        break;
    case 3:
        t = f1b5470() + 1;
        G851C = 0;
        l[0] = f1a3fe0(f13b550(G8328, 130), t, 0);
        l[1] = 1;
        f24b540(18, 0, l);
        break;
    }
    f1a3ac0(o, b, c);
}
