extern float func_001477c0(int *, void *);
extern int *func_00147910(int *, float *, int);
extern float *func_00147b70(int *, void *);
extern void *func_00147e20(int *);
extern void func_00147f30(int *, void *);
extern void func_00148620(int *);
extern float func_001ce240(float *);
extern int G_8368;
extern int G_836C;
struct Vt { char pad[0x134]; void (*fn)(int *); };
extern char D_0032A620[];
float func(int *a, float *b) {
    float r;
    float d[3];
    float *t;
    void *n;
    void *s;
    int *o;
    if (a == 0 || b == 0) return -1.0f;
    t = func_00147b70(a, b);
    if (t == 0) return -1.0f;
    if (*a & 1) {
        d[0] = t[0] - b[0];
        d[1] = t[1] - b[1];
        d[2] = t[2] - b[2];
        r = func_001ce240(d);
    } else {
        o = func_00147910(a, b, 0);
        if (o == 0) return 0.0f;
        G_836C = 0;
        r = func_001477c0(o, func_00147e20(o));
        if (o == (int *)G_8368) {
            if (o != 0) {
                s = func_00147e20(o);
                if (s != 0) {
                    do {
                        n = s;
                        s = func_00147b70(o, s);
                        func_00147f30(o, n);
                    } while (s != 0);
                }
            }
        } else if (o != 0) {
            if (!(*o & 8)) func_00148620(o);
            ((struct Vt *)D_0032A620)->fn(o);
        }
    }
    return r;
}
