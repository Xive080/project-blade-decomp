struct V { float x, y, z; };
struct T { char pad[48]; struct V p; };
struct O { char pad[16]; struct V v; char pad2[28]; struct T *t; };
extern float f1ce160(struct V *, struct V *);
extern void f1c7610(struct T *, struct V *, int, float);
void func(struct O *o) {
    struct V a; struct V s; float z = 0.0f;
    struct V *v = &o->v;
    if (v->x != z || v->y != z || v->z != z) {
        float d = f1ce160(&a, v);
        if (!(d <= 3.1415927f)) {
            float k = 3.1415927f;
            d = k;
            v->x = k * a.x;
            v->y = k * a.y;
            v->z = k * a.z;
        }
        d = d * *(float *)0x70003FA8;
        s = o->t->p;
        f1c7610(o->t, &a, 2, 57.295776f * d);
        o->t->p = s;
    }
}
