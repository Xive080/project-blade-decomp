extern char B1[];
extern char B2[];
extern char S1[];
extern char S2[];
extern char S3[];
extern char S4[];
extern char S5[];
extern char S6[];
extern s32 sel(void);
extern void cp(char *, void *);
s32 func(void)
{
    switch (sel()) {
    case 2:
        cp(B1, S1);
        cp(B2, S6);
        break;
    case 3:
    case 7:
        cp(B1, S2);
        cp(B2, S6);
        break;
    case 4:
        cp(B1, S3);
        cp(B2, S6);
        break;
    case 5:
        cp(B1, S4);
        cp(B2, S6);
        break;
    case 0:
    case 1:
    case 6:
    default:
        cp(B1, S5);
        cp(B2, S6);
        break;
    }
    return 1;
}
