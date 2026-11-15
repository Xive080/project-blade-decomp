extern void func_00129300(int, int, int, int *, int *);
extern int func_00147b70(void *, int);
extern int func_00147e20(void *);
extern int D_00129150[];
extern int D_00129180[];
struct T { char pad[0x130]; u32 (*f)(int); };
extern char D_0032A620[];
struct L { s64 v; }; extern struct L G_8310;

int func(int a, int *p) {
    struct L n;
    int pad;
    u32 q;
    int x, y, x2, y2;
    n = G_8310;
    if (a == 0 || p == 0) return 0;
    x = func_00147e20(p);
    while (x != 0) {
        y = func_00147b70(p, x);
        if (y != 0) func_00129300(a, x, y, D_00129150, (int*)&n);
        x = y;
    }
    p[4] = ((struct T *)D_0032A620)->f((int)n.v * 12);
    p[5] = p[4] + (int)n.v * 12;
    q = p[4];
    while (q < (u32)p[5]) {
        ((int*)q)[0] = 0;
        ((int**)q)[1] = p;
        ((int*)q)[2] = 0;
        q += 12;
    }
    q = p[4];
    y = func_00147e20(p);
    while (y != 0) {
        x = func_00147b70(p, y);
        if (x != 0) func_00129300(a, y, x, D_00129180, (int*)&q);
        y = x;
    }
    return 1;
}
