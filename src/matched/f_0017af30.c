extern void func_001214b8(void);
extern void func_001217e0(void);
extern void func_00121a58(void);
extern void func_001a98c0(void);
asm void func(void) {
    .set noreorder
    .set noat
    addiu sp,sp,-144
    .word 0x7fbf0040
    .word 0x7fb30030
    .word 0x7fb20020
    .word 0x7fb10010
    paddub s3,a0,zero
    .word 0x7fb00000
    addiu a0,sp,80
    paddub s1,a2,zero
    paddub s0,a3,zero
    jal func_00121a58
    paddub s2,a1,zero
    .word 0x8f828490
    addiu v0,v0,1
    .word 0xaf828490
    .word 0x8f828490
    slti at,v0,4
    bnez at,L17af84
    nop
    addiu v0,zero,1
    .word 0xaf828490
L17af84:
    .word 0x8f868490
    addiu v0,zero,1
    bne a2,v0,L17af9c
    nop
    b L17afbc
    paddub v0,zero,zero
L17af9c:
    .word 0x3c02002f
    addiu a0,sp,112
    jal func_001214b8
    addiu a1,v0,-752
    addiu a0,sp,80
    jal func_001217e0
    addiu a1,sp,112
    addiu v0,zero,1
L17afbc:
    beqz v0,L17afd8
    nop
    addiu a1,sp,80
    paddub a0,s3,zero
    paddub a2,s1,zero
    jal func_001a98c0
    paddub a3,s0,zero
L17afd8:
    .word 0x8e620010
    bnez v0,L17aff8
    nop
    paddub a1,s2,zero
    paddub a2,s1,zero
    paddub a3,s0,zero
    jal func_001a98c0
    paddub a0,s3,zero
L17aff8:
    .word 0x8e620010
    .word 0x7bbf0040
    .word 0x7bb20020
    .word 0x7bb10010
    .word 0x7bb00000
    .word 0x7bb30030
    jr ra
    addiu sp,sp,144
}
