extern int G;
extern void sub(void *, int, int);
int f(char *a, int *b) {
    if (G != 0) {
        if (*(int *)(a + 484) != 0) goto go;
    }
    return 0;
 go:
        sub(b, 0, 28);
        b[0] = 2; b[6] = 1; b[4] = 1; b[5] = 3; b[3] = 0; b[1] = -1; b[2] = -1;
    return 0;
}
