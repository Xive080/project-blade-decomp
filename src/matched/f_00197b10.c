struct E { int mask; int active; float t; float init; float period; };
struct S { int a; int b; struct E e[1]; };
extern float G[];
int func(struct S *s, int idx, int mask, int mask2, int (*cb)(unsigned short, int), int arg, float dt) {
    struct E *e;
    unsigned flags;
    int r;
    r = 1;
    flags = 16 << idx;
    e = &s->e[idx];
    if (e->active != 0) {
        if ((s->b & mask) && !(s->b & mask2)) {
            if (e->t > 0.0f) {
                e->t = e->t - dt;
                if (e->t <= 0.0f) {
                    if (cb != 0) r = cb(flags | 2, arg);
                    if (e->period > 0.0f) {
                        e->t += e->period;
                        flags |= 2;
                        while (e->t <= 0.0f) {
                            if (r != 0 && cb != 0) r = cb(flags, arg);
                            e->t += e->period;
                        }
                    }
                }
            }
        } else {
            e->active = 0;
            if (cb != 0) r = cb(flags | 4, arg);
        }
    } else {
        if ((s->b & mask) && !(s->a & mask) && !(s->b & mask2)) {
            e->active = 1;
            e->t = e->init;
            if (cb != 0) r = cb(flags | 1, arg);
        }
    }
    e->mask = mask;
    if (e->active != 0) G[1] = G[0];
    return r;
}
