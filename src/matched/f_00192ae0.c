struct O { char pad[160]; int a; char p2[320]; int b; };
extern int G;
extern int f1(int, int);
extern int f2(int, int *, int *);
int f_00192ae0(struct O *o, int x) {
    int v0, v1;
    v0 = -1;
    v1 = -1;
    if (G) {
        if (o->b) goto go;
    }
    return 0;
go:
    if (f1(o->a, 0) == 0) {
        if (x != 0) {
            if (f2(0, &v0, &v1) > 0) {
                if (v0 == 16) {
                    if (v1 == 0) { return 1; }
                }
            }
        } else {
            return 1;
        }
    }
    return 0;
}
