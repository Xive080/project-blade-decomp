struct A { u32 n; char *b; void (*fn)(s32); };
struct G { char pad[0x134]; void (*f)(struct A *); };
extern char D[];
s32 func(struct A *a) {
    u32 i;
    s32 off;
    if (a == 0) return 0;
    for (i = 0, off = 0; i < a->n; i++) {
        s32 x = *(s32 *)(a->b + off + 16);
        if (x != 0) a->fn(x);
        off += 20;
    }
    ((struct G *)D)->f(a);
    return 1;
}
