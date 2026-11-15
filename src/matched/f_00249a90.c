extern int func_00133120(int);
extern int func_0013b550(int, int);
extern void func_00242b20(int, int, int);
extern int D_002F0FA8[4];
extern int D_00333198[4];
extern int G_8328;
struct O { char pad[16]; int (*fn)(struct O *, int, void *); };
extern struct O *G_84AC;
void func(int a, int b, int c) {
    struct { int v[5]; int pad[3]; } t;
    switch (b) {
    case 4:
        D_00333198[0] = 1;
        func_00133120(7);
        break;
    case 7:
        t.v[0] = func_0013b550(G_8328, 344);
        t.v[1] = 0;
        t.v[2] = 1;
        t.v[3] = 0x3e4ccccd;
        t.v[4] = 1;
        if (G_84AC) G_84AC->fn(G_84AC, 10, D_002F0FA8);
        if (G_84AC) G_84AC->fn(G_84AC, 18, &t);
        break;
    }
    func_00242b20(a, b, c);
}
