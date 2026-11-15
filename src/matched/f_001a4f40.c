extern unsigned char *f1a50d0(unsigned char *, int *);
struct G {
    int state;
    unsigned char *p4;
    unsigned char *p8;
    unsigned char *pc;
    int p10;
    int p14;
    int p18;
    int p1c;
    int p20;
    int p24;
    int on;
    int n;
    char pad[0x39c];
    int s3c8;
    int s3cc;
    int s3d0;
    int s3d4;
    int s3d8;
};
extern struct G g;
int func(int a) {
    int buf[16];
    int s;
    int i;
    int *q;
    int *p;
    int j;
    int *r;
    int k;
    if (g.on == 0) return 0;
    if (a) {
        s = 0;
        g.p8 = g.p4;
        g.pc = g.p4;
        goto cond;
    next:
        g.pc += 2;
    cond:
        if (*g.pc != 255) goto next;
        g.pc += 1;
        g.pc = f1a50d0(g.pc, buf);
        s++;
        if (s < 50) goto cond;
    }
    g.state = 3;
    g.p8 = g.p4;
    g.s3c8 = 0;
    g.s3cc = 0;
    g.s3d0 = 0;
    g.s3d4 = 0;
    q = &g.state;
    for (i = 0; i < g.n; i++) {
        j = 0;
        p = q;
        do { p[100] = 0; p++; j++; } while (j < 16);
        k = 0;
        r = q;
        do { r[116] = 0; r++; k++; } while (k < 4);
        q += 112;
    }
    return 1;
}
