extern void func_00243230(void);
float f(int a, int b, int *c) {
    switch (b) {
    case 3:
        *c = 1;
        break;
    default:
        func_00243230();
        break;
    }
}
