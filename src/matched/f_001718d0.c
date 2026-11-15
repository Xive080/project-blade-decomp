struct S { char pad[0x3a8c30]; int idx; };
extern struct S *D_g;
char *func(void) {
    struct S *s = D_g;
    if (s == 0) return 0;
    return (char *)s + s->idx * 168 + 0x3a8ae0;
}
