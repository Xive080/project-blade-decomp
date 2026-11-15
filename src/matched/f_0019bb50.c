extern int func_0013b550(int, int);
extern void func_00195a90(void *, int);
extern void func_001a3ac0(char *, int, int);
extern int func_001a3fe0(int, int, int);
extern int func_001b5470(void);
extern char *func_001b54e0(int);
extern void func_001b6f70(void);
extern int func_001b85a0(int);
extern void func_001b8690(int, int);
extern void func_001b86b0(int);
extern void func_0024b540(int, int, void *);
extern char D_00315D40[];
extern char D_00316B00[];
extern char D_00317140[];
extern char D_00317160[];
extern char D_00317180[];
extern int D_00317400[];
extern int G_8328;
extern int G_84EC;
extern int G_8514;
extern int G_851C;
extern float G_8518;
void func(char *a, int b, int c) {
    int sp60[2];
    int sp68[2];
    int t, s;
    char *v;
    switch (b) {
    case 0:
        *(int *)(a + 8) = func_0013b550(G_8328, 0x71);
        *(int *)(a + 12) = 0;
        *(char **)(a + 20) = D_00315D40;
        *(int *)(a + 16) = 1;
        *(int *)(a + 24) = 0;
        *(int *)(a + 4) = 0;
        func_00195a90(D_00315D40, 0x7B);
        *(int *)(a + 4) = *(int *)(a + 4) | 0x19;
        break;
    case 3:
        t = func_001b5470() + 1;
        G_851C = 0;
        sp60[0] = func_001a3fe0(func_0013b550(G_8328, 0x70), t, 0);
        sp60[1] = 1;
        func_0024b540(0x12, 0, sp60);
        func_001b86b0(0);
        break;
    case 18:
        t = func_001b5470();
        s = func_001b85a0(t);
        func_001b6f70();
        switch (G_8514) {
        case 0:
            switch (s) {
            case 6:
                func_001b8690(t, *(int *)(func_001b54e0(2) + 12));
                G_851C = 0;
                sp68[0] = func_001a3fe0(func_0013b550(G_8328, 0x72), t + 1, 0);
                sp68[1] = 1;
                func_0024b540(0x12, 0, sp68);
                G_8514 = 1;
                break;
            case 13:
            case 5:
                break;
            default:
                D_00317400[1] = 1;
                D_00317400[2] = (int)D_00317140;
                G_8514 = 2;
                D_00317400[3] = D_00317400[0];
                break;
            }
            break;
        case 1:
            switch (s) {
            case 2:
                G_8514 = 2;
                G_84EC = 0x31;
                break;
            case 6:
            case 3:
                break;
            case 1:
                D_00317400[1] = 1;
                D_00317400[2] = (int)D_00317160;
                G_8514 = 2;
                D_00317400[3] = D_00317400[0];
                break;
            default:
                D_00317400[1] = 1;
                D_00317400[2] = (int)D_00317180;
                G_8514 = 2;
                D_00317400[3] = D_00317400[0];
                break;
            }
            break;
        case 2:
            if (!(G_8518 <= 0.8f)) {
                v = G_84EC < 0x48 ? D_00316B00 + (G_84EC << 5) : 0;
                D_00317400[1] = 1;
                D_00317400[2] = (int)v;
                D_00317400[3] = D_00317400[0];
            }
            break;
        }
        break;
    }
    func_001a3ac0(a, b, c);
}
