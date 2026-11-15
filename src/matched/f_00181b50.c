struct V { char pad[0x30]; f32 x; f32 y; f32 z; };
struct P { s32 on; char pad[0x34]; struct V *v; s32 flag; char pad2[8]; f32 t; };
struct O { char pad[0x38]; struct P *p; };
struct Q { s32 mode; char pad[0x42c]; struct O *list[10]; s32 n; };
extern struct P *g_player;
extern struct Q *g_q;
struct O *f(struct O *o) {
    struct P *p = o->p;
    if (p && p->on) {
        s32 fl = p->flag;
        if (fl) {
            if (fl && g_player->flag) {
                return o;
            }
            {
                struct V *a = p->v;
                struct V *b = g_player->v;
                f32 dx = a->x - b->x;
                f32 dy = a->y - b->y;
                f32 dz = a->z - b->z;
                if (dx * dx + dy * dy + dz * dz < 25.0f) {
                    if (fl) {
                        struct Q *q;
                        p->flag = 0;
                        { f32 t = *(f32 *)0x70003fb0; p->t = t + 10.0f; }
                        q = g_q;
                        if (q->mode == 0x80000) {
                            if (q->n < 10) {
                                q->list[q->n] = o;
                                q->n++;
                            }
                        }
                    }
                }
            }
        }
    }
    return o;
}
