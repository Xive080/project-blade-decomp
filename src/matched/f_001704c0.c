int f(int a) {
    int n = 0;
    while (a != 1) {
        a >>= 1;
        n++;
    }
    return n;
}
