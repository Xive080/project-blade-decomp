struct S { char pad0[36]; unsigned flags; char pad1[56]; float a; float b; int c; float d; float e; float f; };
void f(struct S *s, int c, float a, float b, float d, float e, float f) {
    s->flags |= 0x10;
    s->a = a;
    s->b = b;
    s->c = c;
    s->d = d;
    s->e = e;
    s->f = f;
}
