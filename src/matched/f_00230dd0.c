typedef struct B { char p[60]; float v; } B;
typedef struct A { char p0[44]; int flags; char p1[4]; float v; char p2[8]; B *b; } A;
void f(A *a, int k, float *x) {
    switch (k) {
    case 17:
        if (a->flags & 4) {
            float t = *x;
            a->v = t;
            a->b->v = t;
        }
        break;
    }
}
