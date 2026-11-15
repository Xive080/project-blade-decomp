typedef float f32;
typedef int s32;
struct E { f32 v[6]; f32 a; f32 b; };
struct S { char pad[8]; s32 n; struct E *e; char pad2[0x34]; };
extern struct S *G_8338;
extern s32 G_8344;
f32 func_001ce240(f32 *);

void func(void) {
    f32 d1[4];
    f32 d2[4];
    s32 i, j;
    for (i = 0; i < G_8344; i++) {
        f32 s1 = 0.0f;
        f32 s2 = 0.0f;
        for (j = 0; j < G_8338[i].n; j++) {
            if (j > 0) {
                struct E *p = &G_8338[i].e[j - 1];
                struct E *q = &G_8338[i].e[j];
                f32 t, u;
                d1[0] = p->v[0] - q->v[0];
                d1[1] = p->v[1] - q->v[1];
                d1[2] = p->v[2] - q->v[2];
                d2[0] = p->v[3] - q->v[3];
                d2[1] = p->v[4] - q->v[4];
                d2[2] = p->v[5] - q->v[5];
                t = func_001ce240(d1);
                u = func_001ce240(d2);
                s1 += t;
                s2 += u;
            }
            G_8338[i].e[j].a = s1;
            G_8338[i].e[j].b = s2;
        }
    }
}
