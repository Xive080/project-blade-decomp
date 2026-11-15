typedef struct S { char p[16]; int k; char q[40]; float a, b, c, d; } S;
int f(S *s, float a, float b, float c, float d) {
    if (s->k != 1) return 0;
    s->a = a; s->b = b; s->c = c; s->d = d;
    return 1;
}
