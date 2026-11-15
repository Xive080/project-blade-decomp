extern char sym[];
extern void sub(int, void*, int);
void f(int a, int b, int c) {
    if (c == 0) {
        sub(*(int*)0x70003fe0, sym, 0x4000);
        sub(*(int*)0x70003fe0 + 896, sym, 0x8000);
    }
}
