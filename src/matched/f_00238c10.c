struct Q { int *vt; int b; int c; };
struct O { int a; int p1; int p2; struct Q *q; int (**vt)(void *, int); };
extern int func_00239570();
extern void func_0011ec80(void *, int, int);
extern struct Q *func_00238d70(int, int);
extern int func_00238910();
extern int func_002388e0();
extern void func_00239380(void *);
extern int D_00238A30(void *, int);
extern char D_00238A20[], D_00238A10[], D_00239B70[], D_00239B60[];
extern int *G_8900;
extern char D_00331F68[];
extern int (**G_8904)(void *, int);
extern int D_00331F50[];
struct O *func(struct O *o, int a1) {
    struct Q *q;
    int r;
    int *t;
    int (**u)(void *, int);
    if (func_00239570() == 0) return 0;
    func_0011ec80(o, 0, 20);
    o->a = a1;
    o->q = q = func_00238d70(0, a1);
    o->vt = (int (**)(void *, int))q->vt;
    if (G_8900 == 0) {
        G_8900 = (int *)D_00331F68;
        t = G_8900;
        t[0] = func_00238910();
        t[1] = func_002388e0();
        t[2] = 0;
    }
    if (q == (struct Q *)G_8900 && a1 != 1) {
        r = 0;
    } else if ((*o->vt)(o, q->c + 0) != 1) {
        if (G_8904 == 0) {
            G_8904 = (int (**)(void *, int))D_00331F50;
            u = G_8904;
            u[0] = (int (*)(void *, int))D_00238A30;
            u[1] = (int (*)(void *, int))D_00238A20;
            u[2] = (int (*)(void *, int))D_00238A10;
            u[3] = (int (*)(void *, int))D_00239B70;
            u[4] = (int (*)(void *, int))D_00239B60;
        }
        r = 0;
        o->vt = G_8904;
    } else {
        func_00239380(o);
        r = 1;
    }
    return r ? o : 0;
}
