extern void func_001bf050(void);
extern void func_001ca2d0(void);
asm void f(void) {
    .set noreorder
    .set noat
    addiu sp,sp,-64
    .word 0x7fbf0020
    .word 0x7fb10010
    .word 0x7fb00000
    .word 0x70c08628
    addiu a1,sp,60
    addiu a2,zero,4
    jal func_001ca2d0
    .word 0x70808e28
    bnez v0,L16b488
    addiu a0,sp,60
    b L16b4a8
    .word 0x70001628
    addiu a0,sp,60
L16b488:
    jal func_001bf050
    addiu a1,zero,4
    addiu v1,sp,60
    .word 0x8f848390
    .word 0xc4600000
    .word 0x72201628
    addu v1,s0,a0
    .word 0xe4600000
L16b4a8:
    .word 0x7bbf0020
    .word 0x7bb10010
    .word 0x7bb00000
    jr ra
    addiu sp,sp,64
}
