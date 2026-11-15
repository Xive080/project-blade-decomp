struct V { char pad[12]; void (*fn)(struct O *); };
struct O { s32 f; char pad[8]; struct V *v; };
extern char D[];
extern u32 n;
void func(s32 m) {
    u32 i;
    char *p = D;
    for (i = 0; i < n; p += 4, i++) {
        struct O *o = *(struct O **)(p + 0xee0);
        if (o && (o->f & m)) {
            struct V *v = o->v;
            if (v && v->fn) v->fn(o);
        }
    }
}
