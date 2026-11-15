extern char D_002FA370[];
void f(float dt) {
    int i;
    char *p;
    p = D_002FA370;
    for (i = 0; i < 2; i++) {
        float v = *(float *)(p + 24);
        if (v > 0.0f) {
            *(float *)(p + 24) = v - dt;
        } else {
            *(int *)(p + 20) = 0;
        }
        p += 76;
    }
}
