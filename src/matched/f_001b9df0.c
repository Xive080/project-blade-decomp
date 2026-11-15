extern void f1(int); extern void f2(int, void*, void*);
extern char D[];
struct E { unsigned short fl; short x; int p; char pad[104]; };
void f(char *a, int b) {
    unsigned i; struct E *e; unsigned n;
    n = *(unsigned char*)(a+3592) + *(unsigned char*)(a+3593) + *(unsigned char*)(a+3594) + *(unsigned char*)(a+3595);
    e = (struct E*)a;
    for (i = 0; i < n; i++, e++) {
        if (e->p == 0 && (e->fl & b)) f2(0xac0000, D, e);
    }
    f1(0);
}
