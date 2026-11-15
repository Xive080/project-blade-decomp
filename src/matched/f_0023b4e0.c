extern void func_001ca470(void);
extern void func_001c0180(void);
extern void func_001c0240(void);
asm void func(void) {
    .set noreorder
    addiu sp,sp,-112
    .word 0x7fbf0040
    .word 0x7fb30030
    .word 0x7fb20020
    .word 0x7fb10010
    .word 0x7fb00000
    .word 0x8f828990
    addu v0,a2,v0
    .word 0x8c510000
    bne zero,s1,L23b514
    paddub s2,a0,zero
    b L23b51c
    .word 0xafa00054
L23b514:
    .word 0x8e220080
    .word 0xafa20054
L23b51c:
    addiu a1,sp,84
    paddub a0,s2,zero
    jal func_001ca470
    addiu a2,zero,4
    bne zero,v0,L23b53c
    .word 0x70001628
    b L23b784
    .word 0x7bbf0040
L23b53c:
    .word 0x8fa20054
    bnez v0,L23b550
    .word 0x70008628
    b L23b780
    .word 0x70001628
L23b550:
    b L23b774
    andi v0,s0,0xff
L23b558:
    .word 0x8e220030
    addiu a1,sp,88
    paddub a0,s2,zero
    addiu a2,zero,4
    jal func_001ca470
    .word 0xafa20058
    bne zero,v0,L23b580
    .word 0x70001628
    b L23b780
    nop
L23b580:
    .word 0x8fa30058
    addiu v0,zero,4
    beq v1,v0,L23b6e8
    addiu a1,s1,4
    addiu v0,zero,2
    beq v1,v0,L23b668
    addiu a1,s1,8
    addiu v0,zero,1
    beq v1,v0,L23b5b8
    nop
    beqz v1,L23b764
    addiu v0,s0,1
    b L23b760
    nop
L23b5b8:
    .word 0xc620000c
    addiu a1,sp,92
    paddub a0,s2,zero
    addiu a2,zero,4
    neg.s $f0,$f0
    jal func_001ca470
    .word 0xe7a0005c
    bne zero,v0,L23b5e4
    .word 0x70001628
    b L23b780
    nop
L23b5e4:
    .word 0x8e330004
    addiu a1,sp,96
    paddub a0,s2,zero
    addiu a2,zero,4
    sltu v0,zero,s3
    jal func_001ca470
    .word 0xafa20060
    .word 0x8fa20060
    beqz v0,L23b620
    paddub a0,s3,zero
    jal func_001c0180
    nop
    paddub a0,s3,zero
    jal func_001c0240
    paddub a1,s2,zero
L23b620:
    .word 0x8e330008
    addiu a1,sp,100
    paddub a0,s2,zero
    addiu a2,zero,4
    sltu v0,zero,s3
    jal func_001ca470
    .word 0xafa20064
    .word 0x8fa20064
    beqz v0,L23b760
    paddub a0,s3,zero
    jal func_001c0180
    nop
    paddub a0,s3,zero
    jal func_001c0240
    paddub a1,s2,zero
    b L23b760
    nop
    addiu a1,s1,8
L23b668:
    paddub a0,s2,zero
    jal func_001ca470
    addiu a2,zero,4
    bne zero,v0,L23b684
    addiu a1,s1,12
    b L23b780
    .word 0x70001628
L23b684:
    paddub a0,s2,zero
    jal func_001ca470
    addiu a2,zero,4
    bne zero,v0,L23b6a0
    .word 0x70001628
    b L23b780
    nop
L23b6a0:
    .word 0x8e330004
    addiu a1,sp,104
    paddub a0,s2,zero
    addiu a2,zero,4
    sltu v0,zero,s3
    jal func_001ca470
    .word 0xafa20068
    .word 0x8fa20068
    beqz v0,L23b760
    paddub a0,s3,zero
    jal func_001c0180
    nop
    paddub a0,s3,zero
    jal func_001c0240
    paddub a1,s2,zero
    b L23b760
    nop
    addiu a1,s1,4
L23b6e8:
    paddub a0,s2,zero
    jal func_001ca470
    addiu a2,zero,4
    bne zero,v0,L23b704
    addiu a1,s1,8
    b L23b780
    .word 0x70001628
L23b704:
    paddub a0,s2,zero
    jal func_001ca470
    addiu a2,zero,4
    bne zero,v0,L23b720
    .word 0x70001628
    b L23b780
    nop
L23b720:
    .word 0x8e330000
    addiu a1,sp,108
    paddub a0,s2,zero
    addiu a2,zero,4
    sltu v0,zero,s3
    jal func_001ca470
    .word 0xafa2006c
    .word 0x8fa2006c
    beqz v0,L23b760
    paddub a0,s3,zero
    jal func_001c0180
    nop
    paddub a0,s3,zero
    jal func_001c0240
    paddub a1,s2,zero
    nop
L23b760:
    addiu v0,s0,1
L23b764:
    addiu s1,s1,64
    andi s0,v0,0xff
    nop
    andi v0,s0,0xff
L23b774:
    slti v0,v0,2
    bnez v0,L23b558
    paddub v0,s2,zero
L23b780:
    .word 0x7bbf0040
L23b784:
    .word 0x7bb30030
    .word 0x7bb20020
    .word 0x7bb10010
    .word 0x7bb00000
    jr ra
    addiu sp,sp,112
}


