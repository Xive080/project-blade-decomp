struct VT { char pad[0x10]; s32 (*f10)(void *, s32); void (*f14)(void *, s32, s32); };
struct B { char pad[0xc]; struct VT *vt; u32 flags; char pad2[0x28]; s32 v3c; char pad3[0x504]; s32 v544; };
struct A { char pad[8]; struct B *x; };
struct MVT { char pad[0x10]; void (*f10)(void *, void *, s32, s32); };
struct M { struct MVT *vt; };
s32 f(struct A *o, s32 n) {
    struct B *b;
    struct M *m;
    o->x->v544 = n;
    if (n < 9) {
        o->x->flags |= 0x1000;
        o->x->flags &= 0xFFFE1FFF;
    } else if (n < 18) {
        o->x->flags |= 0x2000;
        o->x->flags &= 0xFFFE2FFF;
    } else if (n < 22) {
        o->x->flags |= 0x4000;
        o->x->flags &= 0xFFFE4FFF;
    } else if (n < 26) {
        o->x->flags |= 0x8000;
        o->x->flags &= 0xFFFE8FFF;
    } else {
        o->x->flags |= 0x10000;
        o->x->flags &= 0xFFFF0FFF;
    }
    b = o->x;
    if (b->v3c != 0x800) {
        if (!(b->flags & 2) && b->vt->f10(b, 0x800) != 0) {
            b->vt->f14(b, 0x800, 0);
        }
    }
    m = *(struct M **)0x70003FCC;
    m->vt->f10(m, o, 5, n);
    return 1;
}
