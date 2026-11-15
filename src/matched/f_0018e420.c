struct V { f32 x, y, z; };
struct O { char p0[32]; struct V dir; char p1[4]; struct V pos; };
extern void func_001ce160(struct V *, struct V *);
int f(struct O *o, struct V *p) {
    struct V d;
    f32 lim = 25.0f;
    d.x = p->x - o->pos.x;
    d.y = p->y - o->pos.y;
    d.z = p->z - o->pos.z;
    if (d.x * d.x + d.y * d.y + d.z * d.z < lim) return 0;
    func_001ce160(&d, &d);
    if (d.x * o->dir.x + d.y * o->dir.y + d.z * o->dir.z < 0.0f) return 1;
    return 0;
}
