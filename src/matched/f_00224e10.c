extern int D_00307218[];
extern int f243230(void);
int func(char *o, int k, int *r) {
    int v;
    switch (k) {
    case 2:
        *r = *(int *)(o + 92);
        return 1;
    case 5:
        *r = 0;
        if (D_00307218[0] & 2) *r = 1;
        else if (D_00307218[0] & 1) *r = 0;
        else if (D_00307218[0] & 4) *r = 2;
        return 1;
    case 4:
        if (*(int *)(o + 12) == 13) *r = 1; else *r = 0;
        return 1;
    case 3:
        v = *(int *)(o + 12);
        if (v != 3 && v != 1) *r = 1; else *r = 0;
    default:
        return f243230();
    }
}
