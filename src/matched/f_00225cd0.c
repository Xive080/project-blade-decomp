extern void func_00132b30(unsigned char, int);
extern char *func_00133100(int);
extern void func_00133120(int);
extern void func_0016f380(int);
extern unsigned char D_002FA61F;
extern int D_002FA620;

int func(char *self, int a1) {
    char *t;
    switch (a1) {
    case 8:
        func_0016f380(D_002FA61F * 10 + 1);
        break;
    case 15:
        if (*(int*)(self + 0x40) != 0) {
            func_0016f380(D_002FA61F * 10 + 6);
            func_00132b30(D_002FA61F, D_002FA620);
        } else {
            func_0016f380(D_002FA61F * 10 + 5);
            func_00132b30(D_002FA61F, D_002FA620);
        }
        (*(void (**)(char*))(*(int*)self + 12))(self);
        *(int*)(self + 0x3c) = 0;
        break;
    case 5:
        *(int*)(self + 12) = a1;
        return 0;
    case 18:
        func_0016f380(D_002FA61F * 10 + 7);
        func_00132b30(D_002FA61F, D_002FA620);
        *(int*)(self + 0x3c) = 0;
        break;
    case 23:
        *(float*)(self + 0x4c) = *(float*)0x70003FB4;
        func_00132b30(D_002FA61F, D_002FA620);
        break;
    case 10:
        t = func_00133100(4);
        *(int*)(t + 16) = 2;
        *(int*)(t + 20) = 2;
        func_00133120(4);
        break;
    case 22:
        t = func_00133100(4);
        *(int*)(t + 16) = 7;
        *(int*)(t + 20) = 7;
        func_00133120(4);
        func_00132b30(D_002FA61F, D_002FA620);
        break;
    case 19:
    case 17:
        t = func_00133100(4);
        *(int*)(t + 16) = 11;
        *(int*)(t + 20) = 11;
        func_00133120(4);
        break;
    }
    return 1;
}
