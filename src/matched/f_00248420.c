typedef struct { float x, y, z, w; } V;
typedef struct { float x, y, z; } V3;
struct R {
    short cap;
    unsigned short idx;
    V *pos;
    V *vel;
    char pad[128];
    float a140;
    float pad2;
    float a148;
    float a152;
};
extern int g_tbl;
void f(int off, V3 *a1, V3 *a2, float k) {
    struct R *r;
    float t;
    float s;
    r = *(struct R **)(off + g_tbl);
    t = (1.0f - k) * r->a148;
    r->pos[r->idx].w = r->a140 - t;
    s = r->a148 + (r->a140 - t);
    if (s > r->a152) r->a152 = s;
    if (t > 0.0f) {
        V *p = &r->pos[r->idx];
        V *v = &r->vel[r->idx];
        float h = 9.81f * t;
        float h2 = 4.905f * t;
        v->x = a2->x;
        v->y = a2->y + h;
        v->z = a2->z;
        p->x = a1->x - v->x * t;
        p->y = a1->y - v->y * t + h2 * t;
        p->z = a1->z - v->z * t;
    } else {
        *(V3 *)&r->pos[r->idx] = *a1;
        *(V3 *)&r->vel[r->idx] = *a2;
    }
    if (r->idx == 0) { r->idx = r->cap - 1; } else { r->idx--; }
}
