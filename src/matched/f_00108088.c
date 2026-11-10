struct S{char pad[0x70]; int a; int pad2; u64 b;};
struct T{char pad[0x40]; struct S *s;};
struct S *func(struct T *p, u64 a1){
    struct S *s = p->s;
    s->b = a1;
    s->a = 1;
    return s;
}
