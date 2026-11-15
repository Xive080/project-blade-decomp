struct V { char pad[24]; void (*fn)(void *, int); };
struct O { struct V *v; char pad[8]; int t; };
extern void sub(void *, int, int);
int f(struct O *o, int b, int c) {
    switch (o->t) {
    case 1:
        if (b == 3) o->v->fn(o, 3);
        break;
    case 2:
        if (b == 3) o->v->fn(o, 3);
        break;
    case 3:
        if (b == 3) o->v->fn(o, 5);
        break;
    default:
        sub(o, b, c);
        break;
    }
    return 0;
}
