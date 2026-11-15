typedef float f32;
typedef unsigned int u32;
struct V { char pad[0x30]; f32 x, y, z; };
struct W { int pad0; int id; char pad1[0x28]; struct W2 *w; };
struct W2 { int a; int b; };
struct O { int type; int id; char pad[0x28]; struct W2 *w; f32 pad2; int pad3; int state; };
struct B { char pad[8]; u32 flags; int arr[5]; u32 n; };
struct A { char pad[0x20]; struct O *o[1]; };
struct A0 { char pad[0xc0]; u32 n; };
struct V *func_001c3b70(int);

struct O *func(struct A0 *a, struct B *b, f32 *p) {
    f32 best = 3.4028235e38f;
    u32 i;
    u32 j;
    struct O *o;
    struct O *r = 0;
    int *q;
    char *pc;
    for (i = 0, pc = (char *)a; i < a->n; pc += 4, i++) {
        int t;
        o = *(struct O **)(pc + 0x20);
        t = o->type;
        if ((t == 0x40000 && (o->state == 2 || o->state == 4)) ||
            (t == 0x80000 && o->state == 2) ||
            (t == 0x200000 && o->state != 0x400 && o->state != 8 && o->state != 32 && o->state != 0) ||
            (t == 0x800000 && o->state == 2)) {
            for (j = 0, q = (int *)b; j < b->n; q++, j++) {
                if (o->id == q[3]) {
                    struct V *v;
                    f32 dx, dy, dz, d;
                    if (b->flags & 8) return o;
                    v = func_001c3b70(o->w->b);
                    dx = p[0] - v->x;
                    dy = p[1] - v->y;
                    dz = p[2] - v->z;
                    d = dx * dx + dy * dy + dz * dz;
                    if (d < best) { best = d; r = o; }
                }
            }
        }
    }
    return r;
}
