struct O { char p[8]; void (*fn)(void *, f32); };
struct L { char pad[0x14]; s32 a; struct O **items; char pad2[4]; u16 n; };
extern void sub(s32, f32);
extern struct L *G_84B0;
void func(struct L *l) {
    f32 d;
    u32 i;
    f32 t;
    G_84B0 = l;
    t = *(f32 *)0x70003FAC;
    if (t > 0.0f) {
        d = *(f32 *)0x70003FA8 / t;
    } else {
        d = *(f32 *)0x70003FA8;
    }
    for (i = 0; i < l->n; i++) {
        struct O *o = l->items[i];
        if (o->fn != 0) o->fn(o, d);
    }
    sub(l->a, d);
    G_84B0 = 0;
}
