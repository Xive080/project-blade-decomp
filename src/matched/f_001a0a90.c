extern void func_0013b550(void);
extern void func_001a3ac0(void);
extern void func_001a3fe0(void);
extern void func_0024b470(void);
extern void func_0024b4b0(void);
extern void func_0024b540(void);
asm void f(void) {
    .set noreorder
    .set noat
    addiu sp,sp,-96
    .word 0x7fbf0030
    .word 0x7fb20020
    .word 0x7fb10010
    .word 0x7fb00000
    addiu v0,zero,9
    paddub s1,a1,zero
    paddub s0,a2,zero
    beq s1,v0,L1a0bc8
    paddub s2,a0,zero
    addiu v0,zero,1
    beql s1,v0,L1a0ad8
    .word 0x3c020031
    addiu v1,zero,10
    beq s1,v1,L1a0bf8
    nop
    b L1a0bec
    paddub a0,s2,zero
L1a0ad8:
    addiu v0,v0,27584
    beq s2,v0,L1a0b28
    nop
    .word 0x8f848328
    addiu a1,zero,128
    jal func_0013b550
    .word 0xaf80851c
    paddub a0,v0,zero
    paddub a1,zero,zero
    jal func_001a3fe0
    paddub a2,zero,zero
    .word 0xafa20050
    addiu v0,zero,1
    addiu a2,sp,80
    addiu a0,zero,18
    .word 0xafa20054
    jal func_0024b540
    paddub a1,zero,zero
    b L1a0b68
    addiu a0,zero,17
L1a0b28:
    .word 0x8f848328
    addiu a1,zero,135
    jal func_0013b550
    .word 0xaf80851c
    paddub a0,v0,zero
    paddub a1,zero,zero
    jal func_001a3fe0
    paddub a2,zero,zero
    .word 0xafa20058
    addiu v0,zero,1
    addiu a2,sp,88
    addiu a0,zero,18
    .word 0xafa2005c
    jal func_0024b540
    paddub a1,zero,zero
    addiu a0,zero,17
L1a0b68:
    paddub a1,zero,zero
    jal func_0024b540
    paddub a2,zero,zero
    addiu a0,zero,19
    jal func_0024b470
    paddub a1,zero,zero
    .word 0x8f848328
    jal func_0013b550
    addiu a1,zero,270
    .word 0x80420000
    .word 0x8f848328
    addiu a1,zero,195
    jal func_0013b550
    .word 0xa3a20048
    addiu a2,sp,72
    addiu a0,zero,5
    addiu a1,zero,1
    jal func_0024b540
    .word 0xafa2004c
    addiu a0,zero,6
    jal func_0024b4b0
    paddub a1,zero,zero
    b L1a0be8
    nop
L1a0bc8:
    .word 0x3c010031
    .word 0x8c227404
    bnez v0,L1a0be8
    nop
    .word 0x8e420000
    addiu a1,zero,14
    jalr ra,v0
    paddub a2,zero,zero
L1a0be8:
    paddub a0,s2,zero
L1a0bec:
    paddub a1,s1,zero
    jal func_001a3ac0
    paddub a2,s0,zero
L1a0bf8:
    .word 0x7bbf0030
    .word 0x7bb20020
    .word 0x7bb10010
    .word 0x7bb00000
    jr ra
    addiu sp,sp,96
}
