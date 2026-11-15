struct O { char pad[20]; int (*fn)(struct O *, void *, int); };
struct B { char pad[1384]; struct O *o; };
extern int g1;
extern char *g2;
extern char blob[];
int f(int a, struct B *b)
{
    if (b != 0) {
        struct O *o = b->o;
        if (o != 0) {
            return o->fn(o, b, a);
        }
    }
    g1 = 3;
    g2 = blob;
    return 0;
}
