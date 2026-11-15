extern void func_0013b550(void);
extern void func_001785a0(void);
extern void func_00195a90(void);
extern void func_001a09c0(void);
extern void func_001a3ac0(void);
extern void func_001a3fe0(void);
extern void func_001b6f70(void);
extern void func_001b85a0(void);
extern void func_0024b470(void);
extern void func_0024b4b0(void);
extern void func_0024b540(void);
asm void func(void) {
    .set noreorder
    .set noat
    .word 0x27bdff60
    .word 0x7fbf0050
    .word 0x7fb40040
    .word 0x7fb30030
    .word 0x7fb20020
    .word 0x7fb10010
    .word 0x7fb00000
    addiu v0,zero,18
    .word 0x70a09628
    .word 0x70c08e28
    .word 0x70809e28
    beq s2,v0, L1a176c
    .word 0x70008628
    addiu v0,zero,10
    beq s2,v0, L1a1754
    addiu a0,zero,1
    addiu v0,zero,9
    beq s2,v0, L1a164c
    .word 0x70002628
    addiu v0,zero,1
    beq s2,v0, L1a14e0
    nop
    b L1a17b4
    nop
L1a14e0:
    .word 0x8f8289f0
    .word 0x8f848328
    .word 0x70002e28
    jal func_0013b550
    .word 0x24500098
    .word 0x3c010031
    .word 0xac2263c8
    .word 0x3c010031
    .word 0x3c020031
    .word 0xac2063cc
    .word 0x24426380
    .word 0x3c010031
    .word 0xac2263d4
    addiu v0,zero,2
    .word 0x3c010031
    .word 0xac2263d0
    .word 0x3c010031
    .word 0x3c020031
    .word 0xac2063d8
    .word 0x3c010031
    .word 0x24446380
    addiu a1,zero,276
    jal func_00195a90
    .word 0xac2063c4
    .word 0x3c020031
    .word 0x244463a0
    jal func_00195a90
    addiu a1,zero,275
    .word 0x3c010031
    .word 0x8c227404
    bnez v0, L1a1574
    nop
    .word 0x8e620000
    .word 0x27a60068
    addiu a1,zero,13
    jalr ra,v0
    .word 0x72602628
L1a1574:
    .word 0x8fa20068
    .word 0x8f848328
    addiu a1,zero,103
    .word 0xaf80851c
    jal func_0013b550
    .word 0x24510001
    .word 0x72202e28
    .word 0x70402628
    jal func_001a3fe0
    .word 0x70003628
    .word 0xafa20090
    addiu v0,zero,1
    .word 0x27a60090
    addiu a0,zero,18
    .word 0xafa20094
    jal func_0024b540
    .word 0x70002e28
    .word 0xc601001c
    .word 0x3c0242c8
    .word 0x44820000
    addiu a0,zero,17
    .word 0x70002e28
    .word 0x46010000
    .word 0x70003628
    jal func_0024b540
    .word 0xe6000024
    addiu a0,zero,21
    addiu a1,zero,1
    jal func_0024b540
    .word 0x70003628
    .word 0x3c020031
    .word 0x244663c0
    addiu a0,zero,22
    jal func_0024b540
    addiu a1,zero,1
    .word 0x3c010031
    .word 0x8c2263d4
    .word 0x27a60070
    addiu a0,zero,24
    addiu a1,zero,1
    .word 0x8c420004
    .word 0xafa20070
    .word 0xa3a00074
    jal func_0024b540
    .word 0xa3a00075
    addiu a0,zero,19
    jal func_0024b470
    .word 0x70002e28
    .word 0x3c010031
    addiu v0,zero,1
    .word 0xac2063d8
    b L1a185c
    .word 0xaf8084f8
    .word 0x70002628
L1a164c:
    jal func_001785a0
    nop
    .word 0x8f8284f8
    bnezl v0, L1a1674
    addiu s0,zero,1
    .word 0x3c010031
    .word 0x8c2263d8
    bnez v0, L1a167c
    nop
    addiu s0,zero,1
L1a1674:
    b L1a17b4
    nop
L1a167c:
    .word 0x3c010031
    .word 0x8c227404
    bnez v0, L1a16a0
    nop
    .word 0x8e620000
    .word 0x27a60078
    addiu a1,zero,13
    jalr ra,v0
    .word 0x72602628
L1a16a0:
    .word 0x8fa20078
    .word 0x8f848328
    addiu a1,zero,104
    .word 0xaf80851c
    jal func_0013b550
    .word 0x24540001
    .word 0x72802e28
    .word 0x70402628
    jal func_001a3fe0
    .word 0x70003628
    .word 0xafa20098
    addiu v0,zero,1
    .word 0x27a60098
    addiu a0,zero,18
    .word 0xafa2009c
    jal func_0024b540
    .word 0x70002e28
    addiu a0,zero,21
    .word 0x3c010031
    addiu a1,zero,1
    .word 0x70003628
    jal func_0024b540
    .word 0xac2063d8
    .word 0x3c020031
    .word 0x244663c0
    addiu a0,zero,22
    jal func_0024b540
    addiu a1,zero,1
    .word 0x3c010031
    .word 0x8c2263d4
    .word 0x27a60080
    addiu a0,zero,24
    addiu a1,zero,1
    .word 0x8c420004
    .word 0xafa20080
    .word 0xa3a00084
    jal func_0024b540
    .word 0xa3a00085
    addiu a0,zero,19
    jal func_0024b470
    .word 0x70002e28
    addiu v0,zero,1
    b L1a17b4
    .word 0xaf8284f8
    addiu a0,zero,1
L1a1754:
    jal func_001785a0
    nop
    .word 0x3c010031
    addiu s0,zero,1
    b L1a17b4
    .word 0xac2063d8
L1a176c:
    .word 0x3c010031
    .word 0x8c227404
    bnez v0, L1a178c
    nop
    .word 0x8e620000
    .word 0x27a60088
    jalr ra,v0
    addiu a1,zero,13
L1a178c:
    jal func_001b6f70
    nop
    jal func_001b85a0
    .word 0x8fa40088
    addiu v1,zero,15
    beq v0,v1, L1a17b4
    nop
    .word 0x3c010031
    addiu s0,zero,1
    .word 0xac2063d8
L1a17b4:
    beqz s0, L1a1838
    nop
    .word 0x8f8289f0
    addiu a0,zero,18
    .word 0x70002e28
    jal func_0024b4b0
    .word 0x24500098
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
    .word 0x8c2263d8
    bnez v0, L1a1824
    addiu a1,zero,8
    .word 0x72602628
    jal func_001a09c0
    .word 0x70002e28
    b L1a1830
    addiu v0,zero,1
    addiu a1,zero,8
L1a1824:
    jal func_001a09c0
    .word 0x72602628
    addiu v0,zero,1
L1a1830:
    b L1a1860
    .word 0x7bbf0050
L1a1838:
    .word 0x3c020031
    .word 0x244463c0
    .word 0x72402e28
    jal func_001a3ac0
    .word 0x72203628
    .word 0x72602628
    .word 0x72402e28
    jal func_001a3ac0
    .word 0x72203628
L1a185c:
    .word 0x7bbf0050
L1a1860:
    .word 0x7bb40040
    .word 0x7bb30030
    .word 0x7bb20020
    .word 0x7bb10010
    .word 0x7bb00000
    jr ra
    .word 0x27bd00a0
}
