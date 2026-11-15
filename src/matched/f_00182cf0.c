float f(char *a, unsigned n, int m) {
    float r;
    float s = *(float *)(a + 540) + (*(float *)(a + 532) + *(float *)(a + 536));
    r = (float)n * s;
    if (m & 2) {
        float t = *(float *)(a + 860) + (*(float *)(a + 852) + *(float *)(a + 856));
        r += (float)((n - 1) >> 1) * t;
    }
    if (m & 4) {
        float t = *(float *)(a + 412) + (*(float *)(a + 404) + *(float *)(a + 408));
        r += (float)((n - 1) / 3) * t;
    }
    if (m & 8) {
        float t = *(float *)(a + 188) + (*(float *)(a + 180) + *(float *)(a + 184));
        r += t;
    }
    if (m & 16) {
        float t = *(float *)(a + 5884) + (*(float *)(a + 5876) + *(float *)(a + 5880));
        r += t;
    }
    return r;
}
