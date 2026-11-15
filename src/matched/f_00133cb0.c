extern volatile int g;
int f(void) {
    g;
    g = g + 1;
    asm { sync }
    asm { ei }
    return 0;
}
