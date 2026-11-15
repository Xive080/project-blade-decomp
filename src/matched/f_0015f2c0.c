struct P { int k; char pad[88]; int a; char pad2[220]; int b; };
struct O { char pad[1400]; int st; float v1; float v2; float v3; char pad2[12]; float in; float out; };
extern float D_lim;
extern float D_lim2;
extern float D_init;
void f(struct O *o, struct P *p) {
    float t, u, lim, lim2, z;
    int ok;
    if (p == 0) return;
    if (o->st != 0) return;
    t = o->in;
    lim = D_lim;
    if (t > lim) {
        t = t - lim;
        ok = 1;
    } else if (t < -lim) {
        t = t + lim;
        ok = 1;
    } else {
        ok = 0;
    }
    if (ok) {
        if (p->k == 1 && p->a != 0) {
            int k = p->b;
            if (k == 0) {
                if (t < 0.0f) ok = 0;
            } else if (k == 2) {
                if (t > 0.0f) ok = 0;
            }
        }
        if (ok) {
        u = 0.8f * t;
        lim2 = D_lim2;
        if (u > lim2) u = lim2;
        else if (u < -lim2) u = -lim2;
        o->out = u;
        z = D_init;
        if (o->st == 0) {
            o->st = 1;
            o->v1 = z;
            o->v2 = z;
            o->v3 = 1.25f * u;
            o->out = 0;
        }
    }
}
}
