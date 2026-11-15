extern char *func_00147e20();
extern char *func_00147b70(int *, char *);
extern char *func_00147c60(int *, char *);
extern void func_001450e0(int *, char *);
int func(int *a, float f) {
    char *p;
    char *n1;
    char *n2;
    float t;
    if (a == 0) return 0;
    p = func_00147e20();
    if (p != 0) {
        do {
            t = *(float *)(p + 12) * f;
            if (a != 0) {
                if (p != 0) {
                    *(float *)(p + 12) = t;
                    if (*a & 4) {
                        n2 = func_00147c60(a, p);
                        n1 = func_00147b70(a, p);
                        func_001450e0(a, p);
                        func_001450e0(a, n2);
                        func_001450e0(a, n1);
                    }
                }
            }
            p = func_00147b70(a, p);
        } while (p != 0);
    }
    return 1;
}
