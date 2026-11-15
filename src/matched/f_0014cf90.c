struct Sub { char pad[2]; char fl; };
struct Ent { s32 w0; char pad[0x1c]; struct Sub *s; };
struct O {
    char p0[0x10]; s32 flags;
    char p1[0x28]; s32 f3c;
    char p2[0x70]; s32 fb0;
    char p3[0x398]; struct Ent *e;
    char p4[0xe70c]; s32 v5c; s32 v60p; s32 v64; s32 v68;
};
extern void F12e8d0(s32, void *, s32);
extern void F17a2c0(void);
extern void F1b8d30(s32);
extern void F221820(s32, f32);
s32 f(struct O *o0) {
    struct O *o = (struct O *)((s32)o0);
    struct { s32 a; unsigned char b; unsigned char c; } t;
    if (o0->flags & 4) {
        o0->flags &= ~4;
        F17a2c0();
        F1b8d30(o->v5c);
    }
    if (o->f3c & 0x340000) {
        o->e->s->fl &= ~4;
    } else {
        o->e->s->fl |= 4;
    }
    F12e8d0(2, (void*)o->fb0, 0);
    t.a = o->e->w0;
    t.b = 255; t.c = 255;
    F12e8d0(3, &t, 0);
    t.a = o->v5c;
    t.b = 255; t.c = 255;
    F12e8d0(3, &t, 0);
    F12e8d0(5, (void*)o->v68, 0);
    F12e8d0(5, (void*)o->v64, 0);
    F221820(((s32*)o->v60p)[1], 1.0f);
    return 1;
}
