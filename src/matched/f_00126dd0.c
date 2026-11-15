extern float K0[], K1[], K2[], K3[], D_002DDF28[];
extern void func_001a8b70(void *, float);
char *func(char *a, int i, int k, int j, int en) {
    char *r = 0, *p;
    switch (k) {
    case 0: r = p = (char*)(a + i * 232 + j * 116 + 200);
        if (r != 0 && en != 0) func_001a8b70(p, K0[0] * D_002DDF28[i * 3]);
        break;
    case 1: r = p = (char*)(a + i * 232 + j * 116 + 3216);
        if (r != 0 && en != 0) func_001a8b70(p, K1[0] * D_002DDF28[i * 3]);
        break;
    case 2: r = p = (char*)(a + i * 232 + j * 116 + 6232);
        if (r != 0 && en != 0) func_001a8b70(p, K2[0] * D_002DDF28[i * 3]);
        break;
    case 3: r = p = (char*)(a + i * 232 + j * 116 + 9248);
        if (r != 0 && en != 0) func_001a8b70(p, K3[0] * D_002DDF28[i * 3]);
        break;
    }
    return r;
}
