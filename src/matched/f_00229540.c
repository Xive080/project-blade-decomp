extern int f22bd00(int);
extern int f13b550(int, int);
extern void f22baa0(int, int);
extern int *f1b4b20(void);
extern void f133120(int);
extern void f242b20(void *, int, int *);
struct E { int v; char pad[324]; float f; char pad2[1124]; };
extern struct E tbl[];
extern int *gp_obj;
extern int ga;
extern int cnt;
struct O { int *vt; int pad[2]; int st; int pad2[11]; int h; };
void func(struct O *o, int a, int *b) {
    int r0;
    switch (a) {
    case 2:
        r0 = f22bd00(o->h);
        if (r0 == b[2]) {
            int r = f13b550(ga, b[0] == 0 ? 348 : 347);
            if (gp_obj) ((void (*)(int *, int, int))((int *)gp_obj)[4])(gp_obj, 10, r);
            f22baa0(o->h, tbl[b[0] ^ 1].v);
            cnt++;
        }
        break;
    case 3:
        switch (o->st) {
        case 1:
            ((void (*)(struct O *, int))o->vt[6])(o, 2);
            return;
        }
        break;
    case 4: {
        if (tbl[0].f != tbl[1].f) {
            if (tbl[0].f > tbl[1].f) f1b4b20()[0]++;
            else f1b4b20()[1]++;
        }
        f133120(7);
        break;
    }
    }
    f242b20(o, a, b);
}
