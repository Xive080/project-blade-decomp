extern int func_0013b550(int, int);
extern void func_00195a30(void *, int, int);
extern void func_00195740(void *, int);
extern void func_00195700(void *, int);
extern int func_001a3ac0(char *, int, int);
extern void func_0024b540(int, int, void *);
extern void func_0024b4b0(int, int);
extern int G_8328;
extern char D_6100[], D_6120[], D_6140[];
int f(char *p, int k, int c) {
    struct { char c; int v; } s;
    switch (k) {
    case 0:
        *(int*)(p+8) = func_0013b550(G_8328, 57);
        *(int*)(p+12) = func_0013b550(G_8328, 95);
        *(char**)(p+20) = D_6100;
        *(int*)(p+16) = 3;
        *(int*)(p+24) = 0;
        *(int*)(p+4) = 0;
        func_00195740(D_6100, 96);
        func_00195700(D_6120, 97);
        func_00195a30(D_6140, 100, 26);
    default: break;
    }
    if (func_001a3ac0(p, k, c) == 0) return 0;
    switch (k) {
    case 3: case 5: case 6:
        if (*(int*)(p+24) == 2) {
            s.c = *(char*)func_0013b550(G_8328, 270);
            s.v = func_0013b550(G_8328, 190);
            func_0024b540(5, 1, &s);
        } else func_0024b4b0(5, 1);
        break;
    default: break;
    }
    return 1;
}
