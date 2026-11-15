extern void sub(int, int, int);
void f(int *p)
{
    int i;
    for (i = 0; i < 16; i++, p++) {
        if (*p != 0) {
            sub(7, *p, 0);
        }
    }
}
