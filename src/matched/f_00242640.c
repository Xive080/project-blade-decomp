extern void func_00230ce0(void *, int, float);
struct R { int f[6]; };
struct S { char p0[0x20]; float x; float y; char p1[4]; int fl; float d; int n0; char p2[0x74]; struct R r[3]; char p5[0x88]; int cnt; char p3[0x30]; int c1b0; int c1b4; char p4[0x30]; int c1e8; };
#define F(p,o) (*(int *)((char *)(p) + (o)))
void func(struct S *a, int *b) {
    int c;
    int *dst;
    int i, j;
    char *p2, *p3, *t0, *t1, *t2;
    dst = (int *)((char *)a + 32);
    c = 33;
    do { c--; *dst = *b; b++; dst++; } while (c > 0);
    i = 0; t0 = (char *)a; t1 = (char *)a; t2 = (char *)a;
    a->cnt = a->n0;
    a->c1b0 = 0;
    a->c1e8 = 0;
    a->c1b4 = 0;
    while (i < a->cnt) {
        j = 0; p2 = t0; p3 = t1;
        do {
            F(p2,0xf4) = 0; F(p2,0xf8) = 0; F(p3,0x1b8) = 0; j++;
            F(p3,0x1d0) = 0; F(p3,0x180) = 0; p2 += 24; p3 += 4;
        } while (j < 2);
        F(t2,0xac) = 0; F(t2,0xb0) = 0;
        t0 += 48; t1 += 8; t2 += 24; i++;
    }
    if (a->fl & 8) {
        a->x += a->d;
        if (a->fl & 1) {
            int k = a->cnt;
            a->y = a->y - (4.0f + (14.0f * (float)k + 2.0f * (float)(k - 1)));
        }
    } else {
        a->y -= a->d;
        if (a->fl & 1) {
            int k = a->cnt;
            a->x = a->x - (4.0f + (14.0f * (float)k + 2.0f * (float)(k - 1)));
        }
    }
    i = 3;
    while (i--) {
        func_00230ce0(a, 0, 1.0f);
        func_00230ce0(a, 1, 0.6f);
        func_00230ce0(a, 2, 0.6f);
        func_00230ce0(a, 3, 0.6f);
        a->r[i].f[2] = 0; a->r[i].f[3] = 0;
    }
}
