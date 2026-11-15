struct S { int pad[3]; int flags; float x; float y; float nx; int z; };
struct O { int pad[10]; struct S *s; };
struct G { int pad[48]; int en; };
extern struct G *G_8AF0;
void func(struct O *o, int b, float x, float y) {
    struct S *s = o->s;
    s->x = x;
    s->y = y;
    s->flags |= 1;
    if (G_8AF0->en != 0 && b == 0) {
        s = o->s;
        s->nx = -1.0f;
        s->z = 0;
        s->flags |= 2;
    }
}
