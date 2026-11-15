extern void func_0013b550(void);
extern void func_001b5470(void);
extern void func_00195a30(void);
extern void func_001956b0(void);
extern void func_001b4ee0(void);
extern void func_0024b540(void);
extern void func_001b6240(void);
extern void func_001b4e60(void);
extern void func_001a3ac0(void);
asm void func(void) {
    .set noreorder
    addiu sp,sp,-320
    .word 0x7fbf0040
    .word 0x7fb30030
    .word 0x7fb20020
    .word 0x7fb10010
    addiu v0,zero,9
    paddub s2,a1,zero
    .word 0x7fb00000
    paddub s3,a0,zero
    beq s2,v0,L19e900
    paddub s1,a2,zero
    addiu v0,zero,3
    beq s2,v0,L19e860
    nop
    addiu v0,zero,2
    beq s2,v0,L19e7d4
    nop
    beqz s2,L19e794
    nop
    b L19e9c8
    paddub a0,s3,zero
L19e794:
    .word 0x8f848328
    jal func_0013b550
    .word 0x70002e28
    .word 0xae620008
    .word 0x3c020031
    addiu v0,v0,24416
    .word 0xae60000c
    .word 0xae620014
    addiu v0,zero,1
    .word 0xae620010
    .word 0xae600018
    .word 0xae600004
    .word 0x8e620004
    ori v0,v0,0xa
    b L19e9c4
    .word 0xae620004
L19e7d4:
    jal func_001b5470
    nop
    bltz v0,L19e800
    nop
    .word 0x3c020031
    addiu a0,v0,24416
    addiu a1,zero,306
    jal func_00195a30
    addiu a2,zero,48
    b L19e9c4
    nop
L19e800:
    .word 0x3c010030
    .word 0x9022a61f
    slti v0,v0,6
    bnez v0,L19e844
    nop
    .word 0x3c010030
    .word 0x8c23a610
    addiu v0,zero,3
    bne v1,v0,L19e844
    nop
    .word 0x3c020031
    addiu a0,v0,24416
    addiu a1,zero,306
    jal func_001956b0
    addiu a2,zero,1
    b L19e9c4
    nop
L19e844:
    .word 0x3c020031
    addiu a0,v0,24416
    addiu a1,zero,306
    jal func_00195a30
    addiu a2,zero,43
    b L19e9c4
    nop
L19e860:
    jal func_001b4ee0
    nop
    .word 0xaf8284f4
    .word 0x8f9084f4
    .word 0x3c02002e
    addiu a1,v0,9408
    addiu a0,sp,80
    addiu v1,zero,7
L19e880:
    .word 0x78a20000
    addiu v1,v1,-1
    .word 0x7c820000
    addiu a1,a1,16
    addiu a0,a0,16
    bgtz v1,L19e880
    nop
    .word 0x8f848328
    addiu a1,zero,306
    jal func_0013b550
    .word 0xaf80851c
    .word 0x8f848328
    addiu a1,zero,235
    jal func_0013b550
    .word 0xafa20064
    .word 0x8f848328
    addiu a1,s0,236
    jal func_0013b550
    .word 0xafa20080
    .word 0xdf8584d8
    .word 0xafa2009c
    addiu a2,sp,304
    addiu v1,zero,4
    .word 0xfcc50000
    addiu v0,sp,80
    .word 0xafa30130
    addiu a0,zero,10
    .word 0xafa20134
    jal func_0024b540
    .word 0x70002e28
    b L19e9c4
    nop
L19e900:
    jal func_001b6240
    nop
    bnez v0,L19e918
    nop
    b L19e9d4
    addiu v0,zero,1
L19e918:
    jal func_001b4e60
    .word 0x8f8484f4
    .word 0xaf8284f4
    .word 0x8f9084f4
    slti at,s0,7
    beqz at,L19e9c4
    nop
    .word 0x3c02002e
    addiu a1,v0,9408
    addiu a0,sp,192
    addiu v1,zero,7
L19e944:
    .word 0x78a20000
    addiu v1,v1,-1
    .word 0x7c820000
    addiu a1,a1,16
    addiu a0,a0,16
    bgtz v1,L19e944
    nop
    .word 0x8f848328
    addiu a1,zero,306
    jal func_0013b550
    .word 0xaf80851c
    .word 0x8f848328
    addiu a1,zero,235
    jal func_0013b550
    .word 0xafa200d4
    .word 0x8f848328
    addiu a1,s0,236
    jal func_0013b550
    .word 0xafa200f0
    .word 0xdf8584d8
    .word 0xafa2010c
    addiu a2,sp,312
    addiu v1,zero,4
    .word 0xfcc50000
    addiu v0,sp,192
    .word 0xafa30138
    addiu a0,zero,10
    .word 0xafa2013c
    jal func_0024b540
    .word 0x70002e28
    b L19e9d4
    addiu v0,zero,1
L19e9c4:
    paddub a0,s3,zero
L19e9c8:
    paddub a1,s2,zero
    jal func_001a3ac0
    paddub a2,s1,zero
L19e9d4:
    .word 0x7bbf0040
    .word 0x7bb30030
    .word 0x7bb20020
    .word 0x7bb10010
    .word 0x7bb00000
    jr ra
    addiu sp,sp,320
}


