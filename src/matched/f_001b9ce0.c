struct E { unsigned short m; char p[2]; int busy; char pad[104]; };
struct B { char pad[0xe08]; unsigned char c0, c1, c2, c3; };
struct C { int mask; char pad[0x300]; unsigned short *cur; char *cur2; };
extern char str[];
extern void f16f130(int, char *, void *);
extern void f15a240(int);
unsigned short *f(struct E *a, struct C *b, int n) {
    unsigned s0, cnt;
    struct E *e;
    b->cur = (unsigned short *)((char *)a + n * 0x70);
    b->cur2 = (char *)b + n * 0x18 + 4;
    if ((b->mask & *b->cur) == 0) {
        s0 = *b->cur & 0xf;
        b->mask |= s0;
        e = a;
        cnt = ((struct B *)a)->c0 + ((struct B *)a)->c1 + ((struct B *)a)->c2 + ((struct B *)a)->c3;
        for (; cnt != 0; cnt--, e++) {
            if (e->busy == 0 && (e->m & s0)) f16f130(0xac0000, str, e);
        }
        f15a240(0);
    }
    return b->cur;
}
