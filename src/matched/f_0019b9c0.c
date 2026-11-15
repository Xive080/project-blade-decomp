struct O { int z; int fl; int a; int b; int c; void *d; int e; };
extern int D610[];
extern unsigned char D61f[];
extern char D5d20[];
extern char D7060[];
extern int D7400[];
extern int G8328;
extern int G851C;
extern float G8318;
extern int f13b550(int, int);
extern void f195a90(char *, int);
extern void f1784a0(int);
extern int f1a3ac0(struct O *, int, int);
extern int f1a3fe0(int, int, int);
extern void f24b540(int, int, void *);
void func(struct O *o, int b, int c) {
    int l[2];
    switch (b) {
    case 0:
        o->a = f13b550(G8328, 127);
        o->b = 0;
        o->d = D5d20;
        o->c = 1;
        o->e = 0;
        o->fl = 0;
        f195a90(D5d20, 128);
        o->fl = o->fl | 0x19;
        break;
    case 3:
        G851C = 0;
        l[0] = f1a3fe0(f13b550(G8328, 128), 0, 0);
        l[1] = 1;
        f24b540(18, 0, l);
        break;
    case 18:
        if (!(G8318 <= 0.8f)) {
            if (D610[0] == 3 && D61f[0] >= 6) {
                f1784a0(1);
            } else {
                D7400[1] = 1;
                D7400[2] = (int)D7060;
                D7400[3] = D7400[0];
            }
        }
        break;
    }
    f1a3ac0(o, b, c);
}
