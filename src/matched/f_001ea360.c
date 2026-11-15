extern void func_0010a530(void);
extern void func_0011fe10(void);
asm void f(void) {
    .set noreorder
    .set noat
    addiu sp,sp,-80
    .word 0x7fbf0040
    .word 0x7fb30030
    .word 0x7fb20020
    .word 0x7fb10010
    .word 0x3c020033
    addiu s3,v0,-23008
    .word 0x7fb00000
    .word 0x8e620130
    paddub s1,a0,zero
    addiu a0,zero,36
    jalr ra,v0
    addiu s2,s3,304
    paddub s0,v0,zero
    bnez s0,L1ea3a8
    paddub v0,zero,zero
    b L1ea46c
    .word 0x7bbf0040
L1ea3a8:
    .word 0xae110000
    .word 0xaf918160
    .word 0xae00001c
    .word 0xae000020
    .word 0x8e420000
    jalr ra,v0
    addiu a0,zero,20
    paddub s1,v0,zero
    .word 0x8e02001c
    beqz v0,L1ea3e0
    .word 0x3c02002e
    addiu a0,v0,19968
    jal func_0011fe10
    paddub a1,s0,zero
L1ea3e0:
    beqzl s1,L1ea448
    paddub s1,zero,zero
    .word 0x8e030000
    .word 0x8e420000
    jalr ra,v0
    addiu a0,v1,48
    .word 0xae220010
    .word 0x8e220010
    beqz v0,L1ea438
    addiu v1,v0,63
    addiu v0,zero,-64
    and v0,v1,v0
    .word 0xae22000c
    .word 0xae200004
    .word 0xae200008
    .word 0x8e24000c
    .word 0x8e020000
    addu v0,a0,v0
    jal func_0010a530
    addiu a1,v0,127
    b L1ea44c
    .word 0xae310000
L1ea438:
    .word 0x8e620134
    jalr ra,v0
    paddub a0,s1,zero
    paddub s1,zero,zero
L1ea448:
    .word 0xae310000
L1ea44c:
    .word 0xae110004
    .word 0xae110008
    .word 0xae11000c
    .word 0xae000010
    .word 0xae000014
    .word 0xae000018
    paddub v0,s0,zero
    .word 0x7bbf0040
L1ea46c:
    .word 0x7bb30030
    .word 0x7bb20020
    .word 0x7bb10010
    .word 0x7bb00000
    jr ra
    addiu sp,sp,80
}
