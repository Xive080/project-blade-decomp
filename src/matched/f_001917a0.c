struct S { char pad[0x14]; char *p14; char *p18; char pad2[4]; u16 n; };
extern struct S *G;
extern void f186e30(void *);
void func(struct S *s) {
    u32 i;
    s32 off;
    G = s;
    i = 0;
    off = 0;
    for (; i < s->n; i++) {
        void **o = *(void ***)((char *)s->p18 + off);
        if (((void **)o)[3] != 0) ((void (*)(void *))((void **)o)[3])(o);
        off += 4;
    }
    f186e30(s->p14);
    G = 0;
}
