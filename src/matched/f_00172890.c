struct S { char pad[0x3A8A10]; int a; int b; char pad2[0xC8]; char e[0x150]; int c; };
extern struct S *G_8410;
extern int func_0011eac8(int, char *, int);
extern void func_001c8470(void *);
extern int func_001c8860(void *, int, int);

struct B { int *p; char pad[0x9c]; unsigned n0; unsigned n1; };

int func(void) {
    unsigned spA0;
    unsigned spB0;
    struct B *spC0;
    int spD0;
    int s0, s1, s2, s3;
    char *s4, *s5;
    int s6, v1;
    int **s8;

    G_8410->c = 1 - G_8410->c;
    spC0 = (struct B *)(G_8410->e + G_8410->c * 0xA8);
    spC0->n0 = (G_8410->a + 127) / 128;
    spC0->n1 = (G_8410->b + 63) / 64;
    spB0 = 0;
    spD0 = 0;
    s8 = (int **)spC0;
    s3 = (*s8)[6];
    v1 = (s3 << 4) / 128;
    for (; spB0 < spC0->n1; spD0 += 0x1000, spB0++) {
        s5 = (char *)G_8410 + spD0;
        for (spA0 = 0; spA0 < spC0->n0; spA0++) {
            s2 = func_001c8860(*s8, 0, 1);
            s6 = 0;
            do {
                s0 = 0;
                do {
                    s4 = s5;
                    s1 = 0;
                    do {
                        func_0011eac8(s2, s4, 64);
                        s1++;
                        s4 += 64;
                        s2 += s3;
                    } while (s1 < 16);
                    s0 += 16;
                    s5 += 1024;
                } while (s0 < 64);
                s5 += ((G_8410->b) / 16 - 4) << 10;
                s6 += 16;
                s2 += v1 - (s3 << 6);
            } while (s6 < 128);
            func_001c8470(*s8);
            s8 += 1;
        }
    }
    return 1;
}
