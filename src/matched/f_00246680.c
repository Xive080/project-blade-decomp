extern void func_00132160(void);
extern void func_00132150(void);
extern void func_00131e20(void);
extern void func_001320e0(void);
extern void func_0013b550(void);
extern void func_002432e0(void);
asm void func(void) {
    .set noreorder
    addiu sp,sp,-112
    .word 0x7fbf0030
    .word 0x7fb20020
    .word 0x7fb10010
    .word 0x7fb00000
    .word 0x8c82000c
    paddub s0,a1,zero
    addi v0,v0,-5
    sltiu at,v0,8
    beqz at,L246ad0
    paddub s1,a0,zero
    .word 0x3c03002f
    addiu v1,v1,3936
    sll v0,v0,0x2
    addu v0,v0,v1
    .word 0x8c420000
    jr v0
    nop
    .word 0x3c010030
    .word 0x8c226f84
    addiu a1,zero,8
    ori v0,v0,0x4
    .word 0x3c010030
    .word 0xac226f84
    .word 0x3c010030
    .word 0x8c326f88
    .word 0x8e42003c
    beq v0,a1,L246734
    nop
    .word 0x8e420010
    andi v0,v0,0x2
    bnez v0,L246734
    nop
    .word 0x8e42000c
    .word 0x8c420010
    jalr ra,v0
    paddub a0,s2,zero
    beqz v0,L246734
    nop
    .word 0x8e42000c
    addiu a1,zero,8
    addiu a2,zero,1
    .word 0x8c420014
    jalr ra,v0
    paddub a0,s2,zero
L246734:
    .word 0xc6220048
    .word 0x44800800
    nop
    c.eq.s $f2,$f1
    nop
    bc1t L2467a8
    .word 0x3c017000
    .word 0x3c017000
    .word 0xc4203fa8
    sub.s $f0,$f2,$f0
    c.le.s $f0,$f1
    nop
    bc1f L2467a4
    .word 0xe6200048
    .word 0x70002628
    jal func_00132160
    .word 0x70002e28
    jal func_00132150
    nop
    .word 0x3c017000
    .word 0xc4213fb0
    .word 0x3c023f80
    .word 0x44820000
    nop
    add.s $f0,$f0,$f1
    .word 0x3c010030
    .word 0xe420a6d8
    .word 0xae200048
L2467a4:
    .word 0x3c017000
L2467a8:
    .word 0xc622004c
    .word 0xc4213fa8
    .word 0x44800000
    nop
    sub.s $f1,$f2,$f1
    c.le.s $f1,$f0
    nop
    bc1f L246ad0
    .word 0xe621004c
    .word 0x8e220000
    addiu a1,zero,10
    paddub a0,s1,zero
    .word 0x8c420004
    jalr ra,v0
    .word 0x70003628
    b L246ad4
    paddub a0,s1,zero
    jal func_00131e20
    nop
    bnez v0,L246ad0
    nop
    jal func_001320e0
    nop
    .word 0x8e220000
    addiu a1,zero,6
    paddub a0,s1,zero
    .word 0x8c420004
    jalr ra,v0
    .word 0x70003628
    b L246ad0
    nop
    jal func_00131e20
    nop
    bnez v0,L246ad0
    nop
    jal func_001320e0
    nop
    .word 0x8e220000
    addiu a1,zero,6
    paddub a0,s1,zero
    .word 0x8c420004
    jalr ra,v0
    .word 0x70003628
    b L246ae4
    .word 0x7bbf0030
    .word 0xc6220048
    .word 0x44800800
    nop
    c.eq.s $f2,$f1
    nop
    bc1t L2468d8
    nop
    .word 0x3c017000
    .word 0xc4203fa8
    sub.s $f0,$f2,$f0
    c.le.s $f0,$f1
    nop
    bc1f L2468d8
    .word 0xe6200048
    .word 0x8e220038
    blez v0,L2468d8
    nop
    .word 0x3c010030
    .word 0x8c226f84
    ori v0,v0,0x4
    .word 0x3c010030
    .word 0xac226f84
    .word 0x8e220038
    addiu v0,v0,-1
    .word 0xae220038
    .word 0x8e220000
    .word 0x8c420018
    jalr ra,v0
    addiu a1,zero,9
    b L246ae0
    nop
L2468d8:
    .word 0x8f8484ac
    beqz a0,L246900
    .word 0x70001628
    .word 0x8c820010
    addiu a2,sp,104
    jalr ra,v0
    addiu a1,zero,7
    b L246900
    nop
    .word 0x70001628
L246900:
    beqz v0,L246ad0
    nop
    .word 0xc7a10068
    .word 0x3c023f80
    .word 0x44820000
    nop
    c.le.s $f1,$f0
    nop
    bc1t L246ad0
    nop
    .word 0x8e250038
    .word 0x8e220044
    .word 0x8f848328
    sll v1,a1,0x1
    addu v1,v1,a1
    sll v1,v1,0x1
    addu v0,v0,v1
    jal func_0013b550
    addiu a1,v0,426
    .word 0x8f8484ac
    beqz a0,L246968
    nop
    paddub a2,v0,zero
    .word 0x8c820010
    jalr ra,v0
    addiu a1,zero,8
L246968:
    .word 0x8e230044
    addiu v0,zero,6
    addiu v1,v1,1
    .word 0xae230044
    .word 0x8e230044
    bne v1,v0,L246ad0
    nop
    addiu v0,v1,-6
    b L246ad0
    .word 0xae220044
    .word 0x3c017000
    .word 0xc4223fa8
    .word 0x3c023e80
    .word 0x44820800
    .word 0xc6200040
    .word 0x3c023f80
    .word 0x44821800
    nop
    div.s $f1,$f2,$f1
    add.s $f0,$f0,$f1
    c.lt.s $f0,$f3
    nop
    bc1t L2469e0
    .word 0xe6200040
    .word 0xae220040
    .word 0x8e220000
    addiu a1,zero,8
    .word 0x8c420004
    jalr ra,v0
    .word 0x70003628
L2469e0:
    .word 0x3c02002f
    addiu v0,v0,-30944
    .word 0x78430000
    addiu a0,sp,64
    .word 0x7c830000
    .word 0xc6200040
    .word 0x3c02437f
    .word 0x44820800
    .word 0x3c020030
    addiu v0,v0,-23668
    mul.s $f0,$f1,$f0
    .word 0xe7a0004c
    .word 0xc4830000
    .word 0xc4820004
    .word 0xc4810008
    .word 0xc480000c
    .word 0xe4430000
    .word 0xe4420004
    .word 0xe4410008
    b L246ad0
    .word 0xe440000c
    .word 0x3c017000
    .word 0xc4223fa8
    .word 0x3c023e80
    .word 0x44820800
    .word 0xc6200040
    .word 0x44801800
    nop
    div.s $f1,$f2,$f1
    sub.s $f0,$f0,$f1
    c.le.s $f0,$f3
    nop
    bc1f L246a80
    .word 0xe6200040
    .word 0xae200040
    .word 0x8e220000
    addiu a1,zero,9
    .word 0x8c420004
    jalr ra,v0
    .word 0x70003628
L246a80:
    .word 0x3c02002f
    addiu v0,v0,-30928
    .word 0x78430000
    addiu a0,sp,80
    .word 0x7c830000
    .word 0xc6200040
    .word 0x3c02437f
    .word 0x44820800
    .word 0x3c020030
    addiu v0,v0,-23668
    mul.s $f0,$f1,$f0
    .word 0xe7a0005c
    .word 0xc4830000
    .word 0xc4820004
    .word 0xc4810008
    .word 0xc480000c
    .word 0xe4430000
    .word 0xe4420004
    .word 0xe4410008
    .word 0xe440000c
L246ad0:
    paddub a0,s1,zero
L246ad4:
    jal func_002432e0
    paddub a1,s0,zero
    addiu v0,zero,1
L246ae0:
    .word 0x7bbf0030
L246ae4:
    .word 0x7bb20020
    .word 0x7bb10010
    .word 0x7bb00000
    jr ra
    addiu sp,sp,112
}


