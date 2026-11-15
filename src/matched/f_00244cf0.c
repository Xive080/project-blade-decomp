struct E { int pad[4]; float t; int s; };
struct O { char pad[56]; int n; int m; };
extern char D_00332c40[];
int f(struct O *o) {
    float best = 3.4028235e38f;
    int i;
    int cnt = 0;
    struct E *e;
    e = (struct E *)D_00332c40;
    for (i = 0; i < o->n; e = (struct E *)((char *)e + 8), i++) {
        if (e->s == 1) {
            if (e->t < best) best = e->t;
        }
    }
    e = (struct E *)D_00332c40;
    for (i = 0; i < o->n; e = (struct E *)((char *)e + 8), i++) {
        if (e->s == 1) {
            if (e->t == best) cnt++;
        }
    }
    if (cnt != o->m) {
        e = (struct E *)D_00332c40;
        for (i = 0; i < o->n; e = (struct E *)((char *)e + 8), i++) {
            if (e->s == 1) {
                if (e->t == best) { e->s = 2; o->m = o->m - 1; }
            }
        }
    }
    if (o->m == 1) return 1;
    return 0;
}
