struct V4 { f32 a, b, c, d; };
struct V2 { f32 a, b; };
struct V3 { f32 a, b, c; };
extern char D_002E03E0[];
extern char *func_0018ba00(char*, char*);
extern char *func_0018ba60(char*, char*);
extern char *func_0018bad0(char*, char*);
extern void func_0018bb30(char*, s32, s32);
char *func(char *a, char *b, s32 idx, s32 d, s32 e, s32 f) {
    char *n = (char*)(*(s32*)(b + 132) + idx * 20);
    char *p = *(char**)(n + 16);
    char *v, *r;
    s32 k;
    char *w, *q;
    q = n + 12;
    if (p == 0) {
        v = func_0018bad0(q, p);
    } else {
        for (;;) {
            if (*(s32*)(p + 132) <= e) { v = func_0018ba60(q, p); break; }
            r = *(char**)(p + 4);
            if (r == 0) { v = func_0018ba00(q, p); break; }
            p = r;
        }
    }
    w = v + 8;
    *(f32*)(v + 64) = *(f32*)(a + 4);
    *(struct V4*)(v + 20) = *(struct V4*)(a + 8);
    *(struct V4*)(v + 36) = *(struct V4*)(a + 24);
    *(struct V2*)(v + 52) = *(struct V2*)(a + 40);
    *(f32*)(v + 60) = *(f32*)(a + 48);
    *(struct V4*)(v + 68) = *(struct V4*)(v + 20);
    *(struct V4*)(v + 84) = *(struct V4*)(v + 36);
    *(struct V4*)(v + 100) = *(struct V4*)(v + 52);
    *(s32*)(v + 116) = f;
    *(char**)(v + 120) = b;
    *(s32*)(v + 124) = idx;
    *(s32*)(v + 128) = d;
    *(s32*)(v + 132) = e;
    k = *(s32*)a;
    *(struct V3*)(v + 136) = *(struct V3*)(D_002E03E0 + k * 12);
    func_0018bb30(w, *(s32*)(b + 116), k);
    return w;
}
