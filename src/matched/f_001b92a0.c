extern void func_001b9ce0(void);
asm void func(void) {
    .set noreorder
    addiu sp,sp,-192
    .word 0x7fbf0090
    .word 0x7fbe0080
    .word 0x7fb70070
    .word 0x7fb60060
    .word 0x7fb50050
    .word 0x7fb40040
    .word 0x7fb30030
    .word 0x7fb20020
    .word 0x7fb10010
    .word 0x7fb00000
    paddub s5,a1,zero
    paddub s4,a2,zero
    .word 0x90860e08
    .word 0x90850e09
    .word 0x90830e0a
    .word 0x90820e0b
    .word 0x3c017000
    paddub s8,a0,zero
    .word 0x8c333fd4
    addu a1,a2,a1
    addu v1,v1,a1
    addu v1,v0,v1
    sll v0,v1,0x3
    subu v0,v0,v1
    sll v0,v0,0x4
    addu s7,a0,v0
    addiu s1,s5,4
    .word 0x70009628
    .word 0x7000b628
    beq s8,s7,L1b9578
    paddub s0,s8,zero
L1b9320:
    .word 0x8e230004
    .word 0x8e220008
    sltu at,v0,v1
    beqzl at,L1b956c
    addiu s0,s0,112
    nop
L1b9338:
    .word 0x3c010030
    .word 0x8c23a610
    .word 0xafb400a0
    .word 0xafb000a4
    addiu v0,zero,3
    beq v1,v0,L1b9360
    .word 0xafb100a8
    addiu v0,zero,6
    bne v1,v0,L1b9380
    nop
L1b9360:
    .word 0x8f8484ac
    beqz a0,L1b9380
    nop
    .word 0x8c820010
    addiu a2,sp,160
    jalr ra,v0
    addiu a1,zero,5
    nop
L1b9380:
    .word 0x8e220008
    addiu v0,v0,1
    beqz s3,L1b93d0
    .word 0xae220008
    .word 0x8e620000
    addiu a2,sp,188
    paddub a0,s3,zero
    .word 0x8c420010
    jalr ra,v0
    .word 0x70002e28
    .word 0xc6010050
    .word 0xc7a000bc
    addiu a2,sp,188
    paddub a0,s3,zero
    add.s $f0,$f0,$f1
    .word 0xe7a000bc
    .word 0x8e620000
    .word 0x8c420014
    jalr ra,v0
    .word 0x70002e28
L1b93d0:
    .word 0x8e230004
    .word 0x8e220008
    sltu at,v0,v1
    bnez at,L1b9338
    nop
    .word 0x96040000
    .word 0x8e220000
    andi v1,a0,0xf
    andi v0,v0,0x2
    beqz v0,L1b9568
    or s2,s2,v1
    andi v0,a0,0x7
    beqz v0,L1b942c
    andi v0,a0,0x1
    beqzl s6,L1b9424
    paddub s6,s0,zero
    .word 0x8ea20304
    beq s6,v0,L1b9428
    nop
    nop
    paddub s6,s0,zero
L1b9424:
    nop
L1b9428:
    andi v0,a0,0x1
L1b942c:
    beqz v0,L1b9470
    andi v0,a0,0x2
    .word 0x92a2030c
    addiu v0,v0,-1
    .word 0xa2a2030c
    .word 0x92a2030c
    bnezl v0,L1b9464
    ori s2,s2,0x10
    .word 0x8ea30000
    addiu v0,zero,-2
    and v0,v1,v0
    .word 0xaea20000
    nop
    ori s2,s2,0x10
L1b9464:
    b L1b9520
    nop
    andi v0,a0,0x2
L1b9470:
    beqz v0,L1b94b0
    andi v0,a0,0x4
    .word 0x92a2030d
    addiu v0,v0,-1
    .word 0xa2a2030d
    .word 0x92a2030d
    bnezl v0,L1b94a4
    ori s2,s2,0x20
    .word 0x8ea30000
    addiu v0,zero,-3
    and v0,v1,v0
    .word 0xaea20000
    ori s2,s2,0x20
L1b94a4:
    b L1b9520
    nop
    andi v0,a0,0x4
L1b94b0:
    beqz v0,L1b94ec
    nop
    .word 0x92a2030e
    addiu v0,v0,-1
    .word 0xa2a2030e
    .word 0x92a2030e
    bnezl v0,L1b94e4
    ori s2,s2,0x40
    .word 0x8ea30000
    addiu v0,zero,-5
    and v0,v1,v0
    .word 0xaea20000
    ori s2,s2,0x40
L1b94e4:
    b L1b9520
    nop
L1b94ec:
    .word 0x92a2030f
    addiu v0,v0,-1
    .word 0xa2a2030f
    .word 0x92a2030f
    bnezl v0,L1b951c
    ori s2,s2,0x80
    .word 0x8ea30000
    addiu v0,zero,-9
    and v0,v1,v0
    .word 0xaea20000
    nop
    ori s2,s2,0x80
L1b951c:
    nop
L1b9520:
    beqz s3,L1b9568
    nop
    .word 0x8e620000
    addiu a2,sp,188
    paddub a0,s3,zero
    .word 0x8c420010
    jalr ra,v0
    .word 0x70002e28
    .word 0xc6010054
    .word 0xc7a000bc
    addiu a2,sp,188
    paddub a0,s3,zero
    add.s $f0,$f0,$f1
    .word 0xe7a000bc
    .word 0x8e620000
    .word 0x8c420014
    jalr ra,v0
    .word 0x70002e28
L1b9568:
    addiu s0,s0,112
L1b956c:
    bne s0,s7,L1b9320
    addiu s1,s1,24
    nop
L1b9578:
    .word 0x8ea20308
    beqz v0,L1b9620
    nop
    .word 0x8c420000
    andi v0,v0,0x2
    beqz v0,L1b9620
    nop
    .word 0x93c40e08
    .word 0x93c30e09
    .word 0x93c20e0a
    addu v1,a0,v1
    addu s1,v0,v1
    sltu at,zero,s1
    beqz at,L1b9610
    .word 0x70008628
    paddub a0,s8,zero
    paddub a1,s5,zero
L1b95bc:
    .word 0x94830000
    .word 0x8ea20000
    and v0,v0,v1
    beqzl v0,L1b95fc
    addiu s0,s0,1
    .word 0x8ca20004
    andi v0,v0,0x2
    bnez v0,L1b95f8
    nop
    paddub a0,s8,zero
    paddub a1,s5,zero
    jal func_001b9ce0
    paddub a2,s0,zero
    b L1b9610
    nop
L1b95f8:
    addiu s0,s0,1
L1b95fc:
    addiu a0,a0,112
    sltu v0,s0,s1
    bnez v0,L1b95bc
    addiu a1,a1,24
    nop
L1b9610:
    bne s0,s1,L1b9620
    nop
    .word 0xaea00304
    .word 0xaea00308
L1b9620:
    beqz s6,L1b9654
    paddub v0,s2,zero
    .word 0xafb400b0
    .word 0xafb600b4
    .word 0x8ea20304
    .word 0x8f8484ac
    beqz a0,L1b9650
    .word 0xafa200b8
    .word 0x8c820010
    addiu a2,sp,176
    jalr ra,v0
    addiu a1,zero,6
L1b9650:
    paddub v0,s2,zero
L1b9654:
    .word 0x7bbf0090
    .word 0x7bbe0080
    .word 0x7bb70070
    .word 0x7bb60060
    .word 0x7bb50050
    .word 0x7bb40040
    .word 0x7bb30030
    .word 0x7bb20020
    .word 0x7bb10010
    .word 0x7bb00000
    jr ra
    addiu sp,sp,192
}


