extern void func_001c8500(void);
extern void func_001c8760(void);
asm void f(void) {
    .set noreorder
    .set noat
    addiu sp,sp,-32
    .word 0x7fbf0010
    .word 0x7fb00000
    .word 0x70002628
    .word 0x70002e28
    .word 0x70003628
    addiu a3,zero,128
    jal func_001c8760
    .word 0xaf8087c8
    addiu s0,gp,-30784
    .word 0xae020000
    .word 0x8e020000
    bnez v0,L1ea7a0
    .word 0x70002628
    b L1ea7dc
    .word 0x70001628
L1ea7a0:
    .word 0x70002e28
    .word 0x70003628
    jal func_001c8760
    addiu a3,zero,128
    .word 0xae020004
    .word 0x8e020004
    bnez v0,L1ea7d4
    nop
    jal func_001c8500
    .word 0x8e040000
    .word 0xae000000
    b L1ea7dc
    .word 0x70001628
L1ea7d4:
    .word 0xaf8087b8
    addiu v0,zero,1
L1ea7dc:
    .word 0x7bbf0010
    .word 0x7bb00000
    jr ra
    addiu sp,sp,32
}
