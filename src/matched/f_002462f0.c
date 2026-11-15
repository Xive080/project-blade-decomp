extern void f2(void);
extern void f4(void);
extern void f5(int);
extern int G1;
void func(int a, int b) {
    if (b == 0) {
        switch (a) {
        case 2:
            (*(void (**)(void*))(**(int**)0x70003fd4 + 32))(*(void**)0x70003fd4);
            return;
        case 3:
            f2(); f4(); G1 = 1; f5(1);
            break;
        }
    }
}
