struct S{char pad[0xf0]; u64 b; int a;};
struct T{char pad[0x40]; struct S *s;};
int func(struct T *p, u64 a1){
    struct S *s = p->s;
    s->a = 1;
    s->b = a1;
    return 1;
}
