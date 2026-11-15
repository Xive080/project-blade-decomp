extern int g;
int f(int (**a)()) {
    if (g) return 0;
    return (*a)();
}
