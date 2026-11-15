extern void func_001a90e0(void);
extern float D_003175d4;
struct V { float x, y, z; };
struct O { char pad[16]; int state; int flags; char pad2[12]; struct V p; struct V v; };
int f(struct O *o, struct V *a, struct V *b) {
    if (o->state != 1) return 0;
    if (b != 0) {
        o->v = *b;
    } else if (o->flags & 0x80) {
        o->v.x = D_003175d4 * (a->x - o->p.x);
        o->v.y = D_003175d4 * (a->y - o->p.y);
        o->v.z = D_003175d4 * (a->z - o->p.z);
    } else {
        o->v.x = 0; o->v.y = 0; o->v.z = 0;
        o->flags |= 0x80;
    }
    o->p = *a;
    func_001a90e0();
    return 1;
}
