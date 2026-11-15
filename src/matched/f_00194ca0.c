int func_001147c8(int);
int func_00114cf8(int, int *, int *);
extern int G_84B8;
extern int *G_84BC;
extern int G_84C0;
struct O { char pad[36]; int (*fn)(void); char p2[444]; int a; int b; };

int func(struct O *o, int *p) {
    int s38, s3c;
    s38 = -1;
    s3c = -1;
    if (G_84B8 != 0) { if (o->a != 0) goto go; }
    return 0;
go:
    if (p != 0) {
    o->fn();
    if (func_001147c8(*p) == 0) {
        if (o->b == 0) {
            G_84BC = p;
            return 1;
        }
        if (func_00114cf8(0, &s38, &s3c) > 0 && s38 == 3) {
            *p = -1;
            G_84C0 -= 1;
            return s3c == 0;
        }
    }
    }
    return 0;
}
