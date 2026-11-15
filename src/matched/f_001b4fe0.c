struct E { int f; int pad[5]; };
extern struct E tab[];
extern int mode;
void f(int i) {
    struct E *p = &tab[i];
    switch (mode) {
    case 3:
        p->f |= 1;
        break;
    case 6:
        p->f |= 2;
        break;
    }
}
