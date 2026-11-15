extern char D_0032A620[];
struct S { char pad[0x36c]; s32 d; };
struct G { char pad[0x134]; void (*f)(s32); };
void func(struct S *p) {
    u32 i;
    for (i = 0; i < 3U; i++, p = (struct S *)((char *)p + 4)) {
        if (p->d != 0) { ((struct G *)D_0032A620)->f(p->d); p->d = 0; }
    }
}
