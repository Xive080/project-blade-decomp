extern void sub(void);
extern int D[];
extern int *ga;
extern int *gb;
extern int *gc;
void func(void) {
    int j; int i; int *p;
    ga = D + 3;
    gb = D;
    gc = D + 31;
    D[0] = 0x9A319039;
    i = 1; p = D + 1;
    for (; i < 31; i++) {
        *p = p[-1] * 0x41C64E6D + 12345;
        p++;
    }
    ga = D + 3;
    gb = D;
    for (j = 0; j < 310; j++) sub();
}
