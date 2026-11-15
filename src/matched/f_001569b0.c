extern void fn_16fcb0(void);
extern void fn_17a210(void);
extern void fn_201a40(void);
extern void fn_142ad0(void);
extern void fn_12e710(void);
extern void fn_1f7d70(void);
extern void fn_142aa0(void);
extern void fn_12e770(void);
extern void fn_142a90(void);
extern void fn_142950(void);
extern void fn_201cf0(void);
extern void fn_2017f0(void);
asm void func(void) {
    .set noreorder
    addiu sp,sp,-96
    .word 0x7fbf0050
    .word 0x7fb40040
    .word 0x7fb30030
    .word 0x7fb20020
    .word 0x7fb10010
    .word 0x7fb00000
    paddub s0,a1,zero
    .word 0x3c010030
    .word 0x8c256094
    paddub s4,a2,zero
    paddub s1,a0,zero
    paddub s3,a3,zero
    jal fn_16fcb0
    paddub a0,s4,zero
    paddub s2,v0,zero
    .word 0x3c02002f
    addiu a1,zero,1
    addiu a3,v0,-14592
    paddub a2,s4,zero
    jal fn_17a210
    paddub a0,s2,zero
    jal fn_201a40
    paddub a0,s2,zero
    .word 0xae020000
    .word 0x3c010030
    .word 0x8c256094
    jal fn_16fcb0
    paddub a0,s3,zero
    paddub s2,v0,zero
    .word 0x3c02002f
    addiu a1,zero,1
    addiu a3,v0,-14584
    paddub a2,s3,zero
    jal fn_17a210
    paddub a0,s2,zero
    jal fn_201a40
    paddub a0,s2,zero
    .word 0xae020004
    jal fn_142ad0
    .word 0x8e040000
    paddub s2,v0,zero
L156a58:
    jal fn_12e710
    paddub a0,s2,zero
    jal fn_1f7d70
    paddub a0,s2,zero
    beqz v0,L156a90
    nop
    jal fn_1f7d70
    paddub a0,s2,zero
    .word 0xae020010
    .word 0xae120008
    .word 0x8e43004c
    addiu v0,zero,-3
    and v0,v1,v0
    .word 0xae42004c
L156a90:
    .word 0x8e040000
    jal fn_142aa0
    paddub a1,s2,zero
    paddub s2,v0,zero
    bnez s2,L156a58
    nop
    .word 0x8e220400
    bnez v0,L156ac0
    nop
    .word 0x8e020010
    .word 0x8c420000
    .word 0xae220400
L156ac0:
    jal fn_142ad0
    .word 0x8e040004
    paddub s2,v0,zero
    beqz s2,L156b28
    .word 0xae000014
L156ad4:
    jal fn_12e770
    paddub a0,s2,zero
    .word 0x8e020014
    bnez v0,L156afc
    paddub a0,s2,zero
    jal fn_1f7d70
    paddub a0,s2,zero
    .word 0xae020014
    .word 0xae12000c
    paddub a0,s2,zero
L156afc:
    jal fn_1f7d70
    nop
    bnez v0,L156b10
    nop
    .word 0xae120020
L156b10:
    .word 0x8e040004
    jal fn_142aa0
    paddub a1,s2,zero
    paddub s2,v0,zero
    bnez s2,L156ad4
    nop
L156b28:
    jal fn_142a90
    .word 0x8e040000
    .word 0xae020018
    jal fn_142950
    .word 0x8e040018
    .word 0xae020018
    jal fn_142a90
    .word 0x8e040004
    .word 0xae02001c
    jal fn_142950
    .word 0x8e04001c
    .word 0xae02001c
    .word 0x3c020030
    addiu a1,v0,13456
    addiu v1,zero,255
    b L156b78
    paddub a0,zero,zero
L156b6c:
    .word 0xa0a30000
    addiu a1,a1,1
    addiu a0,a0,1
L156b78:
    .word 0x8e220400
    sltu v0,a0,v0
    bnez v0,L156b6c
    nop
    jal fn_142ad0
    .word 0x8e040000
    paddub s1,v0,zero
L156b94:
    .word 0x3c010030
    .word 0x8e23006c
    .word 0x8c22a45c
    beq v1,v0,L156bc4
    nop
    .word 0x8e040000
    jal fn_201cf0
    paddub a1,s1,zero
    jal fn_2017f0
    paddub a0,s1,zero
    b L156be4
    .word 0x7bbf0050
L156bc4:
    .word 0x8e040000
    jal fn_142aa0
    paddub a1,s1,zero
    paddub s1,v0,zero
    bnez s1,L156b94
    nop
    nop
    .word 0x7bbf0050
L156be4:
    .word 0x7bb40040
    .word 0x7bb30030
    .word 0x7bb20020
    .word 0x7bb10010
    .word 0x7bb00000
    jr ra
    addiu sp,sp,96
}

