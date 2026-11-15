extern int G_8538;
extern char *G_853C;
extern char *func_001c3b70(int);
char *func(int u0, int u1, int u2, char *p) {
    char *a0 = *(char **)(G_853C + 8);
    int s0 = (*(int (**)(char *))(*(char **)(a0 + 0xC) + 0x18))(a0);
    int s2 = (*(int (**)(char *))(*(char **)(p + 0xC) + 0x18))(p);
    char *r0;
    char *r1;
    int f;
    if (s0) r0 = func_001c3b70(s0); else r0 = 0;

    r1 = s2 ? func_001c3b70(s2) : 0;
    f = *(int *)p;
    if (f & 0x200000) {
        return 0;
    } else if ((f & 0x80000) || (f & 0x800000)) {
        if (*(int *)(*(char **)(p + 0xCC) + 0x18) & 0xA) return 0;
    } else if ((f & 0x40000) && r0 && r1 && (*(float *)(r0 + 0x34) - *(float *)(r1 + 0x34)) < 3.0f) {
        G_8538 += 1;
    }
    return p;
}
