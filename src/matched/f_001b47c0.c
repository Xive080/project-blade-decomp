struct V { float x, y, z, w; };
extern char gb[];
extern int h;
extern void s1(void);
extern void s2(int, int);
extern void s3(void);
extern void s4(int);
extern void s5(int, int);
int f(void) {
    volatile struct V v;
    struct V *p = (struct V*)&v;
    v.x = 0; v.y = 0; v.z = 0; v.w = 0;
    *(struct V*)gb = *p;
    s1();
    s2(0, 0);
    s3();
    s4(0);
    s5(0, h);
    return 1;
}
