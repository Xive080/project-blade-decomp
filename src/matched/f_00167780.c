extern char *f1c3b70(int);
struct V { int p[6]; int (*f)(void *); };
struct B { int pad[3]; struct V *vt; };
struct T { char pad[16]; float a, b, c; char pad2[20]; float x, y, z; };
struct O { char pad[140]; struct B *b; struct T *t; char pad2[12]; float x, y, z; };
int func(struct O *o) {
    struct T *v;
    struct B *b;
    if (o != 0) {
        b = o->b;
        if (b != 0) goto go;
    }
    return 0;
go:
    if (o->t != 0) {
        v = (struct T *)((char *)o->t + 80);
    } else {
        v = (struct T *)f1c3b70(b->vt->f(b));
    }
    o->x = 0.4f * v->a;
    o->y = 0.4f * v->b;
    o->z = 0.4f * v->c;
    o->x = o->x + v->x;
    o->y = o->y + v->y;
    o->z = o->z + v->z;
    return 1;
}
