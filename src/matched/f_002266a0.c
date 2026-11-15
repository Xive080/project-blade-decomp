extern void func_00226fb0();
extern void func_00133120(int);
extern void func_00242b20(void*, int, void*);
void func(int *p, int k, int *q) {
    switch (k) {
    case 2:
        p[*q + 29] = 0;
        p[*q + 27] = 0;
        p[*q + 25] = 0;
        p[*q + 23] = 0;
    default:
        break;
    case 3:
        if (p[3] == 1) {
            ((void(*)(int*,int))(*(int**)p)[6])(p, 2);
            return;
        }
        break;
    case 4:
        func_00226fb0();
        func_00133120(7);
        break;
    }
    func_00242b20(p, k, q);
}
