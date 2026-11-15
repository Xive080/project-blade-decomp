extern void func_001d5bb0(void);
extern void func_001d5ee0(void);
asm void f(void) {
    .set noreorder
    .set noat
    addiu sp,sp,-48
    .word 0x7fbf0020
    .word 0x7fb10010
    .word 0x7fb00000
    .word 0x8c830014
    slti at,v1,2
    bnez at,L1d5d34
    paddub s1,a1,zero
    .word 0x8c860018
    .word 0x8e300018
    jal func_001d5bb0
    paddub a0,s0,zero
    jal func_001d5ee0
    paddub a0,a2,zero
    .word 0x8e240008
    addiu v1,zero,3
    .word 0x8c84000c
    .word 0xae040010
    .word 0x8e240008
    .word 0x8c840018
    .word 0xae040008
    .word 0x8e240008
    .word 0x8c840010
    .word 0xae04000c
    .word 0xae230014
L1d5d34:
    .word 0x7bbf0020
    .word 0x7bb10010
    .word 0x7bb00000
    jr ra
    addiu sp,sp,48
}
