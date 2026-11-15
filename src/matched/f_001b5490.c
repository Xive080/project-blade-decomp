struct T { int w[412]; };
extern struct T D;
extern int g_done;
int f(struct T *src) {
    D = *src;
    g_done = 1;
    return 1;
}
