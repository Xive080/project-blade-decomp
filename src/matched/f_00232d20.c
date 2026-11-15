extern char D[];
struct V { float x, y, z, w; };
struct O {
    char pad[32];
    struct V v;
    int c30;
    char pad2[84];
    int z88;
    int z8c;
    int z90;
    int z94;
    int z98;
    int z9c;
};
void f(struct O *a, struct V *b) {
    a->v = *b;
    if ((*(int *)&a->v.w) & 2) {
        a->c30 = (int)(D + 30000);
    } else {
        a->c30 = (int)(D + 28544);
    }
    a->z88 = 0;
    a->z90 = 0;
    a->z94 = 0;
    a->z98 = 0;
    a->z8c = 0;
    a->z9c = 0;
}
