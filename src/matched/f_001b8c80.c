extern int G;
struct B { char pad[0x40]; struct { char p[0x20]; int e[8]; } *t; };
void f(int a, int b, void (*fn)(int, void*, int, float)) {
    int i; int x; int off; struct B *s0;
    s0 = (struct B*)((a + G + 15) & -16);
    if (s0->t) {
        i = 0; off = 0;
        while (i < 8 && (x = *(int*)((char*)s0->t + off + 32)) != 0) {
            fn(x, s0, b, 1.0f);
            off += 4; i++;
        }
    }
}
