extern void *func_001c3b80(void *);
extern void func_001ce410(float *, float *, int, void *);
struct O { char p[76]; float x, y, z; };
struct A { char p0[12]; float px, py, pz; char p1[36]; float ax, ay, az; void *h; };
struct B {
    int z0, z1, z2;
    float ox, oy, oz;
    float qx, qy, qz;
    int n;
    int (**fn)(struct B *, struct O *, void *, int, int);
    int *en;
    int pad;
    int *arg;
    struct O *o;
};
int func(struct A *a, struct B *b, int k) {
    float d[3];
    int i;
    void *v = func_001c3b80(a->h);
    b->z2 = 0;
    b->z1 = 0;
    b->z0 = 0;
    d[0] = b->o->x - b->qx;
    d[1] = b->o->y - b->qy;
    d[2] = b->o->z - b->qz;
    func_001ce410(d, d, 1, v);
    b->ox = d[1] * a->az - d[2] * a->ay;
    b->oy = d[2] * a->ax - d[0] * a->az;
    b->oz = d[0] * a->ay - d[1] * a->ax;
    b->ox = b->ox + a->px;
    b->oy = b->oy + a->py;
    b->oz = b->oz + a->pz;
    for (i = 0; i < b->n; i++) {
        if (b->en[i]) {
            b->fn[i](b, b->o, v, b->arg[i], k);
        }
    }
    return 1;
}
