extern char *func_001c3b70(int);
extern float func_001ce160(float *, float *);
int func(float *a) {
    float v[3];
    float d;
    int r;
    char *t = func_001c3b70(*(int *)(*(char **)0x70003fe0 + 0x68));
    float x = a[0];
    v[0] = x - *(float *)(t + 0x30);
    v[1] = a[1] - *(float *)(t + 0x34);
    v[2] = a[2] - *(float *)(t + 0x38);
    d = func_001ce160(v, v);
    if (!(d <= 80.0f)) return 0;
    if (d < 0.75f) return 0;
    {float dd = (v[0] * *(float *)(t + 0x20) + v[1] * *(float *)(t + 0x24) + v[2] * *(float *)(t + 0x28)) ; return !(dd < 0.5f);}
}
