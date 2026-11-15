extern void func_0013b550(void);
extern void func_00195a90(void);
extern void func_001a3fe0(void);
extern void func_0024b540(void);
extern void func_0024b470(void);
extern void func_001785a0(void);
extern void func_001b6f70(void);
extern void func_001b85a0(void);
extern void func_0024b4b0(void);
extern void func_001a09c0(void);
extern void func_001b5310(void);
extern void func_001a3ac0(void);
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
    beq s2,v0,L1a1a38
    .word 0x70008628
    addiu v0,zero,10
    beql s2,v0,L1a1a24
    addiu s0,zero,1
    addiu v0,zero,9
    beq s2,v0,L1a1a14
    .word 0x70002628
    addiu v0,zero,1
    beq s2,v0,L1a18dc
    nop
    b L1a1aa8
    nop
L1a18dc:
    .word 0x8f8289f0
    .word 0x8f848328
    .word 0x70002e28
    jal func_0013b550
    addiu s0,v0,152
    .word 0x3c010031
    .word 0xac226428
    .word 0x3c010031
    .word 0x3c020031
    .word 0xac20642c
    addiu v0,v0,25568
    .word 0x3c010031
    .word 0xac226434
    addiu v0,zero,2
    .word 0x3c010031
    .word 0xac226430
    .word 0x3c010031
    .word 0x3c020031
    .word 0xac206438
    .word 0x3c010031
    addiu a0,v0,25568
    addiu a1,zero,276
    jal func_00195a90
    .word 0xac206424
    .word 0x3c020031
    addiu a0,v0,25600
    jal func_00195a90
    addiu a1,zero,275
    .word 0x8f848328
    addiu a1,zero,156
    jal func_0013b550
    .word 0xaf80851c
    paddub a0,v0,zero
    .word 0x70002e28
    jal func_001a3fe0
    .word 0x70003628
    .word 0xafa20068
    addiu v0,zero,1
    addiu a2,sp,104
    addiu a0,zero,18
    .word 0xafa2006c
    jal func_0024b540
    .word 0x70002e28
    .word 0xc601001c
    .word 0x3c0242c8
    .word 0x44820000
    addiu a0,zero,17
    .word 0x70002e28
    add.s $f0,$f0,$f1
    .word 0x70003628
    jal func_0024b540
    .word 0xe6000024
    addiu a0,zero,21
    addiu a1,zero,1
    jal func_0024b540
    .word 0x70003628
    .word 0x3c020031
    addiu a2,v0,25632
    addiu a0,zero,22
    jal func_0024b540
    addiu a1,zero,1
    .word 0x3c010031
    .word 0x8c226434
    addiu a2,sp,80
    addiu a0,zero,24
    addiu a1,zero,1
    .word 0x8c420004
    .word 0xafa20050
    .word 0xa3a00054
    jal func_0024b540
    .word 0xa3a00055
    addiu a0,zero,19
    jal func_0024b470
    .word 0x70002e28
    .word 0x3c010031
    addiu v0,zero,1
    b L1a1bac
    .word 0xac206438
L1a1a14:
    jal func_001785a0
    nop
    b L1a1aa8
    addiu s0,zero,1
L1a1a24:
    jal func_001785a0
    paddub a0,s0,zero
    .word 0x3c010031
    b L1a1aa8
    .word 0xac206438
L1a1a38:
    .word 0x3c010031
    .word 0x8c227404
    bnez v0,L1a1a58
    nop
    .word 0x8e620000
    addiu a2,sp,88
    jalr ra,v0
    addiu a1,zero,13
L1a1a58:
    jal func_001b6f70
    nop
    .word 0x8fa40058
    addiu v0,zero,2
    beq a0,v0,L1a1aa8
    nop
    jal func_001b85a0
    nop
    addiu v1,zero,8
    beq v0,v1,L1a1aa8
    addiu v1,zero,15
    beq v0,v1,L1a1aa8
    addiu v1,zero,7
    beq v0,v1,L1a1aa8
    addiu v1,zero,6
    beq v0,v1,L1a1aa8
    nop
    .word 0x3c010031
    addiu s0,zero,1
    .word 0xac206438
L1a1aa8:
    beqz s0,L1a1b8c
    .word 0x3c020031
    .word 0x8f8289f0
    addiu a0,zero,18
    .word 0x70002e28
    jal func_0024b4b0
    addiu s0,v0,152
    addiu a0,zero,24
    jal func_0024b4b0
    .word 0x70002e28
    addiu a0,zero,22
    jal func_0024b4b0
    .word 0x70002e28
    addiu a0,zero,21
    jal func_0024b4b0
    .word 0x70002e28
    .word 0xc600001c
    .word 0x3c010031
    .word 0xe6000024
    .word 0x8c226438
    bnez v0,L1a1b14
    .word 0x3c010031
    paddub a0,s3,zero
    jal func_001a09c0
    .word 0x70002e28
    b L1a1b84
    addiu v0,zero,1
L1a1b14:
    .word 0x8c227404
    bnez v0,L1a1b34
    nop
    .word 0x8e620000
    addiu a2,sp,96
    addiu a1,zero,13
    jalr ra,v0
    paddub a0,s3,zero
L1a1b34:
    .word 0x8fa30060
    addiu v0,zero,2
    bne v1,v0,L1a1b78
    addiu a1,zero,4
    jal func_001b5310
    nop
    .word 0x3c010031
    .word 0x8c227404
    bnez v0,L1a1b80
    nop
    .word 0x8e620000
    addiu a1,zero,14
    paddub a0,s3,zero
    jalr ra,v0
    .word 0x70003628
    b L1a1b80
    nop
L1a1b78:
    jal func_001a09c0
    paddub a0,s3,zero
L1a1b80:
    addiu v0,zero,1
L1a1b84:
    b L1a1bb0
    .word 0x7bbf0040
L1a1b8c:
    addiu a0,v0,25632
    paddub a1,s2,zero
    jal func_001a3ac0
    paddub a2,s1,zero
    paddub a0,s3,zero
    paddub a1,s2,zero
    jal func_001a3ac0
    paddub a2,s1,zero
L1a1bac:
    .word 0x7bbf0040
L1a1bb0:
    .word 0x7bb30030
    .word 0x7bb20020
    .word 0x7bb10010
    .word 0x7bb00000
    jr ra
    addiu sp,sp,112
}


