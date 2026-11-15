extern void func_0011fe10(void);
asm void f(void) {
    .set noreorder
    .set noat
    addiu sp,sp,-32
    .word 0x7fbf0010
    .word 0x7fb00000
    .word 0x8c90001c
    beqzl s0,L1ea6b8
    .word 0x70802e28
    addiu v0,zero,1
    movz v0,zero,a1
    b L1ea6c4
    .word 0xac820020
L1ea6b8:
    .word 0x3c02002e
    jal func_0011fe10
    addiu a0,v0,20096
L1ea6c4:
    .word 0x72001628
    .word 0x7bbf0010
    .word 0x7bb00000
    jr ra
    addiu sp,sp,32
}
