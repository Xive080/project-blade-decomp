struct R { char pad[228]; s32 v; };
struct O { char pad[36]; s32 a; f32 t; char pad2[252]; s32 m; };
extern struct R *f1(struct O *, s32);
s32 func(struct O *o) {
    s32 c;
    struct R *r;
    f32 t;
    if (o->m == 0) {
        o->a = 0;
        return 0;
    }
    c = 0;
    if (o->a == 0) {
        c = 1;
    } else {
        t = o->t - *(f32 *)0x70003FA8;
        o->t = t;
        if (t < 0.0f) c = 1;
    }
    if (o->m == 1 && !(o->t <= 1.0f)) o->t = 1.0f;
    if (c) {
        r = f1(o, 0);
        if (r) {
            o->a = r->v;
            o->t = 6.0f;
        } else {
            o->a = 0;
        }
    }
    return 1;
}
