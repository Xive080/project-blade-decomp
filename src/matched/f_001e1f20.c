extern long long G_8640;
extern long long G_86F0;
extern int G_86F8;
extern int G_8748;
extern struct S { char pad[12]; int fl; } *G_86E4;
extern char D_0032ECB0[];
void f_001f3c30(void);
void f_001f4700(void);
void f_001df5a0(void *, int, int);
int func(int a, int b) {
    int t; long long v; long long *p = &G_86F0;
    v = *(volatile long long *)p;
    if (v != 0) { G_8640 = v; *p = 0; G_86F8 = 0; }
    f_001f3c30();
    t = G_8748;
    G_8748 = t + 1;
    f_001df5a0(D_0032ECB0, t, b);
    if (G_86E4->fl & 8) {
        f_001f4700();
    }
    return 1;
}
