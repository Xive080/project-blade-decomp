extern void func_001704f0(void);
extern void func_001ca2d0(void);
extern void func_00243150(void);
asm void func(void) {
    .set noreorder
    .set noat
    addiu sp,sp,-368
    .word 0x7fbf0060
    .word 0x7fb50050
    .word 0x7fb40040
    .word 0x7fb30030
    .word 0x7fb20020
    .word 0x7fb10010
    paddub s4,a1,zero
    .word 0x7fb00000
    beqz s4,L170668
    paddub s5,a0,zero
    addiu s2,sp,124
    addiu a1,sp,112
L170594:
    addiu a2,zero,12
    jal func_001ca2d0
    paddub a0,s5,zero
    addiu v0,sp,112
    .word 0x8c430000
    addiu v0,zero,1
    beq v1,v0,L1705d8
    paddub s0,zero,zero
    nop
L1705b8:
    sra v1,v1,0x1
    addiu s0,s0,1
    nop
    nop
    nop
    bne v1,v0,L1705b8
    nop
    nop
L1705d8:
    sll v0,s0,0x1
    addu v0,v0,s0
    sll v1,v0,0x2
    .word 0x3c020030
    addiu v0,v0,24688
    addu s3,v0,v1
    .word 0x8e620030
    paddub a0,s5,zero
    paddub a1,s2,zero
    addiu a2,v0,-12
    jal func_001ca2d0
    subu s4,s4,v0
    addiu a1,sp,112
    jal func_00243150
    paddub a0,s0,zero
    beqz v0,L170660
    nop
    .word 0x8e710028
    jal func_001704f0
    paddub a0,s0,zero
    paddub s0,v0,zero
    beqz s0,L170660
    nop
    .word 0x3c020033
    addiu v0,v0,-23008
    .word 0x8c420130
    jalr ra,v0
    .word 0x8e64002c
    .word 0xae020000
    .word 0x8e230000
    addiu a1,sp,112
    jalr ra,v1
    paddub a0,v0,zero
    nop
L170660:
    bnez s4,L170594
    addiu a1,sp,112
L170668:
    .word 0x7bbf0060
    .word 0x7bb50050
    .word 0x7bb40040
    .word 0x7bb30030
    .word 0x7bb20020
    .word 0x7bb10010
    .word 0x7bb00000
    jr ra
    addiu sp,sp,368
}
