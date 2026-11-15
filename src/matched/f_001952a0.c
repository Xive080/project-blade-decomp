extern float func_001c2210(void*);
extern char D[];
struct G { char pad[0x130]; void* (*alloc)(int); };
typedef struct { unsigned char r, g, b, a; } C4;
typedef struct { float x, y; C4 col; float inv; int u, v; } R;
R* f(void* a0, C4* c, float* p) {
    R* o;
    o = ((struct G*)D)->alloc(24);
    if (o) {
        o->x = p[0] * 0.0052083335f;
        o->y = p[1] * 0.0052083335f;
        o->col = *c;
        o->inv = 1.0f / func_001c2210(a0);
        o->u = 0;
        o->v = 0;
        return o;
    }
    return 0;
}
