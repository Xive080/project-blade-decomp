extern int G;
extern int f1(int);
extern int f2(int, int *, int *);
int func(char *a, char *b) {
    int x = -1;
    int y = -1;
    if (b != 0) {
        if (G == 0) goto r1;
        if (*(int *)(a + 484) == 0 || *(int *)(b + 1388) > 0) {
r1:
            return 0;
        }
        if (f1(*(int *)b) == 0) {
            if (f2(0, &x, &y) > 0 && x == 10 && y == 0) {
                return 1;
            }
        }
    }
    return 0;
}
