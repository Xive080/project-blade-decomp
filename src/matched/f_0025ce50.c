struct O { int a; int b; unsigned stride; float out[1]; };
struct T { int a; unsigned n; int b; float key[1]; };
float *f(struct O *o, struct T *t, float x) {
    float *prev;
    int j;
    float *dst;
    float *k;
    unsigned n;
    float r;
    int m;
    float *src;
    float *nx;
    unsigned i;
    k = t->key;
    if (!(k[0] < x)) return k + 1;
    n = t->n;
    i = 1;
    goto test;
body:
    prev = k;
    k = (float *)((char *)k + (o->stride + 4));
    if (!(k[0] < x)) goto done;
    i++;
test:
    if (i < n) goto body;
done:
    if (i == n) return k + 1;
    r = (x - prev[0]) / (k[0] - prev[0]);
    m = o->stride >> 2;
    src = prev + 1;
    nx = k + 1;
    dst = o->out;
    for (j = 0; j < m; j++) {
        float a = *src++;
        float d = *nx++ - a; *dst++ = a + d * r;
    }
    return o->out;
}
