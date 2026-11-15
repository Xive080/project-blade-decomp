struct B { char pad[0x1c]; s32 a; char p2[4]; s32 b; s32 c; };
struct G { char pad[0x5d4]; s32 v1; char p[0xc]; s32 v2; };
struct M { char pad[0x24]; struct B *b; };
struct A { char pad[0x34]; struct M *m; char p[0x94]; struct G *g; };
s32 f(struct A *a, s32 idx) {
    struct B *b;
    s32 i, j;
    b = a->m->b;
    b->a = a->g->v2;
    b->b = a->g->v1;
    b->c = 0;
    for (i = 0; i < *(s32 *)((char *)(idx * 428) + (s32)a->g + 500); i++) {
        b->c = b->c << 1;
        b->c = b->c | 1;
    }
    for (j = 0; j < *(s32 *)((char *)(idx * 428) + (s32)a->g + 496); j++) {
        b->c = b->c << 1;
    }
    return 1;
}
