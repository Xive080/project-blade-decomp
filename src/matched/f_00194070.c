extern int G_84B8;
void func_00192110(void *, int, char *, char *, char *);
void func_0011ec80(int *, int, int);
struct E { char p[20]; unsigned short fl; };
struct E *func_00192430(void *, char *, char *);
struct O { char p[484]; int x; };
int func(struct O *o, int a1, int *r) {
    char b0[320];
    char b1[256];
    char b2[32];
    struct E *e;
    if (G_84B8 == 0 || o->x == 0) return 0;
    func_00192110(o, a1, b0, b1, b2);
    if (r != 0) {
        func_0011ec80(r, 0, 20);
        e = func_00192430(o, b1, b2);
        if (e != 0) {
            r[0] = ~((e->fl >> 1) & 1);
            r[1] = (e->fl >> 3) & 1;
            r[2] = 0;
            r[3] = 0;
            r[4] = 0;
            return 1;
        }
    }
    return 0;
}
