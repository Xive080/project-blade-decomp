extern void func_001ce330(float *, float *, float);
struct O { float f0; int i4; float f8; unsigned int flags; int i10; int i14; int i18; int pad1c; float f20; int i24; float f28; };
void f(struct O *o, float *q, float t) {
    float v[2];
    t = (t < 1.0f) ? t : 1.0f;
    if (o->f20 * q[0] + o->f28 * q[2] < -0.95f) {
        float k = 3.1415927f * t;
        if (!(o->f20 * q[2] - o->f28 * q[0] <= 0.0f)) {
            v[0] = o->f20 - o->f28 * k;
            v[1] = o->f28 + o->f20 * k;
        } else {
            v[0] = o->f20 + o->f28 * k;
            v[1] = o->f28 - o->f20 * k;
        }
    } else {
        float k = 1.0f - t;
        v[0] = k * o->f20 + t * q[0];
        v[1] = k * o->f28 + t * q[2];
    }
    func_001ce330(v, v, t);
    o->f20 = v[0];
    o->i24 = 0;
    o->f28 = v[1];
    o->f0 = v[1];
    o->i4 = 0;
    o->f8 = -v[0];
    o->i10 = 0;
    o->i14 = 0x3F800000;
    o->i18 = 0;
    o->flags &= 0xFFFDFFFF;
}
