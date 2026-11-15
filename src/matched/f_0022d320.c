struct V { float x, y, z; };
struct R { char pad[0x30]; struct V v; };
struct W { char pad[40]; struct R *(*fn)(void *, int); };
struct O { char pad[0x30]; char **p; };
extern struct W *f_00149e60(void);
extern struct R *f_001c3b70(int);
void f_0022d320(struct V *out, struct O *obj, float *h) {
    struct R *r;
    struct V t;
    if (*(int*)obj == 0x10000) {
        r = f_00149e60()->fn(obj, 1);
        t = r->v;
        if (h != 0) {
            *h = 0.25f + f_001c3b70(*(int*)(obj->p + 1))->v.y;
        }
        *out = t;
    } else {
        r = f_001c3b70(*(int*)(obj->p + 1));
        if (h != 0) *h = r->v.y;
        *out = r->v;
    }
}
