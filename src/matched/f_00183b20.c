struct A { char pad[0x28]; float f; int w; };
struct C { char pad[0x84]; void (*fn)(void *, void *, void *); };
extern int f183c40(void *, int, int, void *, float, int, void *);
extern void f186570(void *);
void f(struct A *a, int *b, int **c) {
    if (f183c40(b + 1, 3, a->w, a, a->f, *b, c) == 0) {
        char *v = (char *)*c;
        if (v == 0) {
            f186570(b);
            return;
        }
        ((struct C *)v)->fn(v + 0x3c, b, c + 1);
    }
}
