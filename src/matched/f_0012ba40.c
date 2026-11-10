struct T { char pad[0x134]; void (*fn)(int); };
extern char base[];
extern int ga[];
extern int gb;
extern void sub(int);
int func(void) {
    struct T *p = (struct T *)base;
    p->fn(ga[0]);
    ga[0] = 0;
    sub(gb);
    return 1;
}
