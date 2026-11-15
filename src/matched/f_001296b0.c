int f(float *a, float *b) {
    float dx, dy, z;
    z = 0.0f;
    dx = b[0] - a[0];
    dy = b[1] - a[1];
    if (a[0] < z) {
        if (b[0] < z) return 0;
        a[1] = a[1] - a[0] * dy / dx;
        a[0] = 0;
    } else if (b[0] < z) {
        b[1] = b[1] - b[0] * dy / dx;
        b[0] = 0;
    }
    if (a[1] < 0.0f) {
        if (b[1] < 0.0f) return 0;
        a[0] = a[0] - a[1] * dx / dy;
        a[1] = 0;
    } else if (b[1] < 0.0f) {
        b[0] = b[0] - b[1] * dx / dy;
        b[1] = 0;
    }
    return 1;
}
