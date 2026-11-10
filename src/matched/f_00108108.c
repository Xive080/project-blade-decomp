struct S { char pad[0xe8]; s32 v; };
struct T { char pad[0x40]; struct S *s; };
s32 func(struct T *p, s32 arg1) {
    s32 ret = p->s->v;
    p->s->v = arg1;
    return ret;
}
