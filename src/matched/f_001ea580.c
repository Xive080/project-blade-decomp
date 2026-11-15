extern void func_00109f60(void);
extern void func_0011fe10(void);
extern void func_001ea2c0(void);
extern void func_001ea6e0(void);
asm void f(void) {
    .set noreorder
    .set noat
    addiu sp,sp,-80
    .word 0x7fbf0040
    .word 0x7fb30030
    .word 0x7fb20020
    .word 0x7fb10010
    .word 0x7fb00000
    paddub s3,a1,zero
    .word 0xac80001c
    paddub s0,a0,zero
    paddub s1,zero,zero
    b L1ea610
    addiu s2,zero,-1
L1ea5b0:
    jal func_001ea6e0
    addiu a2,zero,2
    beqz v0,L1ea5cc
    nop
    .word 0xac510000
    b L1ea60c
    paddub s1,v0,zero
L1ea5cc:
    .word 0x3c02002e
    jal func_0011fe10
    addiu a0,v0,20064
    beqz s1,L1ea604
    paddub v0,zero,zero
L1ea5e0:
    .word 0x8e320000
    paddub a1,s1,zero
    jal func_001ea2c0
    paddub a0,s0,zero
    paddub s1,s2,zero
    bnez s2,L1ea5e0
    nop
    nop
    paddub v0,zero,zero
L1ea604:
    b L1ea670
    .word 0x7bbf0040
L1ea60c:
    addiu s2,s2,1
L1ea610:
    .word 0x8e050000
    bnez a1,L1ea620
    .word 0x0265001a
    .word 0x000001cd
L1ea620:
    mflo v0
    slt v0,s2,v0
    bnez v0,L1ea5b0
    paddub a0,s0,zero
    beqz s1,L1ea65c
    addiu v0,zero,1
L1ea638:
    .word 0x8e320000
    paddub a1,s1,zero
    jal func_001ea2c0
    paddub a0,s0,zero
    paddub s1,s2,zero
    bnez s2,L1ea638
    nop
    nop
    addiu v0,zero,1
L1ea65c:
    .word 0xae02001c
    jal func_00109f60
    paddub a0,zero,zero
    addiu v0,zero,1
    .word 0x7bbf0040
L1ea670:
    .word 0x7bb30030
    .word 0x7bb20020
    .word 0x7bb10010
    .word 0x7bb00000
    jr ra
    addiu sp,sp,80
}
