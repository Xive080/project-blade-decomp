struct V { float x, y, z; };
struct Vt { char pad[24]; int (*fn)(int); };
struct Sub { char pad0[24]; struct V a; struct Sub2 *b; };
struct Sub2 { char pad[32]; struct V a; };
struct Ob { char pad0[8]; int h; struct Sub *s; char pad1[0xC8 - 0x10]; float k; float m; char pad2[0xE0 - 0xD0]; char e0[16]; char f0[16]; struct V p; };
struct Tg { char pad[48]; struct V p; };
extern struct Vt *fa(void);
extern struct Tg *fb(int);
extern void fc(int);
extern void fd(struct Tg *, void *, void *, int, int, float);
extern void fe(int, int, int);
extern int D70003FD8;
float f(struct Ob *o) {
    int h;
    struct Tg *t;
    float dx, dy, dz, d;
    h = fa()->fn(o->h);
    t = fb(h);
    dx = o->p.x - t->p.x;
    dy = o->p.y - t->p.y;
    dz = o->p.z - t->p.z;
    d = dx * dx + dy * dy + dz * dz;
    if (d != 0.0f) {
        float k = o->k;
        dx *= k;
        t->p.x = t->p.x + dx;
        dy *= k;
        t->p.y = t->p.y + dy;
        dz *= k;
        t->p.z = t->p.z + dz;
    }
    {
        float sc = *(float *)0x70003FA8;
        fd(t, o->f0, o->e0, 1, 0, o->m * sc);
    }
    fc(h);
    o->s->a = t->p;
    o->s->b->a = t->p;
    fe(*(int *)0x70003FD8, o->h, 0);
    return d;
}
