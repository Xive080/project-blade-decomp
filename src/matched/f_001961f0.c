extern int func_0013b550(int, int);
extern void func_001785a0(int);
extern int func_001b5910();
extern void func_001b5920(int);
extern void func_0024b470(int, int);
extern void func_0024b4b0(int, int);
extern void func_0024b540(int, int, void *);
extern int G_8328;

int func(char *p, int k) {
    int v[8];
    switch (k) {
    case 4:
    case 5:
        if (*(int *)(p + 12) != 0) {
            *(int *)(p + 12) = 0;
            func_001b5920(func_001b5910() | 8);
        } else {
            *(int *)(p + 12) = 1;
            func_001b5920(func_001b5910() & ~8);
        }
        func_001785a0(2);
        func_0024b470(13, *(int *)(p + 12));
        break;
    case 0:
        v[0] = 2;
        v[1] = func_0013b550(G_8328, 98);
        v[2] = func_0013b550(G_8328, 99);
        func_0024b540(13, 0, v);
        if (func_001b5910() & 8) {
            *(int *)(p + 12) = 0;
        } else {
            *(int *)(p + 12) = 1;
        }
        func_0024b470(13, *(int *)(p + 12));
        break;
    case 1:
        func_0024b4b0(13, 0);
        break;
    }
    return 1;
}
