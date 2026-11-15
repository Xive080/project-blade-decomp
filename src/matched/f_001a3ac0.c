extern void func_00178510(void);
extern void func_0024b470(void);
extern void func_0024b540(void);
extern void func_001785a0(void);
extern void func_001784a0(void);
extern void func_0024c660(void);
asm void func(void) {
    .set noreorder
    addiu sp,sp,-64
    .word 0x7fbf0020
    .word 0x7fb10010
    .word 0x7fb00000
    sltiu at,a1,19
    paddub s1,a0,zero
    beqz at,L1a3f7c
    paddub s0,a2,zero
    .word 0x3c03002f
    addiu v1,v1,48
    sll v0,a1,0x2
    addu v0,v0,v1
    .word 0x8c420000
    jr v0
    nop
    .word 0xae20001c
    .word 0x8e020000
    beqz v0,L1a3b10
    nop
    .word 0xae22001c
L1a3b10:
    .word 0xaf808514
    .word 0x8e220004
    andi v0,v0,0x20
    jal func_00178510
    sltu a0,zero,v0
    b L1a3f80
    addiu v0,zero,1
    .word 0x8e230014
    beqz v1,L1a3b54
    nop
    .word 0x8e220018
    .word 0x70002e28
    sll v0,v0,0x5
    addu a0,v1,v0
    .word 0x8c820000
    jalr ra,v0
    .word 0x70003628
L1a3b54:
    b L1a3f7c
    .word 0xaf808518
    .word 0x8e230014
    beqz v1,L1a3f7c
    nop
    .word 0x8e220018
    addiu a1,zero,1
    sll v0,v0,0x5
    addu a0,v1,v0
    .word 0x8c820000
    jalr ra,v0
    .word 0x70003628
    b L1a3f7c
    nop
    .word 0x8e230014
    beqz v1,L1a3f7c
    nop
    .word 0x8e220018
    sll v0,v0,0x5
    addu s0,v1,v0
    .word 0x8e020008
    andi v0,v0,0x1
    bnez v0,L1a3bd4
    nop
    .word 0x8e020000
    addiu a1,zero,2
    jalr ra,v0
    paddub a0,s0,zero
    bnez v0,L1a3bd4
    nop
    b L1a3f80
    .word 0x70001628
L1a3bd4:
    .word 0x8e220010
    sltiu at,v0,2
    bnez at,L1a3f7c
    nop
    .word 0x8e020000
    addiu a1,zero,1
    paddub a0,s0,zero
    jalr ra,v0
    .word 0x70003628
    .word 0x8e220018
    bnezl v0,L1a3c28
    addiu v0,v0,-1
    .word 0x8e220010
    addiu v0,v0,-1
    .word 0xae220018
    .word 0x8e230018
    .word 0x8e220014
    sll v1,v1,0x5
    b L1a3c30
    addu s0,v0,v1
    addiu v0,v0,-1
L1a3c28:
    addiu s0,s0,-32
    .word 0xae220018
L1a3c30:
    .word 0x8e020000
    paddub a0,s0,zero
    .word 0x70002e28
    jalr ra,v0
    .word 0x70003628
    addiu a0,zero,22
    jal func_0024b470
    .word 0x70002e28
    .word 0x8e020004
    addiu a2,sp,48
    addiu a0,zero,24
    .word 0x70002e28
    .word 0xafa20030
    .word 0x8e020008
    andi v0,v0,0x1
    sltu v0,zero,v0
    .word 0xa3a20034
    jal func_0024b540
    .word 0xa3a00035
    jal func_001785a0
    addiu a0,zero,4
    b L1a3f7c
    nop
    .word 0x8e230014
    beqz v1,L1a3f7c
    nop
    .word 0x8e220018
    sll v0,v0,0x5
    addu s0,v1,v0
    .word 0x8e020008
    andi v0,v0,0x1
    bnez v0,L1a3cd4
    nop
    .word 0x8e020000
    addiu a1,zero,3
    jalr ra,v0
    paddub a0,s0,zero
    bnez v0,L1a3cd4
    nop
    b L1a3f80
    .word 0x70001628
L1a3cd4:
    .word 0x8e220010
    sltiu at,v0,2
    bnez at,L1a3f7c
    nop
    .word 0x8e020000
    addiu a1,zero,1
    paddub a0,s0,zero
    jalr ra,v0
    .word 0x70003628
    .word 0x8e220010
    .word 0x8e230018
    addiu v0,v0,-1
    bne v1,v0,L1a3d1c
    addiu v0,v1,1
    .word 0xae200018
    b L1a3d24
    .word 0x8e300014
    addiu v0,v1,1
L1a3d1c:
    addiu s0,s0,32
    .word 0xae220018
L1a3d24:
    .word 0x8e020000
    paddub a0,s0,zero
    .word 0x70002e28
    jalr ra,v0
    .word 0x70003628
    addiu a0,zero,22
    jal func_0024b470
    addiu a1,zero,1
    .word 0x8e020004
    addiu a2,sp,56
    addiu a0,zero,24
    .word 0x70002e28
    .word 0xafa20038
    .word 0x8e020008
    andi v0,v0,0x1
    sltu v0,zero,v0
    .word 0xa3a2003c
    jal func_0024b540
    .word 0xa3a0003d
    jal func_001785a0
    addiu a0,zero,4
    b L1a3f7c
    nop
    .word 0x8e230014
    beqz v1,L1a3f7c
    nop
    .word 0x8e220018
    sll v0,v0,0x5
    addu a0,v1,v0
    .word 0x8c820008
    andi v0,v0,0x1
    bnez v0,L1a3f7c
    nop
    .word 0x8c820000
    jalr ra,v0
    addiu a1,zero,4
    b L1a3f7c
    nop
    .word 0x8e230014
    beqz v1,L1a3f7c
    nop
    .word 0x8e220018
    sll v0,v0,0x5
    addu a0,v1,v0
    .word 0x8c820008
    andi v0,v0,0x1
    bnez v0,L1a3f7c
    nop
    .word 0x8c820000
    jalr ra,v0
    addiu a1,zero,5
    b L1a3f7c
    nop
    .word 0x8e230014
    beqz v1,L1a3f7c
    nop
    .word 0x8e220004
    andi v0,v0,0x10
    bnez v0,L1a3f7c
    nop
    .word 0x8e220018
    sll v0,v0,0x5
    addu a0,v1,v0
    .word 0x8c820008
    andi v0,v0,0x1
    bnez v0,L1a3f7c
    nop
    .word 0x8c820000
    jalr ra,v0
    addiu a1,zero,6
    b L1a3f7c
    nop
    .word 0x8e220004
    andi v0,v0,0x8
    bnez v0,L1a3f7c
    nop
    .word 0x8e230014
    beqz v1,L1a3e98
    nop
    .word 0x8e220018
    sll v0,v0,0x5
    addu a0,v1,v0
    .word 0x8c820008
    andi v0,v0,0x1
    bnez v0,L1a3e98
    nop
    .word 0x8c820000
    jalr ra,v0
    addiu a1,zero,7
    bnez v0,L1a3e98
    nop
    b L1a3f80
    .word 0x70001628
L1a3e98:
    .word 0x8e23001c
    beqz v1,L1a3ec8
    addiu a0,zero,5
    addiu v0,zero,1
    .word 0x3c010031
    .word 0xac227404
    .word 0x3c010031
    .word 0xac237408
    .word 0x3c010031
    b L1a3ed0
    .word 0xac20740c
    addiu a0,zero,5
L1a3ec8:
    jal func_001784a0
    nop
L1a3ed0:
    jal func_001785a0
    addiu a0,zero,1
    b L1a3f7c
    nop
    .word 0x8e24001c
    beqz a0,L1a3f7c
    nop
    .word 0x8c820000
    jalr ra,v0
    addiu a1,zero,12
    b L1a3f7c
    nop
    .word 0x8e24001c
    .word 0x8c820000
    jalr ra,v0
    addiu a1,zero,14
    b L1a3f7c
    nop
    jal func_0024c660
    nop
    .word 0x8e230014
    beqz v1,L1a3f7c
    nop
    .word 0x8e220018
    sll v0,v0,0x5
    addu a0,v1,v0
    .word 0x8c820008
    andi v0,v0,0x1
    bnez v0,L1a3f7c
    nop
    .word 0x8c820000
    addiu a1,zero,8
    jalr ra,v0
    paddub a2,s0,zero
    b L1a3f7c
    nop
    .word 0xc7818518
    .word 0x3c023ca3
    ori v0,v0,0xd70a
    .word 0x44820000
    nop
    add.s $f0,$f1,$f0
    .word 0xe7808518
L1a3f7c:
    addiu v0,zero,1
L1a3f80:
    .word 0x7bbf0020
    .word 0x7bb10010
    .word 0x7bb00000
    jr ra
    addiu sp,sp,64
}


