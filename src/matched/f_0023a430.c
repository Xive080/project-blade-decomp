extern void func_001a8d50(char *);
extern void func_001a8e80(char *);
int f(char *o, int a, int *p) {
    switch (*p) {
    case 0: func_001a8d50(o + 56); break;
    case 1: func_001a8e80(o + 56); break;
    default: break;
    }
}
