struct G { char pad[20]; float x, y, z; };
struct A { char pad[12]; int h; };
extern struct G D_003279A0;
extern int func_0017f6b0(int, int, int, int);
extern int func_0017f740(int, int, void *);
int f(struct A *a, float x, float y, float z) {
    int i;
    D_003279A0.x = x;
    D_003279A0.y = y;
    D_003279A0.z = z;
    for (i = 0; i < 4; i++) {
        func_0017f6b0(a->h, i, 2, 1);
        func_0017f740(a->h, i, &D_003279A0);
    }
    return 1;
}
