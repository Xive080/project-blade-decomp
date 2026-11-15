extern void func_0013b550(void);
extern void func_001a09c0(void);
extern void func_001a3ac0(void);
extern void func_001a3fe0(void);
extern void func_001b6f70(void);
extern void func_001b85a0(void);
extern void func_001b8690(void);
extern void func_0024b470(void);
extern void func_0024b4b0(void);
extern void func_0024b540(void);
asm void func(void) {
    .set noreorder
    .set noat
    .word 0x27bdff90
    .word 0x7fbf0040
    .word 0x7fb30030
    .word 0x7fb20020
    .word 0x7fb10010
    .word 0x7fb00000
    addiu v0,zero,18
    .word 0x70a08e28
    .word 0x70c08628
    beq s1,v0, L1a0d04
    .word 0x70809628
    addiu v0,zero,1
    beq s1,v0, L1a0c5c
    .word 0x3c010031
    addiu v1,zero,10
    beq s1,v1, L1a0dd4
    nop
    b L1a0dc8
    .word 0x72402628
L1a0c5c:
    .word 0x8c227404
    bnez v0, L1a0c78
    nop
    .word 0x8e420000
    .word 0x27a60050
    jalr ra,v0
    addiu a1,zero,13
L1a0c78:
    .word 0x8fa20050
    .word 0x8f848328
    addiu a1,zero,124
    .word 0xaf80851c
    jal func_0013b550
    .word 0x24530001
    .word 0x72602e28
    .word 0x70402628
    jal func_001a3fe0
    .word 0x70003628
    .word 0xafa20060
    addiu v0,zero,1
    .word 0x27a60060
    addiu a0,zero,18
    .word 0xafa20064
    jal func_0024b540
    .word 0x70002e28
    addiu a0,zero,17
    .word 0x70002e28
    jal func_0024b540
    .word 0x70003628
    addiu a0,zero,19
    jal func_0024b470
    .word 0x70002e28
    addiu a0,zero,5
    jal func_0024b4b0
    .word 0x70002e28
    addiu a0,zero,6
    jal func_0024b4b0
    .word 0x70002e28
    .word 0x8fa50054
    jal func_001b8690
    .word 0x8fa40050
    b L1a0dc4
    nop
L1a0d04:
    .word 0x3c010031
    .word 0x8c227404
    bnez v0, L1a0d24
    nop
    .word 0x8e420000
    .word 0x27a60058
    jalr ra,v0
    addiu a1,zero,13
L1a0d24:
    jal func_001b6f70
    nop
    jal func_001b85a0
    .word 0x8fa40058
    addiu v1,zero,3
    beq v0,v1, L1a0dc4
    addiu v1,zero,8
    beq v0,v1, L1a0dc4
    addiu v1,zero,7
    beq v0,v1, L1a0dc4
    addiu v1,zero,6
    beq v0,v1, L1a0dc4
    addiu v1,zero,2
    beq v0,v1, L1a0d68
    addiu a1,zero,11
    b L1a0d78
    .word 0x8fa20058
L1a0d68:
    jal func_001a09c0
    .word 0x72402628
    b L1a0dc4
    nop
L1a0d78:
    .word 0x8f848328
    addiu a1,zero,130
    .word 0xaf80851c
    jal func_0013b550
    .word 0x24530001
    .word 0x72602e28
    .word 0x70402628
    jal func_001a3fe0
    .word 0x70003628
    .word 0xafa20068
    addiu v0,zero,1
    .word 0x27a60068
    addiu a0,zero,18
    .word 0xafa2006c
    jal func_0024b540
    .word 0x70002e28
    addiu a1,zero,12
    jal func_001a09c0
    .word 0x72402628
L1a0dc4:
    .word 0x72402628
L1a0dc8:
    .word 0x72202e28
    jal func_001a3ac0
    .word 0x72003628
L1a0dd4:
    .word 0x7bbf0040
    .word 0x7bb30030
    .word 0x7bb20020
    .word 0x7bb10010
    .word 0x7bb00000
    jr ra
    .word 0x27bd0070
}
