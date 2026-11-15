typedef float f32;
typedef int s32;
struct Vtx { f32 f[8]; };
struct Out { struct Vtx v[6]; s32 count; s32 mode; };

void f(f32 *p, f32 *d, struct Vtx *v, s32 n, s32 full, struct Out *o) {
    f32 s[8];
    s32 i, cnt = 0;
    struct Vtx *cur;
    struct Vtx *out;
    cur = v;
    for (i = 0; i < n; cur++, i++) {
        f32 a = cur->f[0] - p[0];
        f32 b = cur->f[1] - p[1];
        s[i] = a * d[1] - b * d[0];
        if (!(s[i] < 0.0f)) cnt++;
    }
    if (cnt == 0) { o->mode = 2; return; }
    if (cnt == n) { o->mode = 0; return; }
    o->mode = 1;
    s[n] = s[0];
    cur = v;
    out = o->v;
    o->count = 0;
    for (i = 0; i < n; cur++, i++) {
        struct Vtx *nxt;
        if (!(s[i] < 0.0f)) {
            *out = *cur;
            o->count++;
            out++;
        }
        if ((!(s[i] < 0.0f) && s[i + 1] < 0.0f) || (s[i] < 0.0f && !(s[i + 1] < 0.0f))) {
            f32 t, ex, ey;
            nxt = (i == n - 1) ? v : cur + 1;
            ex = nxt->f[0] - cur->f[0];
            ey = nxt->f[1] - cur->f[1];
            t = s[i] / (ey * d[0] - ex * d[1]);
            out->f[0] = cur->f[0] + t * ex;
            out->f[1] = cur->f[1] + t * ey;
            out->f[2] = cur->f[2] + t * (nxt->f[2] - cur->f[2]);
            out->f[3] = cur->f[3] + t * (nxt->f[3] - cur->f[3]);
            out->f[4] = cur->f[4] + t * (nxt->f[4] - cur->f[4]);
            out->f[5] = cur->f[5] + t * (nxt->f[5] - cur->f[5]);
            if (full) {
                out->f[6] = cur->f[6] + t * (nxt->f[6] - cur->f[6]);
                out->f[7] = cur->f[7] + t * (nxt->f[7] - cur->f[7]);
            }
            o->count++;
            out++;
        }
    }
}
