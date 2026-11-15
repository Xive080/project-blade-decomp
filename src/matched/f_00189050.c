struct V2 { float a, b; };
struct V4 { float a, b, c, d; };
struct V3 { float a, b, c; };
extern int D_002E03B0[];
extern char *func_0018bad0(int);
extern void func_0018bb30(char *, int);
char *func(char *a0, char *a1, int a2, int a3) {
    char *o = func_0018bad0(*(int *)(a1 + 0x84) + a3 * 0x14 + 4);
    char *s0 = o + 8;
    int i;
    int *dst, *src;
    float *f = (float *)a0;
    *(struct V2 *)(o + 0x28) = *(struct V2 *)(a0 + 0x14);
    *(float *)(o + 0x20) = f[3] - f[1] * *(float *)(o + 0x28);
    *(float *)(o + 0x24) = f[4] - f[2] * *(float *)(o + 0x2c);
    *(struct V4 *)(o + 0x30) = *(struct V4 *)(a0 + 0x1c);
    *(struct V4 *)(o + 0x40) = *(struct V4 *)(a0 + 0x2c);
    *(struct V3 *)(o + 0x50) = *(struct V3 *)(a0 + 0x3c);
    src = (int *)(s0 + 0x18);
    dst = (int *)(s0 + 0x54);
    for (i = 15; i > 0; i--) *dst++ = *src++;
    *(int *)(s0 + 0x90) = D_002E03B0[*(int *)a0];
    *(int *)(s0 + 0x14) = a2;
    *(char **)(s0 + 0xc) = a1;
    *(int *)(s0 + 0x10) = a3;
    func_0018bb30(s0, *(int *)(a1 + 0x74));
    return s0;
}
