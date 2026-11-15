extern void func_00201570(void);
asm void f(void) {
    .set noreorder
    .set noat
    addiu sp,sp,-32
    .word 0x3c020025
    sq ra,0(sp)
    addiu a2,sp,28
    addiu a1,v0,-24224
    jal func_00201570
    sw zero,28(sp)
    lw v0,28(sp)
    lq ra,0(sp)
    jr ra
    addiu sp,sp,32
}
