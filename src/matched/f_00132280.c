extern int D_002FA634[];
extern int D_002FA670[];
extern int func_001a74e0(int);
int f(int a) {
    int x = D_002FA634[a];
    int r;
    int res;
    if (x == -1) return 0;
    if (D_002FA670[a] != 0) return 0;
    if (x == -1) return 0;
    r = func_001a74e0(x);
    switch (r) {
    case 3: res = 1; break;
    case 4: case 5: case 1: case 2: default: res = 0; break;
    }
    return res;
}
