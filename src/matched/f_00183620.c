struct E { char p0[8]; float v; char p1[60]; float w; char p2[52]; };
extern struct E tab[];
void f(float x) {
    int i;
    struct E *p = (struct E *)((char *)tab);
    for (i = 0; i < 512; i += 2) {
        p->v = x;
        p->w = x;
        p++;
    }
}
