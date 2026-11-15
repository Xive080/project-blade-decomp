typedef struct { char pad[36]; int flags; char pad2[36]; float a, b, c, d, e; } S;
void f(S *s, float a, float b, float c, float d, float e) {
    s->flags |= 4;
    s->a = a; s->b = b; s->c = c; s->d = d; s->e = e;
}
