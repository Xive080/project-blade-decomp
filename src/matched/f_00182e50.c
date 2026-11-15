struct E { char pad[20]; float a; float b; float c; };
float f(struct E *t, unsigned char *s) {
    float p;
    float r;
    int c = *s;
    if (c >= 32 && c < 256) r = -t[c - 32].b; else r = 0.0f;
    p = 0.0f;
    while (*s != 0) {
        struct E *e = &t[*s - 32];
        s++; r = r + (p + (e->b + e->a)); p = e->c;
    }
    return r;
}
