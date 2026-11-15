extern float func_0011a398(float);
extern float func_00119ff8(float);
int func(float *a, float *b, unsigned int *fl, float dt) {
    float t, s, c;
    b[0] += dt * a[0];
    b[1] += dt * a[1];
    t = 0.017453293f * (a[2] * dt);
    s = func_0011a398(t);
    c = func_00119ff8(t);
    {
        float x = b[4];
        b[4] = b[5] * s + x * c;
        b[5] = b[5] * c - x * s;
    }
    b[9] = b[9] * (1.0f + (a[3] - 1.0f) * dt);
    *fl |= 0xb;
    return 1;
}
