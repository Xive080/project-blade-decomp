extern char b10[], b14[], b18[], b1c[], b20[], b24[], b28[], b2c[], b30[], b08[], b00[];
extern void func_00175390(char *, int);
extern void func_001765e0(char *, int, void *);
extern int func_00256438(float);
void f(int a) {
    int o = a * 52;
    char *id = (char *)(int)a;
    int *p;
    float *q;
    float z = 0.0f;
    *(int *)(b1c + o) = 0;
    p = (int *)(b10 + o);
    if (*p != 0) {
        func_00175390(id, 0);
        *p = 0;
    }
    *(int *)(b20 + o) = 0;
    q = (float *)(b18 + o);
    if (z != *q) {
        if (*(int *)(b08 + o) != 0) {
            *(int *)(b2c + o) = 2;
            *(int *)(b30 + o) = func_00256438(255.0f * (z * *(float *)(b14 + o)));
            func_001765e0(id, 3, b00 + o + 44);
        }
        *q = 0.0f;
    }
    *(int *)(b24 + o) = 0;
    *(int *)(b28 + o) = 0;
}
