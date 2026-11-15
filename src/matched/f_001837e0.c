struct T { float f[25]; };
struct A { char pad[8]; float a, b; char pad2[28]; unsigned n; };
struct VT { char pad[132]; void (*fn)(char *, struct T *, int *); };
extern void sub(struct T *);
void func(struct A *o, struct T *src, int *c) {
    struct T l;
    unsigned n;
    struct VT *v;
    l = *src;
    n = o->n;
    if (n != 0) {
        do {
            float f = (float)n;
            float x = o->a * f;
            float y = o->b * f;
            l.f[1] = src->f[1] + x;
            l.f[2] = src->f[2] + y;
            l.f[9] = src->f[9] + x;
            l.f[10] = src->f[10] + y;
            l.f[17] = src->f[17] + x;
            l.f[18] = src->f[18] + y;
            v = *(struct VT **)c;
            if (v == 0) sub(&l);
            else v->fn((char *)v + 60, &l, c + 1);
            n--;
        } while (n != 0);
    }
    v = *(struct VT **)c;
    if (v == 0) {
        sub(src);
        return;
    }
    v->fn((char *)v + 60, src, c + 1);
}
