extern int G31388;
struct S { int fl; char pad[16]; unsigned char c20; char pad2[3]; };
struct T { char pad[97]; unsigned char b97, b98, b99, b100, b101, b102, b103; char pad2[120]; };
extern struct S SA[];
extern struct T TA[];
extern int f1b5050(int, int);
int func(unsigned n) {
    unsigned i;
    int z;
    struct S *p;
    struct T *t;
    if (G31388 == 0) return 0;
    switch (n) {
    case 0: return SA[2].c20 < 3;
    case 1: return SA[4].c20 < 3;
    case 5:
        for (i = 1; i < 7; i++) {
            if (f1b5050(i, 6)) { if (!(SA[i].fl & 2)) return 0; }
        }
        return 1;
    case 6:
        for (i = 1; i < 7; i++) {
            if (f1b5050(i, 5)) {
                if (!TA[i].b97 && !TA[i].b98 && !TA[i].b99 && !TA[i].b101 && !TA[i].b102 && !TA[i].b103) z = 1; else z = 0;
                if (z) return 0;
            }
        }
        return 1;
    case 2:
        for (i = 1; i < 7; i++) {
            if (f1b5050(i, 3)) { if (!(SA[i].fl & 1)) return 0; }
        }
        return 1;
    case 3:
        for (i = 1; i < 7; i++) {
            if (f1b5050(i, 3)) { if (SA[i].c20 > 1) return 0; }
        }
        return 1;
    case 4:
        for (i = 1; i < 7; i++) {
            if (f1b5050(i, 3)) { if (SA[i].c20 != 0) return 0; }
        }
        return 1;
    }
    return 0;
}
