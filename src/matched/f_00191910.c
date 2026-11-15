struct S { char pad[0x14]; char *p14; char *p18; char *p1c; u16 n20; u16 n22; };
extern struct S *G;
extern void f187e10(void *);
extern void f1a8d50(void *);
void func(struct S *s) {
    u16 i;
    s32 off;
    s32 off2;
    u16 j;
    G = s;
    f187e10(s->p14);
    i = 0;
    off = 0;
    for (; i < s->n22; i++) {
        f1a8d50(s->p1c + off);
        off += 116;
    }
    j = 0;
    off2 = 0;
    for (; j < s->n20; j++) {
        void **o = *(void ***)((char *)s->p18 + off2);
        ((void (*)(void *))o[1])(o);
        off2 += 4;
    }
    G = 0;
}
