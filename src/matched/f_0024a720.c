extern int off;
struct O { char pad[56]; float v; };
struct O *f(int a, float *d) {
    struct O *o = *(struct O **)(a + off);
    if (o != 0) {
        o->v = o->v + *d;
    }
    return (struct O *)a;
}
