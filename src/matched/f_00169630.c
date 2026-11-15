typedef struct { int a, b; } P;

typedef struct { f32 x, y, z; } V3;
struct G {
    char *a; char *b; char pad0[8];
    P arr[8];
    char mat[64];
    V3 v0; V3 v1; char pad1[0x18];
    V3 diff; V3 dc; f32 e8; int ec, f0, f4, f8; V3 fc; int f08, f0c;
};
extern struct G D_00305E10;
extern char *func_001c3b80(int);
extern void func_001c7710(void *, void *, void *);
extern f32 func_001ce160(void *, void *);
extern void func_001ce3f0(V3 *, V3 *, int, char *);

static inline P *cp(int n, P *d, P *s) {
    for (; n > 0; n--) {
        int t0 = s->a;
        int t1 = s->b;
        s++;
        d->a = t0;
        d->b = t1;
        d++;
    }
    return s;
}

void func(char *arg0, char *arg1) {
    char *s0;
    char *v;
    P *s;
    P *d;
    int i;
    s0 = func_001c3b80(*(int *)(arg1 + 0x4ec));
    D_00305E10.a = arg0;
    d = D_00305E10.arr;
    D_00305E10.b = arg1;
    s = (P *)s0;
    s = cp(8, d, s);
    func_001c7710(D_00305E10.mat, D_00305E10.arr, s);
    v = func_001c3b80(*(int *)(arg0 + 0x68));
    D_00305E10.v0 = *(V3 *)(v + 0x30);
    func_001ce3f0(&D_00305E10.v0, &D_00305E10.v0, 1, D_00305E10.mat);
    D_00305E10.dc = *(V3 *)(v + 0x10);
    D_00305E10.v1 = *(V3 *)(s0 + 0x30);
    func_001ce3f0(&D_00305E10.v1, &D_00305E10.v1, 1, D_00305E10.mat);
    D_00305E10.diff.x = D_00305E10.v0.x - D_00305E10.v1.x;
    D_00305E10.diff.y = D_00305E10.v0.y - D_00305E10.v1.y;
    D_00305E10.diff.z = D_00305E10.v0.z - D_00305E10.v1.z;
    D_00305E10.e8 = func_001ce160(&D_00305E10.diff, &D_00305E10.diff);
    D_00305E10.ec = 0x42a00000;
    D_00305E10.f0 = 0;
    D_00305E10.f4 = 0;
    D_00305E10.f8 = 0;
    D_00305E10.fc.x = -1.0f * D_00305E10.diff.x;
    D_00305E10.fc.y = -1.0f * D_00305E10.diff.y;
    D_00305E10.fc.z = -1.0f * D_00305E10.diff.z;
    D_00305E10.f08 = 0;
    D_00305E10.f0c = 0;
}
