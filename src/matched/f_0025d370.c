extern int G_8A04;
extern int G_89FC;
extern int G_82A4;
extern int G_82A0;
extern int f25d430(void);
extern void f10a708(int);
extern void f1099e0(int, int);
int f(int a) {
    if (a != 0) {
        if (G_8A04 == 0) {
            if (f25d430() == 0) return 0;
            G_8A04 = 1;
        }
    } else
    if (G_8A04 != 0) {
        if (G_89FC != 0) {
            f10a708(2);
            G_89FC = 0;
        }
        if (G_82A4 != -1) {
            f1099e0(2, G_82A4);
            G_82A4 = -1;
        }
        if (G_82A0 != -1) {
            f1099e0(2, G_82A0);
            G_82A0 = -1;
        }
        G_8A04 = 0;
    }
    return 1;
}
