struct O { int z; int fl; int a; int b; int c; void *d; int e; };
extern char D2f[];
extern char D31[];
extern int G8328;
extern int G7c;
extern int G8c;
extern int f13b550(int, int);
extern void f195a30(char *, int, int);
extern void f1784a0(int);
extern int f1a3ac0(struct O *, int, int);
void func(struct O *o, int b, int c) {
    switch (b) {
    case 0:
        o->a = f13b550(G8328, 1);
        o->b = f13b550(G8328, 2);
        o->d = D31;
        o->c = 5;
        o->e = 0;
        o->fl = 0;
        o->a = (int)D2f;
        f195a30(D31, 29, 1);
        f195a30(D31 + 32, 8, 2);
        f195a30(D31 + 64, 53, 3);
        f195a30(D31 + 96, 59, 27);
        G7c = 0;
        o->fl = o->fl | 8;
    case 2:
        if (G8c & 8) {
            f195a30(D31 + 128, 14, 18);
            o->c = 5;
        } else {
            o->c = 4;
        }
        break;
    case 17:
        f1784a0(6);
        break;
    }
    f1a3ac0(o, b, c);
}
