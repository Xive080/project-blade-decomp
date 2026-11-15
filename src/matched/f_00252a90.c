struct E { int pad[34]; int a, b, c; };
void f(int *s) {
    unsigned int i;
    s[33] = 0;
    s[64] = 0; s[65] = 0; s[66] = 0; s[67] = 0;
    s[68] = 0; s[69] = 0; s[70] = 0;
    for (i = 0; i < 10; i++) {
        s[34] = 0; s[35] = 0; s[36] = 0;
        s += 3;
    }
}
