typedef struct { int pad0[2]; unsigned flags; } A;
typedef struct { int p0[3]; int n; float t; float u; } B;
int f(A *a, B *b, int k, int *c) {
    unsigned fl;
    if (b->n > 0 || b->t > 0.0f) {
        fl = a->flags;
        if ((fl & 1) && k == 2) {
            b->n = 0; b->t = 0.0f; b->u = 0.0f;
        } else if ((fl & 2) && k == 4) {
            if (c[3] != 0) { b->n = 0; b->t = 0.0f; b->u = 0.0f; }
        } else if ((fl & 4) && k == 4) {
            float d = b->u - *(float*)c;
            b->u = d;
            if (d <= 0.0f) { b->n = 0; b->t = 0.0f; b->u = 0.0f; }
        }
    }
    return 0;
}
