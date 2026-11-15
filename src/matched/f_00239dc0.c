typedef int s32;
struct V { char pad[12]; void (*fn)(struct E *, s32, s32); };
struct E { char pad[16]; struct V *vt; };
struct L { char pad[20]; s32 n; struct E **arr; };
void func(struct L *l, s32 a, s32 b) {
    s32 i;
    s32 n = l->n;
    for (i = 0; i < n; i++) {
        struct E *e = l->arr[i];
        e->vt->fn(e, a, b);
    }
}
