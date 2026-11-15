extern void func_00228b10(void);
extern void func_00234ff0(void);
extern void func_0013b550(void);
asm void func(void) {
    .set noreorder
    addiu sp,sp,-144
    .word 0x7fbf0060
    .word 0x7fb50050
    .word 0x7fb40040
    .word 0x7fb30030
    .word 0x7fb20020
    .word 0x7fb10010
    .word 0x7fb00000
    paddub s0,a0,zero
    .word 0x8f8484ac
    .word 0xafa00070
    .word 0xafa00074
    .word 0xafa00078
    beqz a0,L2282fc
    .word 0xafa0007c
    .word 0x8c820010
    addiu a2,sp,112
    jalr ra,v0
    addiu a1,zero,14
L2282fc:
    .word 0x8e050154
    addiu v1,zero,1
    xor v0,a1,zero
    sltiu v0,v0,1
    bnez v0,L22831c
    paddub a0,v1,zero
    xori v0,a1,0x3
    sltiu v0,v0,1
L22831c:
    bnez v0,L228334
    nop
    addiu v0,zero,1
    beq a1,v0,L228334
    nop
    .word 0x70002628
L228334:
    bnez a0,L22834c
    nop
    addiu v0,zero,4
    beq a1,v0,L22834c
    nop
    .word 0x70001e28
L22834c:
    bnez v1,L228374
    addiu s1,zero,2
    addiu v0,a1,-5
    sltiu at,v0,2
    bnez at,L228368
    addiu v1,zero,1
    .word 0x70001e28
L228368:
    beqz v1,L2283fc
    addiu s5,zero,2
    addiu s1,zero,2
L228374:
    paddub v0,s1,zero
    beqz v0,L2283f8
    addiu s1,s1,-1
    sll v0,s1,0x4
    addu v0,v0,s1
    sll v0,v0,0x2
    addu s2,s0,v0
    addiu v0,zero,1456
    mult v1,s1,v0
    .word 0x3c020030
    addiu v0,v0,27648
    addu s3,v0,v1
L2283a4:
    .word 0x8e420038
    bnez v0,L2283e4
    paddub v0,s1,zero
    .word 0x8e03013c
    .word 0x8e020130
    addiu a1,s3,896
    sll v1,v1,0x4
    addu v0,v0,v1
    .word 0x8c460004
    jal func_00228b10
    paddub a0,s0,zero
    beqz v0,L2283e0
    nop
    addiu v0,zero,1
    .word 0xae420038
L2283e0:
    paddub v0,s1,zero
L2283e4:
    addiu s2,s2,-68
    addiu s3,s3,-1456
    bnez v0,L2283a4
    addiu s1,s1,-1
    nop
L2283f8:
    addiu s5,zero,2
L2283fc:
    paddub v0,s5,zero
    beqz v0,L228530
    addiu s5,s5,-1
    addiu v0,zero,1456
    mult v1,s5,v0
    .word 0x3c020030
    addiu v0,v0,27648
    addu s2,v0,v1
    sll v0,s5,0x4
    addu v0,v0,s5
    sll v0,v0,0x2
    addu s3,s0,v0
    sll v0,s5,0x3
    addu s4,s0,v0
L228434:
    .word 0x8e620038
    beqz v0,L22849c
    .word 0x8e510388
    jal func_00234ff0
    nop
    addiu v1,zero,5
    .word 0x0043001a
    .word 0x3c017000
    nop
    mfhi v1
    .word 0x3c02002e
    addiu v0,v0,26464
    sll v1,v1,0x2
    addu v0,v0,v1
    .word 0x8c430000
    sll v0,v1,0x3
    subu v0,v0,v1
    sll v0,v0,0x2
    addu v0,v0,v1
    sll v0,v0,0x2
    addu v0,s1,v0
    addiu v0,v0,5844
    .word 0xae82017c
    .word 0xc4203fb0
    b L228518
    .word 0xe6800178
L22849c:
    jal func_00234ff0
    nop
    andi v0,v0,0x1
    beqz v0,L22851c
    paddub v0,s5,zero
    jal func_00234ff0
    nop
    addiu v1,zero,3
    .word 0x0043001a
    .word 0x3c017000
    .word 0x3c02002e
    addiu v1,v0,26488
    .word 0x3c023f19
    ori v0,v0,0x999a
    .word 0x44820000
    mfhi v0
    sll v0,v0,0x2
    addu v0,v1,v0
    .word 0x8c430000
    sll v0,v1,0x3
    subu v0,v0,v1
    sll v0,v0,0x2
    addu v0,v0,v1
    sll v0,v0,0x2
    addu v0,s1,v0
    addiu v0,v0,5844
    .word 0xae82017c
    .word 0xc4213fb0
    add.s $f0,$f0,$f1
    .word 0xe6800178
    nop
L228518:
    paddub v0,s5,zero
L22851c:
    addiu s2,s2,-1456
    addiu s3,s3,-68
    addiu s4,s4,-8
    bnez v0,L228434
    addiu s5,s5,-1
L228530:
    .word 0x8e020038
    bnez v0,L2285a4
    addiu a1,zero,2
    .word 0x8e02007c
    bnez v0,L2285a0
    nop
    .word 0x8f848328
    jal func_0013b550
    addiu a1,zero,371
    .word 0x8f8484ac
    beqz a0,L22856c
    paddub a2,v0,zero
    .word 0x8c820010
    jalr ra,v0
    addiu a1,zero,10
L22856c:
    .word 0x8f8484ac
    .word 0xafa00080
    .word 0xafa00084
    addiu v1,zero,1
    .word 0xafa00088
    beqz a0,L2286d8
    .word 0xafa3008c
    .word 0x8c820010
    addiu a2,sp,128
    jalr ra,v0
    addiu a1,zero,14
    b L2286dc
    .word 0x7bbf0060
L2285a0:
    addiu a1,zero,2
L2285a4:
    paddub v0,a1,zero
    beqz v0,L228668
    addiu a1,a1,-1
    addiu a2,zero,1456
    mult a3,a1,a2
    sll v0,a1,0x4
    addu v0,v0,a1
    .word 0x3c060030
    addiu a2,a2,27648
    sll v0,v0,0x2
    addiu v1,gp,-30560
    sll a0,a1,0x2
    addu v0,s0,v0
    addu v1,v1,a0
    addu t0,a2,a3
L2285e0:
    .word 0x8c460038
    beqz a2,L22864c
    paddub a2,a1,zero
    .word 0x8c660000
    addiu a2,a2,1
    .word 0xac660000
    .word 0x8e07013c
    .word 0x8e060130
    .word 0xc50004d0
    sll a3,a3,0x4
    addu a2,a2,a3
    .word 0xc4c10008
    cvt.s.w $f1,$f1
    add.s $f0,$f0,$f1
    .word 0xe50004d0
    .word 0x8e07013c
    .word 0x8e060130
    sll a3,a3,0x4
    addu a2,a2,a3
    .word 0x8cc60000
    sll a2,a2,0x4
    addu a2,s0,a2
    addu a3,a2,a0
    .word 0x8ce600c8
    addiu a2,a2,1
    .word 0xace600c8
    paddub a2,a1,zero
L22864c:
    addiu v0,v0,-68
    addiu v1,v1,-4
    addiu t0,t0,-1456
    addiu a0,a0,-4
    bnez a2,L2285e0
    addiu a1,a1,-1
    nop
L228668:
    .word 0x8e030038
    beqz v1,L2286ac
    nop
    .word 0x8e02007c
    beqz v0,L2286ac
    nop
    .word 0x8f848328
    jal func_0013b550
    addiu a1,zero,368
    .word 0x8f8484ac
    beqz a0,L2286d8
    paddub a2,v0,zero
    .word 0x8c820010
    jalr ra,v0
    addiu a1,zero,10
    b L2286d8
    nop
L2286ac:
    .word 0x8f848328
    addiu a1,zero,369
    addiu v0,zero,370
    jal func_0013b550
    movz a1,v0,v1
    .word 0x8f8484ac
    beqz a0,L2286d8
    paddub a2,v0,zero
    .word 0x8c820010
    jalr ra,v0
    addiu a1,zero,10
L2286d8:
    .word 0x7bbf0060
L2286dc:
    .word 0x7bb50050
    .word 0x7bb40040
    .word 0x7bb30030
    .word 0x7bb20020
    .word 0x7bb10010
    .word 0x7bb00000
    jr ra
    addiu sp,sp,144
}


