extern void func_0010a530(void);
extern void func_0011fe10(void);
asm void func(void) {
    .set noreorder
    .set noat
    addiu sp,sp,-80
    .word 0x7fbf0040
    .word 0x7fb30030
    .word 0x7fb20020
    .word 0x7fb10010
    .word 0x3c020033
    addiu s1,v0,-23008
    .word 0x7fb00000
    .word 0x8e220130
    paddub s2,a0,zero
    addiu a0,zero,20
    jalr ra,v0
    addiu s3,s1,304
    paddub s0,v0,zero
    .word 0x8e42001c
    beqz v0,L1e9fe0
    .word 0x3c02002e
    addiu a0,v0,19968
    jal func_0011fe10
    paddub a1,s2,zero
L1e9fe0:
    beqz s0,L1ea048
    paddub v0,zero,zero
    .word 0x8e430000
    .word 0x8e620000
    jalr ra,v0
    addiu a0,v1,48
    .word 0xae020010
    .word 0x8e020010
    beqz v0,L1ea038
    addiu v1,v0,63
    addiu v0,zero,-64
    and v0,v1,v0
    .word 0xae02000c
    .word 0xae000004
    .word 0xae000008
    .word 0x8e420000
    .word 0x8e04000c
    addu v0,a0,v0
    jal func_0010a530
    addiu a1,v0,127
    b L1ea048
    paddub v0,s0,zero
L1ea038:
    .word 0x8e220134
    jalr ra,v0
    paddub a0,s0,zero
    paddub v0,zero,zero
L1ea048:
    .word 0x7bbf0040
    .word 0x7bb30030
    .word 0x7bb20020
    .word 0x7bb10010
    .word 0x7bb00000
    jr ra
    addiu sp,sp,80
}
