extern void func_00130eb0(int, int, float, float);
extern void func_001c21d0(int, float);
extern void func_001c2220(int, float);
extern int D_002FA374[];
struct E { int w[19]; };
extern struct E tbl[];
struct A { int p[25]; int i64; int p68[4]; float f78; };
void func(struct A *a, int k, int unused, float *pf) {
    float f = *pf;
    int i;
    switch (k) {
    case 0:
        a->f78 = 57.29578f * f;
        i = a->i64;
        if (i != -1) func_00130eb0(tbl[i].w[0], i, a->f78, 1.3333334f);
        break;
    case 2:
        i = a->i64;
        if (i != -1) func_001c21d0(tbl[i].w[0], f);
        break;
    case 1:
        i = a->i64;
        if (i != -1) func_001c2220(tbl[i].w[0], f);
        break;
    }
}
