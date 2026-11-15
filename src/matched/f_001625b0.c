extern void fn_1fefa0(void);
extern void fn_1ff910(void);
extern void fn_1fed50(void);
extern void fn_1a4b70(void);
extern void fn_1a4060(void);
asm void func(void) {
    .set noreorder
    addiu sp,sp,-144
    .word 0x7fbf0040
    .word 0x7fb30030
    .word 0x7fb20020
    .word 0x7fb10010
    .word 0x7fb00000
    .word 0x3c020020
    paddub s2,a0,zero
    paddub s3,a1,zero
    beq a2,v0,L1625e8
    paddub s0,a2,zero
    .word 0x3c020040
    bne s0,v0,L16269c
    nop
L1625e8:
    .word 0x8e42003c
    beqz v0,L16263c
    addiu s1,s2,60
    .word 0x8e420010
    andi v0,v0,0x2
    bnez v0,L16263c
    nop
    .word 0x8e42000c
    paddub a0,s2,zero
    .word 0x70002e28
    .word 0x8c420010
    jalr ra,v0
    addiu s3,s2,12
    beqz v0,L16263c
    nop
    .word 0x8e620000
    paddub a0,s2,zero
    .word 0x70002e28
    .word 0x8c420014
    jalr ra,v0
    .word 0x70003628
L16263c:
    .word 0x8e220000
    beq v0,s0,L162694
    addiu v0,zero,1
    .word 0x8e420010
    andi v0,v0,0x2
    bnez v0,L162690
    nop
    .word 0x8e42000c
    paddub a0,s2,zero
    paddub a1,s0,zero
    .word 0x8c420010
    jalr ra,v0
    addiu s1,s2,12
    beqz v0,L162690
    nop
    .word 0x8e220000
    paddub a0,s2,zero
    paddub a1,s0,zero
    .word 0x8c420014
    jalr ra,v0
    .word 0x70003628
L162690:
    addiu v0,zero,1
L162694:
    b L162824
    .word 0x7bbf0040
L16269c:
    bnez s3,L1626ac
    nop
    b L162820
    .word 0x70001628
L1626ac:
    .word 0x8e7100cc
    bnez s1,L1626c0
    nop
    b L162820
    .word 0x70001628
L1626c0:
    .word 0x8e2505f4
    bnez a1,L1626d4
    nop
    b L162820
    .word 0x70001628
L1626d4:
    jal fn_1fefa0
    .word 0x8e440070
    bnez v0,L1626ec
    nop
    b L162820
    .word 0x70001628
L1626ec:
    .word 0xc62c05ec
    .word 0x8e440070
    .word 0x3c020016
    addiu a1,v0,10928
    jal fn_1ff910
    paddub a2,s2,zero
    bnez v0,L162714
    nop
    b L162820
    .word 0x70001628
L162714:
    jal fn_1fed50
    .word 0x8e440070
    bnez v0,L16272c
    nop
    b L162820
    .word 0x70001628
L16272c:
    jal fn_1a4b70
    .word 0xae530074
    addiu v1,zero,4
    bne v0,v1,L162774
    nop
    addiu v0,zero,251
    .word 0xafa20050
    .word 0x8e420074
    addiu a0,sp,80
    .word 0x8c420000
    .word 0xafa20054
    .word 0x8e420074
    .word 0x8c420004
    .word 0xafa20058
    .word 0x8e420074
    .word 0x8c420008
    jal fn_1a4060
    .word 0xafa2005c
L162774:
    .word 0x8e42003c
    beqz v0,L1627c8
    addiu s1,s2,60
    .word 0x8e420010
    andi v0,v0,0x2
    bnez v0,L1627c8
    nop
    .word 0x8e42000c
    paddub a0,s2,zero
    .word 0x70002e28
    .word 0x8c420010
    jalr ra,v0
    addiu s3,s2,12
    beqz v0,L1627c8
    nop
    .word 0x8e620000
    paddub a0,s2,zero
    .word 0x70002e28
    .word 0x8c420014
    jalr ra,v0
    .word 0x70003628
L1627c8:
    .word 0x8e220000
    beq v0,s0,L162820
    addiu v0,zero,1
    .word 0x8e420010
    andi v0,v0,0x2
    bnez v0,L16281c
    nop
    .word 0x8e42000c
    paddub a0,s2,zero
    paddub a1,s0,zero
    .word 0x8c420010
    jalr ra,v0
    addiu s1,s2,12
    beqz v0,L16281c
    nop
    .word 0x8e220000
    paddub a0,s2,zero
    paddub a1,s0,zero
    .word 0x8c420014
    jalr ra,v0
    .word 0x70003628
L16281c:
    addiu v0,zero,1
L162820:
    .word 0x7bbf0040
L162824:
    .word 0x7bb30030
    .word 0x7bb20020
    .word 0x7bb10010
    .word 0x7bb00000
    jr ra
    addiu sp,sp,144
}


