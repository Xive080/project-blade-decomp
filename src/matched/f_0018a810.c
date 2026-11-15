float f(float a) {
    a = 0.75f - a;
    a = a * a;
    a = a - 0.0625f;
    return a / 0.5f;
}
