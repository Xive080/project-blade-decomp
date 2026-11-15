extern void func_0012b910();
extern void func_00179d10(char *, int);
extern void func_0017a070(char *, int);
extern void func_0017a1b0();
extern void func_001a8850(char *, float);
extern void func_001a8e80(char *);
extern void func_001c3b00(int, int);
extern char *func_001c3b70(int);
extern char *func_001c3b80(int);
extern void func_001ff7d0(char *, float);
extern void func_0024a190(char *, void *);
extern void func_0024a430(char *, void *);
extern char *D_70003FD8;
typedef struct { int a, b; } P8;
typedef struct { float x, y, z; } V3;
typedef struct { float x, y, z, w; } V4;
#define I(o) (*(int *)(a + (o)))
#define P(o) (*(char **)(a + (o)))
#define F(o) (*(float *)(a + (o)))
int func(char *a, int b) {
    struct { V4 sp40; V4 sp50; V4 sp60; V3 sp70; V3 sp7c; int sp88; } L;
    I(60) = b;
    switch (I(60)) {
    case 0:
        func_0012b910();
        I(16) = I(16) | 4;
        I(188) = I(48);
        I(1632) = (int)(a + 1440);
        break;
    case 2:
    case 4:
        I(212) = 0x7f7fffff;
        I(216) = 0;
        if (I(192) != 0) func_0017a1b0(I(192));
        func_00179d10(a, 0);
        func_0017a070(a, 1);
        if (I(1148) != 0) {
            func_001a8e80(a + 1132);
            func_001a8850(a + 1132, F(1248));
        }
        I(16) = I(16) | 4;
        I(188) = I(48);
        I(1632) = (int)(a + 1440);
        break;
    case 8: {
        int *s1;
        int *d;
        int s2;
        int n;
        if (P(868) != 0 && I(856) != 0) {
            I(1376) = 0;
            I(1380) = 0;
            F(1384) = *(float *)(*(char **)(P(868) + 8) + 12);
            I(16) = I(16) | 0x2000;
            func_001ff7d0(P(868), 0);
        } else {
            I(16) = I(16) & ~0x2000;
        }
        s1 = (int *)func_001c3b70(*(int *)(P(48) + 4));
        s2 = *(int *)(P(180) + 4);
        d = (int *)func_001c3b70(s2);
        n = 8;
        do {
            int y;
            int x;
            x = *s1++;
            y = *s1++;
            n--;
            *d++ = x;
            *d++ = y;
        } while (n > 0);
        func_001c3b00(s2, n);
        if (*(int *)(P(204) + 40) != 0) {
            char *t = P(988);
            if (t != 0) *(int *)(t + 8) = 2;
        }
        if (I(196) != 0) func_0017a1b0(I(196));
        func_0017a070(a, 2);
        func_00179d10(a, 1);
        I(16) = I(16) | 4;
        I(188) = I(180);
        I(1632) = (int)(a + 1504);
        if (I(16) & 0x10) {
            char *o = P(1372);
            if (o != 0) {
                char *v = func_001c3b80(*(int *)(*(char **)(o + 8) + 1260));
                char *w;
                L.sp70 = *(V3 *)(v + 48);
                w = *(char **)(P(1372) + 12);
                L.sp7c = *(V3 *)(w + 12);
                L.sp88 = 0x3fa00000;
                func_0024a430(P(180), &L.sp70);
            } else {
                func_0024a430(P(180), 0);
            }
            L.sp40 = *(V4 *)(a + 112);
            L.sp50 = *(V4 *)(a + 128);
            *(V3 *)&L.sp60 = *(V3 *)(D_70003FD8 + 40);
            func_0024a190(P(180), &L.sp40);
        }
        break;
    }
    case 16:
        func_00179d10(a, 2);
        if (I(200) != 0) func_0017a1b0(I(200));
        func_0017a070(a, 3);
        if (*(int *)(P(204) + 40) == 0 && I(1148) != 0) {
            func_001a8e80(a + 1132);
            func_001a8850(a + 1132, F(1248));
        }
        I(16) = I(16) | 4;
        I(188) = I(184);
        I(1632) = (int)(a + 1568);
        break;
    }
    return 1;
}
