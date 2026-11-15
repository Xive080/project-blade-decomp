extern void f1(char *, char *);
extern void f2(int);
extern void f3(char *, void *, int);
extern void f4(void *, char *);
void func(char *o) {
    int t[8];
    float k = 0.003921569f;
    float m = 0.4f;
    float n = 1.8f;
    f1(o + 80, o + 128);
    *(float *)(o + 128) = *(float *)(o + 128) * k;
    *(float *)(o + 132) = *(float *)(o + 132) * k;
    *(float *)(o + 136) = *(float *)(o + 136) * k;
    *(float *)(o + 112) = m * *(float *)(o + 128);
    *(float *)(o + 116) = m * *(float *)(o + 132);
    *(float *)(o + 120) = m * *(float *)(o + 136);
    *(float *)(o + 128) = *(float *)(o + 128) * n;
    *(float *)(o + 132) = *(float *)(o + 132) * n;
    *(float *)(o + 136) = *(float *)(o + 136) * n;
    f2(*(int *)(o + 188));
    if (*(int *)0x70003FC0 & 4) {
        f3(o, t, 0);
        f4(t, o + 112);
    }
}
