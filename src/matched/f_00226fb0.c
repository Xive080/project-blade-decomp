extern int *func_001b4b20(int);
union P { long long q; int c[2]; };
struct V { float x, y, z; };
extern union P G_8890;
extern struct V D_002E6730;
extern float D_00330A68[], D_00330A6C[], D_00330A70[];
void func(float *p) {
    union P cnt;
    struct V den;
    float *out[3];
    int i;
    float t, f;
    cnt = G_8890;
    den = D_002E6730;
    out[0] = D_00330A68;
    out[1] = D_00330A6C;
    out[2] = D_00330A70;
    for (i = 0; i < 3; i++) {
        t = p[14 + i] / ((float*)&den)[i];
        f = t >= 0.0f ? t : -t;
        if (!(f <= 0.01f)) {
            cnt.c[t < 0.0f ? 0 : 1]++;
            *out[i] = t;
        }
    }
    if (cnt.c[0] != cnt.c[1]) {
        if (cnt.c[0] > cnt.c[1]) (*func_001b4b20(cnt.c[1]))++;
        else func_001b4b20(cnt.c[1])[1]++;
    }
}
