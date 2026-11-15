struct G { char pad[0x1d1]; u8 n; char p2; u8 f; };
extern char D[];
void g(void *);
void f(s32 a) {
    struct G *t;
    u32 i;
    char *q;
    t = (struct G *)(D + a * 468);
    for (i = 0, q = (char *)t; i < t->n; i++) {
        g(q);
        if (t->f) g(q + 232);
        q += 116;
    }
}
