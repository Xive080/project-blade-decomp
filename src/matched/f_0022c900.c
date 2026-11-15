extern unsigned char func_00256438(float);
void func(unsigned char *d, float *s) {
    float t; float k = 382.5f;
    t = s[0] * k;
    if (t > 255.0f) { d[0] = 255; } else { d[0] = func_00256438(t); }
    t = s[1] * k;
    if (t > 255.0f) { d[1] = 255; } else { d[1] = func_00256438(t); }
    t = s[2] * k;
    if (t > 255.0f) { d[2] = 255; } else { d[2] = func_00256438(t); }
    d[3] = 255;
}
