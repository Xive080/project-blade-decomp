struct V { float x, y, z; };
struct O {
    int type;
    int pad4[2];
    int w12;
    int pad16[3];
    struct V *src;
    struct V pos;
    int pad44;
    int *p48;
};
extern void func_001ce3f0(struct V *a, struct V *b, int c, int d);
struct O *f(struct O *o) {
    switch (o->type) {
    case 2:
        o->pos = *o->src;
        func_001ce3f0(&o->pos, &o->pos, 1, *o->p48);
        o->w12 = 0;
        break;
    }
    return o;
}
