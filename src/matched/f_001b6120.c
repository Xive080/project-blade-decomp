extern void f11ec80(char *, int, int);
extern void f121a58(char *, int);
extern int f13b550(int, int);
extern float D2E36D0[];
extern int G8328;
void func(char *base) {
    unsigned int i, j;
    char *p;
    float *q = D2E36D0;
    for (i = 0; i < 7; i++) {
        float a = *q;
        float b = 0.1f * a;
        p = base + 0x4c;
        for (j = 0; j < 8; j++) {
            if (G8328 != 0) f121a58(p, f13b550(G8328, j + 0x179));
            else *p = 0;
            *(float *)(p + 16) = a - b * (float)j;
            f11ec80(p + 20, 0, 8);
            p += 28;
        }
        q++;
        base += 224;
    }
}
