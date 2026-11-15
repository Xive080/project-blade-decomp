extern char *G_853C;
extern char D_00329770[];
extern int func_0013a0c0(char *, char *);
extern int func_00136970(char *, char *);
extern int func_001b8fc0(char *, char *);
char *func(int fl, int u1, int a2, char *p, int a4) {
    int t = *(int *)(*(char **)(G_853C + 8) + 0x3C);
    int s0;
    int a0;
    int f;
    if (t == 0x1000) {
        if (func_0013a0c0(G_853C, p)) return 0;
    } else if (t == 0x4000 || (t == 0x800 && *(int *)(*(char **)(G_853C + 8) + 0x558))) {
        if (func_00136970(G_853C, p)) return 0;
    }
    if (!a2) return 0;
    f = *(int *)p;
    if (f == 0x800000) {
        (*(int (**)(char *, char *, int, int))(*(char **)(p + 0xC) + 0x20))(p, G_853C, 1, a2);
        return 0;
    }
    if (fl & 2) {
        s0 = 1;
        a0 = 0;
        switch (f) {
        case 0x40000:
            if (*(int *)(p + 0x3C) == 2 || *(int *)(p + 0x3C) == 4) a0 = 1;
            break;
        case 0x80000:
            if (*(int *)(p + 0x3C) == 2) a0 = 1;
            break;
        case 0x200000:
            if (*(int *)(p + 0x3C) == 0x40 || *(int *)(p + 0x3C) == 2) a0 = 1;
            break;
        }
        if (a0 && *(char **)(p + 0xCC) && (*(int *)(*(char **)(p + 0xCC) + 0x18) & 8)) {
            s0 = 0;
            if ((*(int *)(*(char **)(G_853C + 8) + 0x3C) & 0x3A800) || *(float *)(G_853C + 0x5C) != 0.0f || !func_001b8fc0(D_00329770, p)) s0 = 1;
        }
        if (s0) {
            if (!(*(int (**)(char *, char *, int, int))(*(char **)(p + 0xC) + 0x20))(p, G_853C, 0, a4)) return 0;
        }
        if (*(int *)(*(char **)(G_853C + 8) + 0x3C) & 0x3A000) return 0;
    } else if (fl & 4) {
        (*(int (**)(char *, char *, int, int))(*(char **)(p + 0xC) + 0x20))(p, G_853C, 1, a2);
        return 0;
    }
    if (*(int *)(*(char **)(G_853C + 8) + 0x3C) & 0x3A000) return 0;
    return p;
}
