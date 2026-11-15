struct O { char pad[24]; void (*fn)(struct O *); char pad2[12]; s32 on; };
struct G { char pad[40]; u32 n; struct O *t[1]; };
extern struct G *g;
extern void sub(s32);
void f(void) {
    u32 i;
    s32 off;
    struct O *o;
    sub(*(s32 *)g);
    for (i = 0, off = 0; i < g->n; off += 4, i++) {
        o = *(struct O **)((char *)g + off + 44);
        if (o->fn) {
            if (o->on) o->fn(o);
        }
    }
}
