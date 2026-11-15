extern int g84;
int sub1(int, int, void*);
int sub2(int, int*, int*);
void sub0(void*, void*, void*, void*, void*);
int func(char *p, void *q) {
    int a = -1;
    int b = -1;
    char t0[32];
    char t1[320];
    char t2[264];
    int s = *(int*)(p + 0xa0);
    if (g84 == 0 || *(int*)(p + 0x1e4) == 0) return 0;
    sub0(p, q, t1, t2, t0);
    if (sub1(s, 0, t2) == 0) {
        if (*(int*)(p + 0x1e8) != 0) {
            if (sub2(0, &a, &b) > 0 && a == 11 && b == 0) return 1;
        } else return 1;
    }
    return 0;
}
