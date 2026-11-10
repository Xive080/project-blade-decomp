struct S{char pad[0x94]; int a; int b; int c;};
struct T{char pad[0x40]; struct S *s;};
struct S *func(struct T *p, int a1, int a2, int a3){
    struct S *s = p->s;
    s->c = a3;
    s->a = a1;
    s->b = a2;
    return s;
}
