extern int G_8290;
extern int arg;
extern void func_00209ff0(int, int);
int f(int a0, int a1) {
    *(int*)(a0 + G_8290) = *(int*)(a1 + G_8290);
    if (*(int*)(a0 + G_8290) != 0) func_00209ff0(a0, arg);
    return a0;
}
