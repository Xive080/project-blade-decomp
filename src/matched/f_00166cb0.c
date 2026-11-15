struct B { char pad0[16]; s32 fl; char pad1[84]; s32 id; char pad2[156]; f32 x; f32 y; f32 z; };
struct T { char pad[48]; f32 x; f32 y; f32 z; };
extern struct B *G;
extern struct T *lookup(s32);
extern void norm(f32 *, f32 *);
s32 func(s32 a, f32 *n) {
    f32 v[3];
    struct T *t;
    if (a & 2) {
        return 0;
    }
    if (G) {
        if (G->fl & 0x800) {
            t = lookup(G->id);
            v[0] = G->x - t->x;
            v[1] = G->y - t->y;
            v[2] = G->z - t->z;
            norm(v, v);
            if (v[0] * n[0] + v[1] * n[1] + v[2] * n[2] < -0.3f) {
                return 0;
            }
        }
    }
    return 1;
}
