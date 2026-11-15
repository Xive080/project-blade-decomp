extern void func_001b9c00();
struct A { char p[40]; float lim; };
struct B { unsigned int fl; char p[12]; float pos; };
struct C { char p[4]; float dt; };
int f(struct A *a, struct B *b, int mode, struct C *c) {
    int r = 0;
    switch (mode) {
    case 5:
        b->fl |= 1;
        break;
    case 1:
        b->fl |= 1;
        b->pos += c->dt;
        if (!(0.5f + b->pos < a->lim)) r = 1;
        break;
    }
    func_001b9c00();
    return r;
}
