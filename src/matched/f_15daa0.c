typedef struct { float x, y, z; } V3;
extern void func_001ce160(V3 *, void *);
extern float func_0011a620(float);
float func(void *a, void *b, V3 *c) {
    V3 va;
    V3 vb;
    float d, r, t;
    func_001ce160(&va, a);
    func_001ce160(&vb, b);
    d = va.x * vb.x + va.y * vb.y + va.z * vb.z;
    if (d < -1.0f) d = -1.0f;
    else if (d > 1.0f) d = 1.0f;
    t = d >= 0.0f ? d : -d;
    if (t < 0.01f) d = 0.0f;
    r = func_0011a620(d) * 57.29578f;
    if (c == 0) return r;
    {
        float p = va.y * vb.z - va.z * vb.y;
        float q = va.z * vb.x - va.x * vb.z;
        float s = va.x * vb.y - va.y * vb.x;
        d = p * c->x + q * c->y + s * c->z;
    }
    if (d < 0.0f) r = 360.0f - r;
    return r;
}
