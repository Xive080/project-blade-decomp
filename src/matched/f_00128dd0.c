#define P(o) (*(float *)(0x70000000 + (o)))
int f(int a, int x, int y, unsigned *fl) {
    float dx, dy, d;
    if (*fl & 1) {
        dx = ((float)x + 0.5f) * P(16) - P(32);
        dy = ((float)y + 0.5f) * P(20) - P(36);
        if (P(48) != 0.0f || P(52) != 0.0f) {
            d = dx * P(48) + dy * P(52);
            d = d * d;
        } else {
            d = dx * dx + dy * dy;
        }
        if (d <= P(24)) *fl |= 2;
    }
    if (*fl & 8) {
        dx = ((float)x + 0.5f) * P(16) - P(40);
        dy = ((float)y + 0.5f) * P(20) - P(44);
        if (P(56) != 0.0f || P(60) != 0.0f) {
            d = dx * P(56) + dy * P(60);
            d = d * d;
        } else {
            d = dx * dx + dy * dy;
        }
        if (d <= P(24)) *fl |= 16;
    }
    return a;
}
