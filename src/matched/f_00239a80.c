extern void func_0011eac8(void);
asm void f(void) {
    .set noreorder
    .set noat
    addiu sp,sp,-16
    sq ra,0(sp)
    sll a3,a1,0x3
    lw t0,28(a0)
    lw a1,36(a0)
    addiu v1,zero,4
    addu a0,a3,t0
    lw a3,4(a0)
    lw a0,0(a0)
    bne a3,v1,L239ab8
    addu a0,a1,a0
    lw v1,0(a2)
    b L239ac4
    sw v1,0(a0)
L239ab8:
    .word 0x70c02e28
    jal func_0011eac8
    .word 0x70e03628
L239ac4:
    lq ra,0(sp)
    jr ra
    addiu sp,sp,16
}
