struct O { int p0; unsigned int fl; int a; int b; int c; void *d; int e; };
extern int f13b550(int, int);
extern int f173710(void);
extern void f195a90(void *, int);
extern void f1a3ac0(void *, int, int);
extern int f1a3fe0(int, int, int);
extern void f24b540(int, int, void *);
extern int G_8328;
extern int G_851C;
extern int D_002FAA80[];
extern char D_00315640[0x10];
extern char D_003172E0[0x10];
extern volatile int D_00317404[4];
extern void *volatile D_00317408[4];
extern volatile int D_0031740C[4];
void f(struct O *o, int k, int z) {
    int sp[2];
    int s3, v;
    switch (k) {
    case 0:
        o->a = f13b550(G_8328, 207);
        o->b = 0;
        o->d = D_00315640;
        o->c = 1;
        o->e = 0;
        o->fl = 0;
        f195a90(D_00315640, 207);
        o->fl = o->fl | 0x19;
        break;
    case 3:
        if (f173710() == 1) { s3 = 1; } else { s3 = 2; }
        G_851C = 0;
        sp[0] = f1a3fe0(f13b550(G_8328, 208), s3, 0);
        sp[1] = 1;
        f24b540(18, 0, sp);
        break;
    case 18:
        if (f173710() == 1) v = 0; else v = 1;
        if (D_002FAA80[v] == 1) {
            D_00317404[0] = 1;
            D_00317408[0] = D_003172E0;
            D_0031740C[0] = 0;
        }
        break;
    }
    f1a3ac0(o, k, z);
}
