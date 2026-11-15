struct V { float x, y, z, w; };
struct F { int pad[8]; struct V v; int *p; int q; };
extern char D[];
void f(struct F *a, struct V *b) {
    a->v = *b;
    if (((struct { int pad[11]; int fl; } *)a)->fl & 4) {
        a->p = 0;
        a->q = 0;
    } else if (((struct { int pad[11]; int fl; } *)a)->fl & 2) {
        a->p = (int *)(D + 30000);
    } else {
        a->p = (int *)(D + 28544);
    }
}
