extern int gv;
extern void sub(char *);
int func(void) {
    sub((char *)gv + 0x3a8a58);
    return 1;
}
