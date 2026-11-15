extern void func_0016aea0(void);
asm void f(void) {
    .set noreorder
    .set noat
    addiu sp,sp,-64
    .word 0x7fbf0030
    .word 0x7fb20020
    .word 0x7fb10010
    .word 0x7fb00000
    .word 0x70808e28
    .word 0x70008628
    b L15ad78
    .word 0x72209628
L15ad64:
    jal func_0016aea0
    addiu a0,s2,116
    addiu s2,s2,380
    addiu s0,s0,1
    nop
L15ad78:
    .word 0x8e230010
    slt v1,s0,v1
    bnez v1,L15ad64
    nop
    .word 0x7bbf0030
    .word 0x7bb20020
    .word 0x7bb10010
    .word 0x7bb00000
    jr ra
    addiu sp,sp,64
}
