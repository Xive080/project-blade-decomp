extern void f1a4df0(int, int);
extern void f1a4ea0(void);
extern void f1f7930(int);
struct G {
    int state;
    int p4;
    int p8;
    int pc;
    int p10;
    int p14;
    int p18;
    int p1c;
    int p20;
    int p24;
    int p28;
    int p2c;
    char pad[0x39c];
    int s3c8;
    int s3cc;
    int s3d0;
    int s3d4;
    int s3d8;
    int s3dc;
    float f3e0;
    float f3e4;
    int s3e8;
};
extern struct G g;
extern volatile float A560;
extern volatile float A564;
extern int A614;
extern unsigned char A61f;
extern int L1[];
extern char L2[];
int func(int a) {
    if (a) {
        f1a4ea0();
        g.p18 = 0;
        g.p1c = 0;
        g.p20 = 0;
        g.p8 = g.p4;
        g.p10 = g.p4;
        g.p28 = 0;
        g.p2c = 0;
        g.s3dc = 0;
        g.p24 = 0;
    } else {
        float k = 0.02f;
        float x = g.f3e0 + *(float*)0x70003FA8;
        float y = g.f3e4 + k;
        A560 = x;
        if (*(int*)0x70003FFC == 0xAFBFCFDF) *(float*)0x70003FB0 = A560;
        A564 = y;
        if (*(int*)0x70003FFC == 0xAFBFCFDF) *(float*)0x70003FB4 = A564;
        f1f7930(g.s3e8);
        g.s3dc = 0;
    }
    g.p18 = A61f;
    g.p1c = 0;
    g.p20 = A614;
    g.state = 4;
    g.p2c = 1;
    g.s3c8 = 0x3EA8F5C3;
    g.s3cc = 2;
    g.s3d0 = 2;
    f1a4df0(A614, A61f);
    return 1;
}
