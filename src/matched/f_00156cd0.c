extern void func_00156e00(void);
extern void func_00156ee0(void);
extern void func_00158430(void);
extern void func_0015b360(void);
asm void f(void) {
    .set noreorder
    .set noat
    addiu sp,sp,-80
    .word 0x7fbf0040
    .word 0x7fb30030
    .word 0x7fb20020
    .word 0x7fb10010
    .word 0x7fb00000
    .word 0x8c831ed4
    addiu s1,zero,5
    beqz v1,L156de0
    .word 0x70808628
    .word 0x70009628
    b L156d18
    .word 0x70009e28
L156d04:
    .word 0x8e021ee0
    jal func_00156e00
    addu a0,v0,s3
    addiu s3,s3,300
    addiu s2,s2,1
L156d18:
    .word 0x8e031ed8
    slt v1,s2,v1
    bnez v1,L156d04
    nop
    .word 0x70009e28
    b L156d88
    .word 0x72009628
L156d34:
    .word 0x8e440014
    bnez a0,L156d6c
    addiu v1,zero,3
    blezl s1,L156d84
    addiu s2,s2,380
    addiu a1,s2,20
    .word 0x72002628
    jal func_0015b360
    .word 0x70003628
    bnez v0,L156d80
    nop
    b L156d80
    addiu s1,s1,-1
    addiu v1,zero,3
L156d6c:
    beq a0,v1,L156d80
    nop
    addiu a1,s2,20
    jal func_00156ee0
    .word 0x72002628
L156d80:
    addiu s2,s2,380
L156d84:
    addiu s3,s3,1
L156d88:
    .word 0x8e030010
    slt v1,s3,v1
    bnez v1,L156d34
    nop
    .word 0x70009628
    b L156dd0
    .word 0x72008e28
L156da4:
    .word 0x8e240014
    beqzl a0,L156dcc
    addiu s1,s1,380
    addiu v1,zero,3
    beq a0,v1,L156dc8
    nop
    jal func_00158430
    addiu a0,s1,20
    nop
L156dc8:
    addiu s1,s1,380
L156dcc:
    addiu s2,s2,1
L156dd0:
    .word 0x8e030010
    slt v1,s2,v1
    bnez v1,L156da4
    nop
L156de0:
    .word 0x7bbf0040
    .word 0x7bb30030
    .word 0x7bb20020
    .word 0x7bb10010
    .word 0x7bb00000
    jr ra
    addiu sp,sp,80
}
