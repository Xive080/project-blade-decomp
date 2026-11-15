struct V { float x, y, z; };
struct Obj { char pad0[24]; float p[3]; };
struct Dir { char pad[16]; float d[3]; };
struct Info { char pad[44]; float k; float lim; float s; void *h; int (*fn)(void *, int, int, int, int); void *h2; };
extern void f180090(float *, struct Info *, struct Dir *, int, int);

struct W { char pad[264]; void *w; };
extern void f1ce3f0(float *, float *, int, struct Dir *);
extern int f17e1d0(void *, float *, float *, float *, float *, void **, void *, void *);
void f(float *o, struct Info *info, struct Dir *dir, int (*cb)(float *, float *, float *, int), int arg) {
    struct { float hit[3]; float dd[3]; void *h; } L;
    float pos[4];
    float end[4];
    float e[4];
    float dist;
    char *b;
    *(struct V *)pos = *(struct V *)((struct Obj *)o)->p;
    f1ce3f0(pos, pos, 1, dir);
    end[0] = -10.0f * dir->d[0];
    end[1] = -10.0f * dir->d[1];
    end[2] = -10.0f * dir->d[2];
    end[0] = end[0] + pos[0];
    end[1] = end[1] + pos[1];
    end[2] = end[2] + pos[2];
    b = (char *)0x70003ed0;
    if (f17e1d0(*(void **)(b + 264), pos, end, L.hit, L.dd, &L.h, ((void **)info)[14], ((void **)info)[16]) == 0) return;
    e[0] = pos[0] - L.hit[0];
    e[1] = pos[1] - L.hit[1];
    e[2] = pos[2] - L.hit[2];
    dist = e[0] * e[0] + e[1] * e[1] + e[2] * e[2];
    asm { sqrt.s dist, dist }
    if (cb) { if (cb(o, e, L.hit, arg) == 0) return; }
    if (!(dist < info->lim)) return;
    dist = info->lim * info->s - dist;
    if (dist <= 0.0f) return;
    e[0] = dir->d[0] * (dist * info->k);
    e[1] = dir->d[1] * (dist * info->k);
    e[2] = dir->d[2] * (dist * info->k);
    o[0] = o[0] + e[0];
    o[1] = o[1] + e[1];
    o[2] = o[2] + e[2];
    if (info->fn) { if (info->fn(L.h, 0, 0, 0, 0) == 0) return; }
    f180090(o, info, dir, 0, 0);
}
