struct S { char pad[0x14]; char *p14; char *p18; char *p1c; u16 n20; u16 n22; };
struct O { char pad[16]; void (*fn)(void *); };
extern struct S *G;
extern void f188020(void *);
extern void f1a9780(void *);
void func(struct S *s) {
    u16 i;
    s32 off;
    s32 off2;
    u16 j;
    G = s;
    i = 0;
    off = 0;
    for (; i < s->n22; i++) {
        f1a9780(s->p1c + off);
        off += 116;
    }
    j = 0;
    off2 = 0;
    for (; j < s->n20; j++) {
        struct O *o = *(struct O **)((char *)s->p18 + off2);
        if (o->fn) o->fn(o);
        off2 += 4;
    }
    f188020(s->p14);
    G = 0;
}
