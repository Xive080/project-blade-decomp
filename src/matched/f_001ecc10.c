extern void func_001c2ad0(void);
extern void func_001c2b20(void);
extern void func_001df9a0(void);
extern void func_001f4a00(void);
asm void f(void) {
    .set noreorder
    .set noat
    addiu sp,sp,-96
    .word 0x7fbf0040
    .word 0x7fb30030
    .word 0x7fb20020
    .word 0x7fb10010
    .word 0x7fb00000
    .word 0x8ca80004
    addiu v0,zero,-8
    and v1,a2,v0
    paddub s1,a1,zero
    andi a3,a2,0x7
    paddub s0,a0,zero
    .word 0xac88000c
    .word 0x8ca50008
    addiu v0,zero,1
    .word 0xac850010
    .word 0xac800014
    .word 0xa0870020
    .word 0xa0830021
    .word 0x90840020
    beq a0,v0,L1ecdc0
    andi s2,a2,0x9000
    addiu v1,zero,2
    beq a0,v1,L1ecd98
    addiu v1,zero,5
    beq a0,v1,L1ecd98
    nop
    beqz a0,L1ecd74
    andi v1,a2,0xf00
    addiu v0,zero,4
    beq a0,v0,L1ecc98
    paddub a0,s1,zero
    b L1ecdc4
    paddub v0,zero,zero
L1ecc98:
    jal func_001f4a00
    nop
    jal func_001c2b20
    paddub s3,v0,zero
    paddub a1,v0,zero
    jal func_001c2ad0
    addiu a0,sp,80
    .word 0x8fa30058
    addiu v0,zero,16
    bne v1,v0,L1eccd4
    addiu a0,zero,1280
    addiu v0,zero,3
    beq s3,v0,L1eccd4
    nop
    addiu a0,zero,256
L1eccd4:
    .word 0x8e23000c
    addiu v0,zero,4
    bne v1,v0,L1eccec
    addiu v0,zero,8
    b L1eccf8
    ori a0,a0,0x4000
L1eccec:
    bne v1,v0,L1eccfc
    sra v0,a0,0x8
    ori a0,a0,0x2000
L1eccf8:
    sra v0,a0,0x8
L1eccfc:
    .word 0xa2020023
    srl v0,s2,0x8
    andi v1,v0,0xff
    .word 0x92020023
    or v0,v0,v1
    .word 0xa2020023
    jal func_001df9a0
    .word 0x8e240004
    addiu v1,zero,1
    sllv v0,v1,v0
    .word 0xae02000c
    .word 0x8e02000c
    slti at,v0,1025
    bnez at,L1ecd3c
    addiu v0,zero,1024
    .word 0xae02000c
L1ecd3c:
    jal func_001df9a0
    .word 0x8e240008
    addiu v1,zero,1
    sllv v0,v1,v0
    .word 0xae020010
    .word 0x8e020010
    slti at,v0,1025
    bnez at,L1ecd6c
    addiu v0,zero,1
    addiu v0,zero,1024
    .word 0xae020010
    addiu v0,zero,1
L1ecd6c:
    b L1ecdc8
    .word 0x7bbf0040
L1ecd74:
    sra v1,v1,0x8
    .word 0xa2030023
    .word 0x92030023
    bnezl v1,L1ecd90
    addiu v0,zero,1
    .word 0xa2020023
    addiu v0,zero,1
L1ecd90:
    b L1ecdc4
    nop
L1ecd98:
    .word 0x8f8386e4
    addiu v0,zero,32
    .word 0x8c630008
    bne v1,v0,L1ecdb0
    addiu v0,zero,256
    addiu v0,zero,1280
L1ecdb0:
    sra v0,v0,0x8
    .word 0xa2020023
    b L1ecdc4
    addiu v0,zero,1
L1ecdc0:
    .word 0xa2000023
L1ecdc4:
    .word 0x7bbf0040
L1ecdc8:
    .word 0x7bb30030
    .word 0x7bb20020
    .word 0x7bb10010
    .word 0x7bb00000
    jr ra
    addiu sp,sp,96
}
