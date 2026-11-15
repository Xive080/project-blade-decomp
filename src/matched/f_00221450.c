extern void func_0011ec80(void*, int, int);
struct V { char pad[0x130]; char *(*alloc)(int); };
extern char base[];
char *func(char *a) {
    unsigned n;
    unsigned short *s;
    char *r;
    int sz;
    unsigned short *d;
    char *t;
    unsigned i;
    n = *(unsigned*)(a + 4) + 2;
    s = *(unsigned short**)(a + 8);
    sz = n * 2 + 28;
    r = ((struct V*)base)->alloc(sz);
    func_0011ec80(r, 205, sz);
    *(int*)r = 1;
    *(short*)(r + 4) = 1;
    t = r + 16;
    *(short*)(r + 6) = 0;
    *(unsigned*)(r + 8) = n;
    d = (unsigned short*)t + 6;
    *(int*)(r + 12) = 0;
    *(unsigned short**)(r + 16) = d;
    *(unsigned*)(r + 20) = n;
    *(int*)(r + 24) = *(int*)((char*)s + 8);
    for (i = 0; i < n; i++, d++, s++) *d = *s;
    return r;
}
