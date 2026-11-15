extern void func_00173710(void);
extern void func_00197580(void);
extern void func_00197ea0(void);
extern void func_001981a0(void);
extern void func_001a3fa0(void);
extern void func_001a9780(void);
extern void func_0024af60(void);
extern void func_0024c6a0(void);
asm void f(void) {
    .set noreorder
    .set noat
    addiu sp,sp,-80
    .word 0x7fbf0040
    .word 0x7fb30030
    .word 0x7fb20020
    .word 0x7fb10010
    jal func_0024af60
    .word 0x7fb00000
    .word 0x3c010031
    .word 0x8c229e0c
    bnez v0,L178910
    .word 0x3c017000
    .word 0x8c233fc8
    addiu v0,zero,5
    beq v1,v0,L178844
    nop
    b L178898
    nop
L178844:
    jal func_00173710
    nop
    addiu v1,zero,3
    beql v0,v1,L178890
    addiu s1,zero,-1
    addiu v1,zero,4
    beq v0,v1,L17888c
    addiu v1,zero,1
    beql v0,v1,L178884
    addiu s0,zero,-1
    addiu v1,zero,2
    beq v0,v1,L178880
    nop
    b L1788d4
    .word 0x3c023ca3
L178880:
    addiu s0,zero,-1
L178884:
    b L1788d0
    paddub s1,zero,zero
L17888c:
    addiu s1,zero,-1
L178890:
    b L1788d0
    paddub s0,zero,zero
L178898:
    jal func_001a3fa0
    nop
    beqz v0,L1788cc
    paddub s0,zero,zero
    .word 0x8c420004
    andi v0,v0,0x4
    beqz v0,L1788c4
    addiu s0,zero,-1
    addiu s0,zero,512
    b L1788d0
    addiu s1,zero,-1
L1788c4:
    b L1788d0
    paddub s1,zero,zero
L1788cc:
    paddub s1,zero,zero
L1788d0:
    .word 0x3c023ca3
L1788d4:
    ori v0,v0,0xd70a
    mtc1 v0,$f12
    paddub a1,s0,zero
    .word 0x3c020018
    addiu a2,v0,-30144
    jal func_00197580
    paddub a0,zero,zero
    .word 0x3c023ca3
    ori v0,v0,0xd70a
    mtc1 v0,$f12
    addiu a0,zero,1
    .word 0x3c020018
    addiu a2,v0,-30144
    jal func_00197580
    paddub a1,s1,zero
L178910:
    jal func_00197ea0
    nop
    .word 0x3c010031
    .word 0xc4219e14
    .word 0x3c023ca3
    ori v0,v0,0xd70a
    mtc1 v0,$f2
    mtc1 zero,$f0
    nop
    sub.s $f1,$f1,$f2
    .word 0x3c010031
    c.lt.s $f1,$f0
    nop
    bc1f L17897c
    .word 0xe4219e14
    addiu a0,zero,16
    jal func_001981a0
    paddub a1,zero,zero
    .word 0x3c010031
    .word 0xc4219e14
    .word 0x3c023eec
    ori v0,v0,0x4ec5
    mtc1 v0,$f0
    nop
    add.s $f0,$f1,$f0
    .word 0x3c010031
    .word 0xe4209e14
L17897c:
    .word 0x3c023ca3
    ori v0,v0,0xd70a
    mtc1 v0,$f12
    jal func_0024c6a0
    nop
    .word 0x3c010031
    .word 0x8c239e0c
    beqz v1,L178a20
    .word 0x3c010031
    .word 0x8c239e10
    beqz v1,L178a20
    nop
    .word 0x3c020031
    addiu s2,v0,-31664
    paddub s1,zero,zero
L1789b8:
    paddub s0,zero,zero
    b L1789e8
    paddub s3,s2,zero
L1789c4:
    jal func_001a9780
    paddub a0,s3,zero
    .word 0x924201d3
    beqzl v0,L1789e4
    addiu s3,s3,116
    jal func_001a9780
    addiu a0,s3,232
    addiu s3,s3,116
L1789e4:
    addiu s0,s0,1
L1789e8:
    .word 0x924201d1
    sltu v0,s0,v0
    bnez v0,L1789c4
    nop
    addiu s1,s1,1
    sltiu v0,s1,14
    bnez v0,L1789b8
    addiu s2,s2,468
    .word 0x3c010031
    .word 0x8c249e04
    .word 0x3c010031
    .word 0x8c229e00
    jalr ra,v0
    paddub a1,zero,zero
L178a20:
    .word 0x7bbf0040
    .word 0x7bb30030
    .word 0x7bb20020
    .word 0x7bb10010
    .word 0x7bb00000
    jr ra
    addiu sp,sp,80
}
