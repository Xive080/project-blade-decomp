struct Q { char pad[24]; int f; };
struct S {
    char pad0[16];
    unsigned flags;
    char pad1[40];
    int state;
    char pad2[140];
    struct Q *q;
    char pad3[776];
    int v;
};
int f(struct S *o, int b, int c) {
    if (o->state == 0 || (o->flags & 1) != 0) return 0;
    o->v = b;
    switch (c) {
    case 0:
    case 1:
        if (o->q != 0 && (o->q->f & 0xa) != 0 && o->state == 2) o->flags |= 0x20;
        break;
    case 2:
    case 3:
    case 4:
    case 5:
    case 6:
    case 7:
    case 8:
        break;
    case 9:
        o->flags |= 0x20;
        break;
    }
    return 0;
}
