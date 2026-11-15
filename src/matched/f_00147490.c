#pragma mpwc_relax on
void func_001450e0(int *, char *);
float func_00147620(int *, char *);
char *func_00147b70(int *, char *);
char *func_00147c60(int *, char *);
char *func_00147e20();
struct N { char pad[12]; float f; };

int func(int *arg0) {
    float acc;
    char *s1, *s2, *s3, *v0, *s1b, *s3b;
    acc = 0.0f;
    if (arg0 == 0) return 0;
    s1 = func_00147e20();
    if (s1 == 0) return 0;
    if (arg0 != 0 && s1 != 0) {
        ((struct N *)s1)->f = 0;
        if (*arg0 & 4) {
            s3 = func_00147c60(arg0, s1);
            s2 = func_00147b70(arg0, s1);
            func_001450e0(arg0, s1);
            func_001450e0(arg0, s3);
            func_001450e0(arg0, s2);
        }
    }
    if (s1 != 0) {
        do {
            v0 = func_00147b70(arg0, s1);
            if (v0 != 0) {
                acc += func_00147620(arg0, s1);
                if (arg0 != 0 && v0 != 0) {
                    ((struct N *)v0)->f = acc;
                    if (*arg0 & 4) {
                        s3b = func_00147c60(arg0, v0);
                        s1b = func_00147b70(arg0, v0);
                        func_001450e0(arg0, v0);
                        func_001450e0(arg0, s3b);
                        func_001450e0(arg0, s1b);
                    }
                }
            }
            s1 = v0;
        } while (v0 != 0);
    }
    return 1;
}
