struct O { char p0[0x10]; void (*fn)(struct O *); char p1[0x10]; int w24; int w28; int w2c; int w30; int w34; int w38; };
extern struct { char pad[0x2c]; struct O *o[1]; } *g;
extern void f24b5f0(struct O *, int);
extern void f1892c0(int);
extern void f189650(int);
void f(int i, int k) {
    struct O *o = g->o[i];
    if (o->w28) {
        if (k) { f24b5f0(o, 0); return; }
        o->fn(o);
        if (o->w34) {
            f1892c0(o->w34);
            o->w34 = 0;
            o->w38 = 0;
        }
        f189650(o->w28);
        o->w28 = 0;
        o->w30 = 0;
        o->w24 = 0;
    }
}
