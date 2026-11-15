extern void func_00238380(void);
asm void f(void) {
    .set noreorder
    .set noat
    .word 0x44800000
    addiu sp,sp,-16
    c.lt.s $f12,$f0
    addiu v0,zero,1
    bc1t L14a4ec
    .word 0x7fbf0000
    .word 0x70001628
L14a4ec:
    beqz v0,L14a504
    .word 0x3c023f80
    .word 0x44806000
    b L14a528
    addiu a0,a0,7704
    .word 0x3c023f80
L14a504:
    .word 0x44820000
    nop
    c.le.s $f12,$f0
    nop
    bc1t L14a524
    nop
    b L14a524
    mov.s $f12,$f0
L14a524:
    addiu a0,a0,7704
L14a528:
    jal func_00238380
    nop
    .word 0x7bbf0000
    addiu v0,zero,1
    jr ra
    addiu sp,sp,16
}
