extern int g;
extern void sub(int);
int func(void) {
    sub(g);
    asm { sync }
    asm { ei }
    return 0;
}
