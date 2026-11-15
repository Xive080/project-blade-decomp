extern int G;
struct S { char pad[2]; unsigned char b; };
int f(int a) {
    int r = 0;
    struct S *p = *(struct S **)(a + G);
    r += 4;
    if (p == 0) { return r; }
    if ((p->b & 0x1f) == 0) r += 136;
    return r;
}
