void f_00258d60(float *p, float lim, float k)
{
    float v = p[8];
    float d;
    if (v > lim) {
        d = v - lim;
        p[6] += k * d;
        p[8] = lim;
    } else if (v < -lim) {
        d = v + lim;
        p[6] += k * d;
        p[8] = -lim;
    }
}
