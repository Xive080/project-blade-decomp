struct E { char pad[0x84]; char *tbl; };
struct S { char pad[12]; struct E *e; s32 cur; };
void sub(char *, char *, char *);
void f(struct S *p, s32 i) {
    char *t = p->e->tbl;
    sub(t + i * 20 + 4, (char *)p - 8, t + p->cur * 20 + 4);
    p->cur = i;
}
