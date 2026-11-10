struct T;
struct O { char pad[0x1c]; void (*fn)(struct O *, s32, struct T *); char pad2[8]; s32 on; };
struct T { char pad[0x2c]; struct O *o[1]; };
extern struct T *G_89F0;
void func(s32 i, s32 b) {
    struct T *t = G_89F0;
    struct O *o = t->o[i];
    if (o->on != 0) {
        o->fn(o, b, t);
    }
}
