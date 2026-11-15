extern void func_001127b8(void);
extern void func_00112870(void);
extern void func_00112bc8(void);
extern void func_00112c20(void);
asm void f(void) {
    .set noreorder
    .set noat
    addiu sp,sp,-48
    .word 0x7fbf0020
    .word 0x7fb10010
    .word 0x7fb00000
    bgez a0,L176604
    andi v0,a0,0x1
    beqz v0,L176608
    sra v1,a0,0x1
    addiu v0,v0,-2
L176604:
    sra v1,a0,0x1
L176608:
    bgez a0,L176618
    nop
    addiu v1,a0,1
    sra v1,v1,0x1
L176618:
    bnez a2,L176628
    nop
    b L1768cc
    paddub v0,zero,zero
L176628:
    .word 0x8f88846c
    beqzl t0,L176660
    paddub v0,zero,zero
    bltz a0,L17665c
    nop
    .word 0x8f878460
    slt at,a0,a3
    beqz at,L17665c
    nop
    .word 0x8f878468
    .word 0x00873818
    b L176668
    addu s0,t0,a3
L17665c:
    paddub v0,zero,zero
L176660:
    b L1768d0
    .word 0x7bbf0020
L176668:
    slti at,a0,2
    beqzl at,L1768cc
    paddub v0,zero,zero
    .word 0x8e070148
    bnez a3,L17668c
    addiu a3,gp,-31624
    b L1768cc
    paddub v0,zero,zero
    addiu a3,gp,-31624
L17668c:
    sll t0,v0,0x2
    addu a3,a3,t0
    .word 0x8ce70000
    slt a3,v1,a3
    bnez a3,L1766b0
    addiu a3,zero,3
    b L1768cc
    paddub v0,zero,zero
    addiu a3,zero,3
L1766b0:
    .word 0xae020140
    beq a1,a3,L1767ac
    .word 0xae030144
    addiu a0,zero,2
    beq a1,a0,L176748
    nop
    addiu a0,zero,1
    beq a1,a0,L1766dc
    nop
    b L1768c0
    paddub v0,zero,zero
L1766dc:
    .word 0x90d10004
    paddub a0,v0,zero
    paddub a1,v1,zero
    .word 0x90c60000
    jal func_001127b8
    paddub a3,s1,zero
    bnez v0,L176704
    nop
    b L1768cc
    paddub v0,zero,zero
L176704:
    .word 0x8e030004
    addiu v0,zero,448
    bne v1,v0,L17673c
    addiu v0,zero,3
    addiu v0,zero,1
    bne s1,v0,L176728
    addiu v0,zero,3
    .word 0xae0001b8
    addiu v0,zero,3
L176728:
    bne s1,v0,L176738
    nop
    addiu v0,zero,1
    .word 0xae0201b8
L176738:
    addiu v0,zero,3
L17673c:
    .word 0xae02014c
    b L1768cc
    addiu v0,zero,1
L176748:
    .word 0x8cc40000
    beqz a0,L176784
    paddub a0,v0,zero
    paddub a0,v0,zero
    jal func_00112bc8
    paddub a1,v1,zero
    bnez v0,L176774
    addiu v0,zero,4
    b L1768cc
    paddub v0,zero,zero
    addiu v0,zero,4
L176774:
    .word 0xae02014c
    b L1768cc
    addiu v0,zero,1
    paddub a0,v0,zero
L176784:
    jal func_00112c20
    paddub a1,v1,zero
    bnez v0,L1767a0
    addiu v0,zero,4
    b L1768cc
    paddub v0,zero,zero
    addiu v0,zero,4
L1767a0:
    .word 0xae02014c
    b L1768cc
    addiu v0,zero,1
L1767ac:
    .word 0x8e070000
    addiu a1,zero,8
    beq a3,a1,L1767d0
    nop
    addiu a1,zero,4
    beq a3,a1,L1767d0
    nop
    b L1768cc
    paddub v0,zero,zero
L1767d0:
    .word 0x8cc70000
    addiu a1,zero,2
    beq a3,a1,L176830
    addiu t0,zero,1
    beq a3,t0,L1767f0
    nop
    b L176870
    paddub t0,zero,zero
L1767f0:
    .word 0x8cc70004
    beqz a3,L176808
    sll a1,a0,0x1
    bnel a3,t0,L176828
    paddub t0,zero,zero
    sll a1,a0,0x1
L176808:
    addu a1,a1,a0
    sll a2,a1,0x1
    .word 0x3c050031
    addiu a1,a1,-32056
    addu a1,a1,a2
    b L176870
    .word 0xa0a70000
    paddub t0,zero,zero
L176828:
    b L176870
    nop
L176830:
    .word 0x8cc70004
    sltiu at,a3,256
    beqzl at,L176864
    paddub t0,zero,zero
    sll a1,a0,0x1
    addu a1,a1,a0
    sll a2,a1,0x1
    .word 0x3c050031
    addiu a1,a1,-32055
    addu a1,a1,a2
    b L176870
    .word 0xa0a70000
    paddub t0,zero,zero
L176864:
    b L176870
    nop
    paddub t0,zero,zero
L176870:
    beqzl t0,L1768b4
    addiu v0,zero,1
    paddub a1,v1,zero
    sll v1,a0,0x1
    addu v1,v1,a0
    paddub a0,v0,zero
    .word 0x3c020031
    addiu v0,v0,-32056
    sll v1,v1,0x1
    jal func_00112870
    addu a2,v0,v1
    addiu v1,zero,1
    beq v0,v1,L1768b0
    nop
    b L1768cc
    paddub v0,zero,zero
L1768b0:
    addiu v0,zero,1
L1768b4:
    b L1768cc
    nop
    paddub v0,zero,zero
L1768c0:
    b L1768cc
    nop
    paddub v0,zero,zero
L1768cc:
    .word 0x7bbf0020
L1768d0:
    .word 0x7bb10010
    .word 0x7bb00000
    jr ra
    addiu sp,sp,48
}
