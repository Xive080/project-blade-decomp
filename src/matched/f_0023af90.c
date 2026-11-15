typedef struct { float x, y, z, w; } V4;
typedef struct { char pad[32]; V4 v; float e; } S;
typedef struct { V4 v; float e; } P;
void f(S *s, P *p) {
    s->v = p->v;
    s->e = p->e;
}
