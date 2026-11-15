extern void func_002429e0(void *, float *);
extern void func_00242a10(void *);
extern void func_00133120(int);
struct V { void (*fn)(struct V *); };
extern struct V *g_obj;
struct O {
    int pad0;
    int flags;
    float s;
    int pad1[2];
    float f;
    int pad2[8];
    int z[3];
    int x[3][2];
    int h[4][2];
    int y[3][2];
};
void f(struct O *o) {
    float v[3];
    int i, j;
    if (o->flags & 2) {
        v[2] = 0; v[1] = 0; v[0] = 0;
    } else {
        v[2] = 255.0f; v[1] = 255.0f; v[0] = 255.0f;
    }
    func_002429e0(o, v);
    func_00242a10(o);
    o->f = 4.0f;
    for (i = 0; i < 3; i++) {
        for (j = 2; j--; ) {
            o->x[i][j] = 0;
            o->y[i][j] = 0;
        }
        o->z[i] = 0;
    }
    g_obj->fn(g_obj);
    *(volatile int *)0x330a68 = 0; *(volatile int *)0x330a6c = 0; *(volatile int *)0x330a70 = 0;
    for (i = 0; i < 2; i++) {
        o->h[0][i] = 0; o->h[1][i] = 0; o->h[2][i] = 0; o->h[3][i] = 0;
    }
    o->s = 120.0f;
    func_00133120(2);
}
