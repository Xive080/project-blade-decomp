typedef int s32;
typedef float f32;
struct F { char p0[0x20]; f32 ax, ay, az; f32 pw; f32 bx, by, bz; };
struct B;
struct VT { char pad[0x18]; void *(*get)(struct B *); };
struct B { char pb[12]; struct VT *vt; };
struct U { char pad[20]; struct B *b; };
struct T { char pad[0x518]; struct U *u; };
struct O { char pb[12]; struct VT *vt; char pad[0x3f0 - 16]; struct F cur; char pad2[0x430 - 0x3f0 - sizeof(struct F)]; struct O *ch[10]; s32 n; };
extern char D[];
extern struct F *func_001c3b80(void *);
s32 func(struct O *o) {
    s32 i;
    s32 r;
    struct T **pp;
    r = 1;
    pp = (struct T **)D;
    for (i = 0; i < 2; i++, pp++) {
        struct T *t = pp[256];
        if (t) {
            struct U *u = t->u;
            if (u) {
                struct B *b = u->b;
                if (b) {
                    void *x = b->vt->get(b);
                    if (x) {
                        struct F *s = func_001c3b80(x);
                        struct F *v = func_001c3b80(o->vt->get((struct B *)o));
                        struct F *c = &o->cur;
                        f32 y = s->ay; f32 x = s->ax; f32 z = s->az; f32 f3 = s->bx * x + s->by * y + s->bz * z;
                        s32 k = f3 < x * v->bx + y * v->by + z * v->bz;
                        if (k != 0 || f3 < s->ax * c->bx + s->ay * c->by + s->az * c->bz) r = 0;
                    }
                }
            }
        }
    }
    {
        char *pc;
        s32 j;
        j = 0;
        pc = (char *)o;
        for (; j < o->n; pc += 4, j++) {
            if (func(*(struct O **)(pc + 0x430)) == 0) r = 0;
        }
    }
    return r;
}
