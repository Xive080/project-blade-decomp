extern void func_001cc6b0(void);
asm void f(void) {
    .set noreorder
    .set noat
    addiu sp,sp,-32
    .word 0x44800800
    .word 0x7fbf0010
    .word 0x7fb00000
    .word 0xc482007c
    c.eq.s $f2,$f1
    nop
    bc1t L15c828
    .word 0x70808628
    .word 0x3c017000
    .word 0xc4203fa8
    sub.s $f0,$f2,$f0
    c.lt.s $f0,$f1
    nop
    bc1f L15c828
    .word 0xe600007c
    .word 0x8e020078
    sll v0,v0,0x2
    addu v0,v0,s0
    .word 0x8c450010
    jal func_001cc6b0
    .word 0x8e040070
    .word 0x8e040078
    .word 0x8e030074
    addiu a0,a0,1
    .word 0x0083001a
    nop
    nop
    mfhi v1
    .word 0xae030078
    .word 0xc6010080
    .word 0xc600007c
    add.s $f0,$f0,$f1
    .word 0xe600007c
L15c828:
    .word 0x7bbf0010
    .word 0x7bb00000
    jr ra
    addiu sp,sp,32
}
