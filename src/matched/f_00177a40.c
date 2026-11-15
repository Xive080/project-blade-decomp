struct E { char p[16]; s32 v; };
struct O { u32 n; struct E *e; void (*fn)(s32); };
struct G { char pad[0x134]; void (*f)(struct O *); };
extern char D[];
void f(struct O *o) {
    u32 i;
    s32 off;
    if (o != 0) {
        i = 0;
        off = 0;
        for (; i < o->n; off += 20, i++) {
            s32 a = *(s32 *)((char *)o->e + off + 16);
            if (a != 0) o->fn(a);
        }
        ((struct G *)D)->f(o);
    }
}
