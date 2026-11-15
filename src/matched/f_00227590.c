struct P { int id; int a, b, c; };
struct Gr { int cnt; int start; int z0; int z1; };
struct Q { int z; int flags; float f8; int pad1[2]; float f20; int pad2[8]; int a, b, c; };

struct W { int a; int b; };
struct O {
    struct Q q[2];
    char pad[56];
    struct Gr g[7];
    struct P *tbl; int n; int z312; int m316; int m320; int z324; int z328; int z332;
    char pad2[40];
    struct W w[2];
};
extern void fn_2429e0(struct O *, float *);
extern void fn_242a10(struct O *);
extern void fn_129210(int, void *, struct O *);
extern float fn_1b5c30(void);
extern void fn_132950(float);
extern void fn_132c50(int);
extern void fn_133120(int);
extern struct P D_002e6790[];
extern int D_gp[2];
extern void fn_228210(void);
extern unsigned char D_002fa61f;
void func(struct O *o) {
    int k = 0;
    int i;
    int j;
    float v[3];
    int *g;
    int a1;
    if (o->q[0].flags & 2) { v[2] = 0; v[1] = 0; v[0] = 0; }
    else { v[2] = 255.0f; v[1] = 255.0f; v[0] = 255.0f; }
    fn_2429e0(o, v);
    fn_242a10(o);
    o->tbl = D_002e6790;
    o->n = 0;
    for (i = 0; o->tbl[i].id != -1; i++) {
        if (o->n < o->tbl[i].id) o->n = o->tbl[i].id;
    }
    o->n = o->n + 1;
    for (i = 0, g = (int *)o, a1 = 0; i < o->n; g += 4, i++) {
        g[48] = 0;
        g[49] = k;
        j = a1;
        while (*(int *)((char *)o->tbl + j) == i) {
            g[48] = g[48] + 1;
            j += 16; a1 += 16; k++;
        }
        g[50] = 0;
        g[51] = 0;
    }
    i = 2;
    while (i--) {
        o->q[i].c = 0; o->q[i].b = 0; o->q[i].a = 0;
        o->w[i].a = 0; o->w[i].b = 0;
        D_gp[i] = 0;
    }
    o->m320 = -1; o->m316 = -1; o->z312 = 0;
    o->q[0].f20 = 4.0f; o->q[0].f8 = 120.0f;
    o->z328 = 0; o->z332 = 0;
    fn_129210(*(int *)0x70003fd8, fn_228210, o);
    fn_132950(fn_1b5c30());
    fn_132c50(*(unsigned char *)0x2fa61f);
    fn_133120(2);
}
