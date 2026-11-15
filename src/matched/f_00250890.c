struct E { void *k; char p[68]; int v; };
struct P { int a; int b; };
struct O { char p0[152]; int a152; int a156; char p2[16]; struct P q[5]; char p1[100]; int a316; };
extern int *fn_170070(void *);
extern struct E g1[7];
extern struct E g2[6];
extern char g3[];
void f(struct O *o) {
    unsigned i;
    int *r;
    o->a152 = 0;
    o->a156 = 0;
    for (i = 0; i < 5; i++) {
        o->q[i].a = 0;
        o->q[i].b = 0;
    }
    for (i = 0; i < 7; i++) {
        r = fn_170070(g1[i].k);
        if (r) g1[i].v = *r; else g1[i].v = 0;
    }
    for (i = 0; i < 6; i++) {
        r = fn_170070(g2[i].k);
        if (r) g2[i].v = *r; else g2[i].v = 0;
    }
    r = fn_170070(g3);
    if (r) o->a316 = *r; else o->a316 = 0;
}
