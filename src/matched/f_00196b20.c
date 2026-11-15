extern int func_0013b550(int, int);
struct O { int p0; int p1; int p2; int c; int e; int m; };
extern void func_001747d0(int, float, float);
extern int func_00174ac0(int);
extern void func_001785a0(int);
extern int func_001b5910();
extern void func_001b5920(int);
extern void func_0024b470(int, int);
extern void func_0024b4b0(int, int);
extern void func_0024b540(int, int, void *);
extern int G_8328;
int func(struct O *o, int b) {
    int v[8];
    switch (b) {
    case 4:
    case 5:
        if (func_00174ac0(o->e) != 0 && o->c != 0) {
            o->c = 0;
            func_001b5920(o->m | func_001b5910());
            func_001747d0(o->e, 0.5f, 0.3f);
        } else {
            o->c = 1;
            func_001b5920(~o->m & func_001b5910());
        }
        func_001785a0(2);
        func_0024b470(13, o->c);
        break;
    case 0:
        v[0] = 2;
        v[1] = func_0013b550(G_8328, 273);
        v[2] = func_0013b550(G_8328, 274);
        func_0024b540(13, 0, v);
        if (func_00174ac0(o->e) != 0 && (o->m & func_001b5910())) {
            o->c = 0;
        } else {
            o->c = 1;
        }
        func_0024b470(13, o->c);
        break;
    case 1:
        func_0024b4b0(13, 0);
        break;
    }
    return 1;
}
