extern void func_001ff7d0(void *, float);
struct Rec { char pad0[4]; int n; char pad1[0x34]; int stride; char pad2[0x18]; };
struct V3 { float a, b, c; };
struct V4 { float a, b, c, d; };
struct E { char pad[8]; struct V4 p; struct V3 q; };
struct Ent { char pad[0x4a4]; };
extern struct Ent D_003034D0[];
extern struct Ent *G_8030;
struct Obj {
    char pad0[8];
    int idx;
    char pad1[4];
    unsigned int flags;
    char pad2[0x4ac];
    struct Rec *a;
    struct Rec *b;
    struct Rec *c;
    char pad3[0x74];
    int state;
};
int func(struct Obj *o, int s) {
    if (o->state == s) return 0;
    G_8030 = &D_003034D0[o->idx];
    o->state = s;
    switch (o->state) {
    case 4: {
        int i;
        func_001ff7d0(o->b, 0.0f);
        func_001ff7d0(o->c, 0.0f);
        for (i = 0; i < o->a->n; i++) {
            struct E *d = (struct E *)((char *)(o->a + 1) + i * o->a->stride);
            struct E *s2 = (struct E *)((char *)(o->c + 1) + i * o->c->stride);
            struct E *s1 = (struct E *)((char *)(o->b + 1) + i * o->b->stride);
            d->p = s1->p;
            d->q = *(struct V3 *)&s2->p;
        }
        o->flags |= 0x100000;
        o->flags &= ~0x200000;
        break;
    }
    case 5:
    default:
        o->flags &= ~0x100000;
        o->flags &= ~0x200000;
        break;
    }
    return 1;
}
