struct V { f32 x, y, z; };
struct O {
    struct V v0;
    struct V v1;
    struct V v2;
    struct V v3;
    s32 buf;
    s32 a;
    s32 b;
    s32 c;
    s32 d;
    char pad[36];
    s32 one;
    struct V w0;
    struct V w1;
};
extern s32 alloc(s32, s32, s32);
s32 func(struct O *o) {
    struct V z;
    struct V *q;
    o->buf = alloc(2, 0, 20);
    if (o->buf == 0) {
        return 0;
    }
    o->a = 0;
    o->b = 0;
    o->one = 1;
    o->c = 0;
    o->d = 0;
    z.x = 0;
    z.y = 0;
    z.z = 0;
    q = &z;
    o->w0 = *q;
    o->w1 = *q;
    o->v0 = *q;
    o->v1 = *q;
    o->v2 = *q;
    o->v3 = *q;
    return 1;
}
