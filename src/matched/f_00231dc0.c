typedef struct { float x, y, z, w; } V4;
typedef struct { char pad[32]; V4 v; } S;
void f(S *s, V4 *p) {
    s->v = *p;
}
