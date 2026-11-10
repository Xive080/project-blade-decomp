void func(int *p){
    int v1 = *p;
    if (v1 != 0) {
        func2(p + 1, 1);
    }
    // The xori.b instruction modifies the 4th byte of $v0.
    // Since the function returns void, this side effect is likely ignored.
    // However, if the function were to return a value, it would be in $v0.
    // Given the structure, we assume it's a void function.
}
