int f(float a) {
    float t = 10.0f;
    int n = 1;
    if (!(a < t)) {
        float m = t;
        do {
            t = t * m;
            n++;
        } while (!(a < t));
    }
    return n;
}
