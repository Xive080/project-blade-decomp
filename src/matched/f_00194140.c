extern int G_84B8;
extern int func_00114cf8(int, int *, int *);
extern int func_00115768(int, int, void *, void *);
extern void func_001217e0(void *, void *);
extern void func_00121a58(void *, void *);
extern void func_00192110(char *, void *, char *, char *, char *);

int func(char *o, void *b, void *c) {
    char s48[256];
    char s304[256];
    char s560[32];
    char s592[32];
    char s624[320];
    char s944[256];
    int r0;
    int r1;
    r0 = -1;
    r1 = -1;
    if (G_84B8 == 0 || *(int *)(o + 484) == 0) return 0;
    func_00192110(o, c, s624, s944, s560);
    func_00192110(o, b, s48, s944, s592);
    func_00121a58(s304, o + 196);
    func_001217e0(s304, s944);
    func_001217e0(s304, s560);
    if (func_00115768(*(int *)(o + 160), 0, s48, s304) == 0) {
        if (func_00114cf8(0, &r0, &r1) > 0 && r0 == 19 && r1 == 0) return 1;
    }
    return 0;
}
