int f25dcf0(int,int,char*,int,int,int);
void f25d9e0(int, int, int, int, int);
char *func(int a, int b, char *s, int c) {
    int n;
    int i;
    int t;
    i = 0;
    n = f25dcf0(a, b, s, 1, c, 1);
    if (n <= 0) return (char*)0;
    if (0 < n) {
        do {
            if (s[i] == 13 && s[i + 1] == 10) {
                t = i + 1;
                s[i] = 10;
                s[i + 1] = 0;
                f25d9e0(a, b, t - n + 1, 2, 1);
                return s;
            }
            if (s[i] == 10) {
                t = i + 1;
                s[t] = 0;
                f25d9e0(a, b, t - n, 2, 1);
                return s;
            }
            i++;
        } while (i < n);
    }
    return s;
}
