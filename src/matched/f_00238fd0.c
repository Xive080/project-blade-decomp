extern char fa[];
extern char fb[];
struct E { void *a; void *b; };
void f(struct E *p) {
    int i;
    for (i = 0; i < 19; i++) {
        p->a = fb;
        p->b = fa;
        p++;
    }
}
