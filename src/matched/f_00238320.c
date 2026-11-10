void func(int *p){
    int v1 = *p;
    if (v1 != 0) {
        func2(p + 1, 7);
    }
    // Note: The xori.b instruction affects the byte in w0 (part of $v0/$v1 register pair).
    // Since $v0 is not used as a return value here (no assignment to a variable or memory),
    // and the function returns void, this side effect is likely irrelevant to the C logic
    // unless it's part of a larger sequence not shown. However, strictly speaking,
    // if this function is supposed to return a value, it would be in $v0.
    // Given the structure, it looks like a void function or the return value is ignored.
    // The xori.b $w0, $w0, 0xbf modifies the 4th byte of $v0.
    // If we assume the function returns an int, we need to capture this.
    // But there is no return statement or move to $v0 before jr $ra.
    // The xori.b is a side effect on the register that happens before return.
    // If the caller expects a value in $v0, it will see the modified value.
    // However, without a return type or usage, we stick to the control flow.
    // Let's assume it's a void function for now, or the return value is not significant.
    // Actually, looking at the prologue/epilogue, it saves $ra.
    // The xori.b is a bit unusual. Let's look at the registers.
    // $w0 is the 4th byte of $v0.
    // If the function is supposed to return something, it's not clear what.
    // Let's assume it's a void function.
}
