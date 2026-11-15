extern char D_001FCF00[], D_001FD660[], D_001FCFF0[], D_001FE080[], D_001FDF00[], D_001FDCC0[], D_001FDDD0[], D_001FDE90[];
extern char D_002245B0[], D_00224460[], D_00224330[], D_002242C0[], D_00224280[], D_00224150[];
extern char D_00224020[], D_00223FE0[], D_00223EA0[], D_002239F0[], D_00223540[], D_00223410[];
extern int func_001fea00(void *);
struct L { int t; int a; void *p[8]; };
int func(void) {
    struct L l;
    l.t = 2; l.a = 36;
    l.p[0] = D_001FCF00; l.p[1] = D_001FD660; l.p[2] = D_001FCFF0; l.p[3] = D_001FE080;
    l.p[4] = D_001FDF00; l.p[5] = D_001FDCC0; l.p[6] = D_001FDDD0; l.p[7] = D_001FDE90;
    func_001fea00(&l);
    l.t = 100; l.a = 24;
    l.p[0] = 0; l.p[1] = 0; l.p[2] = D_002245B0; l.p[3] = 0; l.p[4] = D_00224460; l.p[5] = D_00224330; l.p[6] = 0; l.p[7] = 0;
    func_001fea00(&l);
    l.t = 101; l.a = 20;
    l.p[0] = 0; l.p[1] = 0; l.p[2] = D_002242C0; l.p[3] = 0; l.p[4] = D_00224280; l.p[5] = D_00224150; l.p[6] = 0; l.p[7] = 0;
    func_001fea00(&l);
    l.t = 102; l.a = 44;
    l.p[0] = 0; l.p[1] = 0; l.p[2] = D_00224020; l.p[3] = 0; l.p[4] = D_00223FE0; l.p[5] = D_00223EA0; l.p[6] = 0; l.p[7] = 0;
    func_001fea00(&l);
    l.t = 103; l.a = 16;
    l.p[0] = 0; l.p[1] = 0; l.p[2] = D_002239F0; l.p[3] = 0; l.p[4] = D_00223540; l.p[5] = D_00223410; l.p[6] = 0; l.p[7] = 0;
    return func_001fea00(&l);
}
