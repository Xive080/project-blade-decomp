extern char *a[];
extern char A0[];
extern char A1[];
extern char A2[];
extern char A3[];
extern s32 b[];
extern int g;
char *get(void);
int func(void) {
    a[0] = A0;
    a[1] = A1;
    a[2] = A2;
    b[4] = *(s32 *)(get() + 16);
    b[5] = *(s32 *)(get() + 20);
    a[3] = A3;
    b[6] = *(s32 *)(get() + 24);
    {s32 t = *(s32 *)(get() + 28);
    b[7] = t;}
    g = 1; return 1;
}
