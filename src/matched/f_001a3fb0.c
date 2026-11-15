extern char tbl[];
char *f(int i) {
    if (i < 72) return tbl + i * 32;
    return 0;
}
