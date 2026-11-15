extern int off;
extern int arg;
extern void func_00209ff0(int, int);
int f(int a0, int a1) {
    *(int*)(a0 + off) = *(int*)(a1 + off);
    if (*(int*)(a0 + off) != 0) func_00209ff0(a0, arg);
    return a0;
}
