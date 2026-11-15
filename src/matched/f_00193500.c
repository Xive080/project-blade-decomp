extern int G_84B8;
extern void f192110(char *, int, char *, char *, char *);
extern void f11ec80(char *, int, int);
extern struct T *f192430(char *, char *, char *);
struct O { char pad[484]; int v; };
struct R { int a, b, c, d, e; };
struct T { char pad[20]; unsigned short fl; };
int f(struct O *o, int a1, struct R *r) {
    char b0[320];
    char b1[256];
    char b2[32];
    struct T *t;
    if (G_84B8 == 0 || o->v == 0) return 0;
    f192110((char *)o, a1, b0, b1, b2);
    if (r != 0) {
        f11ec80((char *)r, 0, 20);
        t = f192430((char *)o, b1, b2);
        if (t != 0) {
            r->a = ~((t->fl >> 1) & 1);
            r->b = 0;
            r->c = 0;
            r->d = 0;
            r->e = 0;
            return 1;
        }
    }
    return 0;
}
