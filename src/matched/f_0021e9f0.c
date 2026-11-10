extern void func_002204c0(void);
extern void func_0021f240(void);

void func(void *arg0) {
    u8 *ptr = *(u8 **)((char *)arg0 + 8);
    if (*ptr == 0xFF) {
        func_002204c0();
    } else {
        func_0021f240();
    }
}
