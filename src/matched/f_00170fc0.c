extern void f(char *);
extern char D[];
void func(void) {
    s32 i;
    char *p = D;
    for (i = 0; i < 2; i++) { f(p + 0x380); p += 0x5b0; }
}
