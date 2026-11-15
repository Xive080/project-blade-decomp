extern void f_001fefa0(void*, int);
extern void f_001ff7d0(void*, float);
extern void f_001ffac0(void*);
extern void f_00222f80(void*, void*, void*);
int f_0012be30(char *p, int a1, int a2, int a3) {
    void *x;
    if (a1 != 0) {
        x = *(void**)(p + 0x360);
        if (x != 0) {
            f_001fefa0(x, a1);
            f_001ff7d0(*(void**)(p + 0x360), 0.0f);
            f_001ffac0(*(void**)(p + 0x360));
        }
    }
    if (a2 != 0) {
        x = *(void**)(p + 0x364);
        if (x != 0) {
            f_001fefa0(x, a2);
            f_001ff7d0(*(void**)(p + 0x364), 0.0f);
        }
    }
    if (a3 != 0) {
        x = *(void**)(p + 0x368);
        if (x != 0) {
            f_001fefa0(x, a3);
            f_001ff7d0(*(void**)(p + 0x368), 0.0f);
        }
    }
    {
        char *b = *(char**)(p + 0x364);
        if (b != 0 && *(int*)(b + 8) != 0) {
            char *c = *(char**)(p + 0x368);
            if (c != 0 && *(int*)(c + 8) != 0) {
                f_00222f80(*(void**)(p + 0x360), b, c);
                f_001ffac0(*(void**)(p + 0x360));
            }
        }
    }
    return 1;
}
