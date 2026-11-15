struct V { float x, y, z; };
struct O { char pad[16]; struct V a; struct V b; };

int f(int *u, struct O *o, struct V *p, struct V *q) {
    if (u == 0 || o == 0) return 0;
    if (p) o->a = *p;
    if (q) { o->b = *q; }
    return 1;
}
