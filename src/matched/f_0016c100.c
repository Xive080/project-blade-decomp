struct V { float x, y, z, w; };
extern int g_off;
struct V *f(struct V *a, char *b) {
    *(struct V *)((char *)a + g_off) = *(struct V *)(b + g_off);
    return a;
}
