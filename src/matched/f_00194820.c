extern int func_00121b70(void *);
extern int gflag;
struct Obj { char pad[12]; int (*fn)(void *, void *, void *, int, int, int); char pad2[468]; int f484; };
struct Tgt { char pad[1388]; int n; };
int func_00194820(struct Obj *o, struct Tgt *t, void *x) {
    if (t != 0) {
        if (gflag == 0 || o->f484 == 0 || t->n > 0) return 0;
        {
            int a = func_00121b70(x);
            if (o->fn(o, t, x, 1, a, 1) != 0) return func_00121b70(x);
        }
    }
    return 0;
}
