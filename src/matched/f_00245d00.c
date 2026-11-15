typedef struct { float a, b, c, d; } V4;
typedef struct {
    char pad[32];
    V4 v;
    int pad2[2];
    int x, y;
} S;
void f(S *s, V4 *p) {
    s->v = *p;
    s->x = 0;
    s->y = 0;
}
