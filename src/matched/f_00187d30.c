extern void func_0018b9a0(void);
asm void func(void) {
    .set noreorder
    .set noat
    addiu sp,sp,-80
    .word 0x7fbf0040
    .word 0x7fb30030
    .word 0x7fb20020
    .word 0x7fb10010
    .word 0x7fb00000
    .word 0x3c030031
    b L187dd0
    addiu s0,v1,9436
L187d54:
    .word 0x8e120000
    .word 0x8e430008
    bnez v1,L187db8
    nop
    .word 0x8e040004
    .word 0x8c830048
    bnez v1,L187db8
    nop
    addiu v0,v1,1
    .word 0xac820048
    .word 0x8c930040
    beqz s3,L187db0
    addiu a1,a0,-8
    .word 0x8c910044
    addiu a1,a0,-8
    jal func_0018b9a0
    paddub a0,s2,zero
    paddub a0,s2,zero
    jalr ra,s3
    paddub a1,s1,zero
    b L187db8
    nop
    addiu a1,a0,-8
L187db0:
    jal func_0018b9a0
    paddub a0,s2,zero
L187db8:
    .word 0x3c010031
    .word 0x8c2326bc
    addiu s0,s0,8
    addiu v1,v1,-1
    .word 0x3c010031
    .word 0xac2326bc
L187dd0:
    .word 0x3c030031
    addiu v1,v1,-24960
    ori a0,zero,34876
    addu v1,v1,a0
    .word 0x8c630000
    bnez v1,L187d54
    nop
    .word 0x7bbf0040
    .word 0x7bb30030
    .word 0x7bb20020
    .word 0x7bb10010
    .word 0x7bb00000
    jr ra
    addiu sp,sp,80
}
