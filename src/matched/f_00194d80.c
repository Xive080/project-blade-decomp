extern int g_cnt;
extern char *g_cur;
extern char pool[];
extern int f114658(int, int, void*, int);
extern void f1147c8(int);
extern int f114cf8(int, int*, int*);
extern void f121f90(void*, void*, int);
extern void f192110(void*, int, void*, void*, void*);
extern char *f192430(void*, void*, void*);

char *func(char *a, int unused, long long flags) {
    int fl = 0;
    int s1;
    int s2 = -1;
    char *e;
    long long f;
    int v1 = -1;
    int v2 = -1;
    int sp70[80];
    int sp1b0[64];
    int spb0[8];
    char *p;
    int i;
    if (g_cnt >= 3) return 0;
    f = (char)flags;
    if (f & 1) fl |= 1;
    if (f & 2) fl |= 2;
    if (f & 4) fl |= 0x200;
    s1 = *(int*)(a + 0xa0);
    i = 0; p = pool;
    do {
        if (*(int*)p == -1) { g_cnt++; e = pool + i * 0x584; break; }
        i++; p += 0x584;
        if (i >= 3) { e = 0; break; }
    } while (1);
    if (!e) return 0;
    f192110(a, unused, sp70, sp1b0, spb0);
    if (f114658(s1, 0, sp70, fl) == 0) {
        f121f90(e + 0x548, a + 0xa4, 0x20);
        f121f90(e + 0x448, sp1b0, 0x100);
        f121f90(e + 0x428, spb0, 0x20);
        *(int*)(e + 0x578) = 0;
        *(int*)(e + 0x580) = 0;
        *(int*)(e + 0x56c) = 0;
        if (*(int*)(a + 0x1e8) == 0) { g_cur = e; return e; }
        if (f114cf8(0, &v1, &v2) > 0 && v1 == 2 && v2 >= 0) s2 = v2;
        if (s2 >= 0) {
            char *r;
            *(int*)e = s2;
            r = f192430(a, sp70, spb0);
            if (r) {
                *(int*)(e + 0x574) = *(int*)(r + 0x10);
                *(int*)(e + 0x408) = *(unsigned short*)(r + 0xe);
                *(int*)(e + 0x40c) = *(unsigned char*)(r + 0xd);
                *(int*)(e + 0x410) = *(unsigned char*)(r + 0xc);
                *(int*)(e + 0x414) = *(unsigned char*)(r + 0xb);
                *(int*)(e + 0x418) = *(unsigned char*)(r + 0xa);
                *(int*)(e + 0x41c) = *(unsigned char*)(r + 9);
                *(int*)(e + 0x420) = -1;
                *(int*)(e + 0x424) = -1;
            } else {
                g_cnt--;
                f1147c8(s2);
                f114cf8(0, &v1, &v2);
                return 0;
            }
            if (f & 8) ((void(*)(void*,void*,int,int,int))*(void**)(a + 0x18))(a, e, 0, 3, 1);
            return e;
        }
    }
    g_cnt--;
    return 0;
}
