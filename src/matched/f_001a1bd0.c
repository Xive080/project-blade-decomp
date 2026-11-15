extern void fn_13b550(void);
extern void fn_195a90(void);
extern void fn_1a3fe0(void);
extern void fn_24b540(void);
extern void fn_24b470(void);
extern void fn_1785a0(void);
extern void fn_1b6f70(void);
extern void fn_1b85a0(void);
extern void fn_24b4b0(void);
extern void fn_1a09c0(void);
extern void fn_1a3ac0(void);
asm void func(void) {
    .set noreorder
    addiu sp,sp,-112
    .word 0x7fbf0040
    .word 0x7fb30030
    .word 0x7fb20020
    .word 0x7fb10010
    .word 0x7fb00000
    addiu v0,zero,18
    paddub s2,a1,zero
    paddub s1,a2,zero
    paddub s3,a0,zero
    beq s2,v0,L1a1db4
    .word 0x70008628
    addiu v0,zero,10
    beql s2,v0,L1a1da0
    addiu s0,zero,1
    addiu v0,zero,9
    beq s2,v0,L1a1d90
    .word 0x70002628
    addiu v0,zero,1
    beq s2,v0,L1a1c2c
    nop
    b L1a1e04
    nop
L1a1c2c:
    .word 0x8f8289f0
    .word 0x8f848328
    .word 0x70002e28
    jal fn_13b550
    addiu s0,v0,152
    .word 0x3c010031
    .word 0xac226488
    .word 0x3c010031
    .word 0x3c020031
    .word 0xac20648c
    addiu v0,v0,25664
    .word 0x3c010031
    .word 0xac226494
    addiu v0,zero,2
    .word 0x3c010031
    .word 0xac226490
    .word 0x3c010031
    .word 0x3c020031
    .word 0xac206498
    .word 0x3c010031
    addiu a0,v0,25664
    addiu a1,zero,276
    jal fn_195a90
    .word 0xac206484
    .word 0x3c020031
    addiu a0,v0,25696
    jal fn_195a90
    addiu a1,zero,275
    .word 0x3c010031
    .word 0x8c227404
    bnez v0,L1a1cc0
    nop
    .word 0x8e620000
    addiu a2,sp,80
    addiu a1,zero,13
    jalr ra,v0
    paddub a0,s3,zero
L1a1cc0:
    .word 0x8fa20050
    .word 0x8f848328
    addiu a1,zero,143
    .word 0xaf80851c
    jal fn_13b550
    addiu s1,v0,1
    paddub a1,s1,zero
    paddub a0,v0,zero
    jal fn_1a3fe0
    .word 0x70003628
    .word 0xafa20068
    addiu v0,zero,1
    addiu a2,sp,104
    addiu a0,zero,18
    .word 0xafa2006c
    jal fn_24b540
    .word 0x70002e28
    .word 0xc601001c
    .word 0x3c0242c8
    .word 0x44820000
    addiu a0,zero,17
    .word 0x70002e28
    add.s $f0,$f0,$f1
    .word 0x70003628
    jal fn_24b540
    .word 0xe6000024
    addiu a0,zero,21
    addiu a1,zero,1
    jal fn_24b540
    .word 0x70003628
    .word 0x3c020031
    addiu a2,v0,25728
    addiu a0,zero,22
    jal fn_24b540
    addiu a1,zero,1
    .word 0x3c010031
    .word 0x8c226494
    addiu a2,sp,88
    addiu a0,zero,24
    addiu a1,zero,1
    .word 0x8c420004
    .word 0xafa20058
    .word 0xa3a0005c
    jal fn_24b540
    .word 0xa3a0005d
    addiu a0,zero,19
    jal fn_24b470
    .word 0x70002e28
    .word 0x3c010031
    addiu v0,zero,1
    b L1a1ea4
    .word 0xac206498
L1a1d90:
    jal fn_1785a0
    nop
    b L1a1e04
    addiu s0,zero,1
L1a1da0:
    jal fn_1785a0
    paddub a0,s0,zero
    .word 0x3c010031
    b L1a1e04
    .word 0xac206498
L1a1db4:
    .word 0x3c010031
    .word 0x8c227404
    bnez v0,L1a1dd4
    nop
    .word 0x8e620000
    addiu a2,sp,96
    jalr ra,v0
    addiu a1,zero,13
L1a1dd4:
    jal fn_1b6f70
    nop
    jal fn_1b85a0
    .word 0x8fa40060
    addiu v1,zero,7
    beq v0,v1,L1a1e04
    addiu v1,zero,6
    beq v0,v1,L1a1e04
    nop
    .word 0x3c010031
    addiu s0,zero,1
    .word 0xac206498
L1a1e04:
    beqz s0,L1a1e84
    .word 0x3c020031
    .word 0x8f8289f0
    addiu a0,zero,18
    .word 0x70002e28
    jal fn_24b4b0
    addiu s0,v0,152
    addiu a0,zero,24
    jal fn_24b4b0
    .word 0x70002e28
    addiu a0,zero,22
    jal fn_24b4b0
    .word 0x70002e28
    addiu a0,zero,21
    jal fn_24b4b0
    .word 0x70002e28
    .word 0xc600001c
    .word 0x3c010031
    .word 0xe6000024
    .word 0x8c226498
    bnez v0,L1a1e70
    addiu a1,zero,5
    paddub a0,s3,zero
    jal fn_1a09c0
    .word 0x70002e28
    b L1a1e7c
    addiu v0,zero,1
L1a1e70:
    jal fn_1a09c0
    paddub a0,s3,zero
    addiu v0,zero,1
L1a1e7c:
    b L1a1ea8
    .word 0x7bbf0040
L1a1e84:
    addiu a0,v0,25728
    paddub a1,s2,zero
    jal fn_1a3ac0
    paddub a2,s1,zero
    paddub a0,s3,zero
    paddub a1,s2,zero
    jal fn_1a3ac0
    paddub a2,s1,zero
L1a1ea4:
    .word 0x7bbf0040
L1a1ea8:
    .word 0x7bb30030
    .word 0x7bb20020
    .word 0x7bb10010
    .word 0x7bb00000
    jr ra
    addiu sp,sp,112
}


