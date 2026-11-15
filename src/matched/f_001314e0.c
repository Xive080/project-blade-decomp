struct C { unsigned char r, g, b, a; };
struct E {
    int flags;
    int pad;
    struct C c;
    float f0;
    float f1;
    char pad2[56];
};
extern struct E D_002fa370[];
void f(struct C *a, float x, float y) {
    struct E *e = D_002fa370;
    unsigned i;
    for (i = 0; i < 2; i++) {
        e->flags |= 4;
        e->c = *a;
        e->f0 = x;
        e->f1 = y;
        e++;
    }
}
