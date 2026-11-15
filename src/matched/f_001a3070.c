extern void func_0013b550(void);
extern void func_001b4c00(void);
extern void func_001959a0(void);
extern void func_001a3ac0(void);
asm void func(void) {
    .set noreorder
    addiu sp,sp,-128
    .word 0x7fbf0070
    .word 0x7fb60060
    .word 0x7fb50050
    .word 0x7fb40040
    .word 0x7fb30030
    .word 0x7fb20020
    .word 0x7fb10010
    addiu v0,zero,12
    paddub s4,a1,zero
    .word 0x7fb00000
    paddub s5,a0,zero
    paddub s3,a2,zero
    beq s4,v0,L1a3364
    paddub s2,a3,zero
    addiu v0,zero,2
    beq s4,v0,L1a3140
    nop
    beqz s4,L1a30c8
    nop
    b L1a33d8
    paddub a0,s5,zero
L1a30c8:
    .word 0x8e450000
    jal func_0013b550
    .word 0x8f848328
    .word 0xaea20008
    .word 0x8f848328
    jal func_0013b550
    addiu a1,zero,160
    .word 0xaea2000c
    addiu v0,s2,12
    .word 0xaea20014
    addiu v0,zero,6
    .word 0xaea20010
    .word 0xaea00018
    .word 0xaea00004
    .word 0x8e420004
    beqz v0,L1a3118
    nop
    .word 0x8ea20004
    ori v0,v0,0x4
    .word 0xaea20004
L1a3118:
    .word 0x8e420004
    beqz v0,L1a3130
    nop
    .word 0x3c01002e
    b L1a313c
    .word 0x8c22dfd8
L1a3130:
    .word 0x3c01002e
    .word 0x8c22dfd4
    nop
L1a313c:
    .word 0xaea20018
L1a3140:
    .word 0x8e420004
    beqz v0,L1a3158
    nop
    .word 0x3c01002e
    b L1a3164
    .word 0x9022dfdd
L1a3158:
    .word 0x3c01002e
    .word 0x9022dfdc
    nop
L1a3164:
    andi s1,v0,0xff
    .word 0x8f828574
    andi v0,v0,0x2
    beqz v0,L1a3188
    addiu a0,zero,5
    daddiu s0,zero,3
    b L1a31b8
    paddub s6,s0,zero
    addiu a0,zero,5
L1a3188:
    jal func_001b4c00
    nop
    addiu a0,zero,3
    addiu v1,zero,2
    movz a0,v1,v0
    andi s0,a0,0xff
    jal func_001b4c00
    addiu a0,zero,6
    addiu a0,zero,3
    addiu v1,zero,2
    movz a0,v1,v0
    andi s6,a0,0xff
L1a31b8:
    .word 0x8ea40014
    .word 0x8e490008
    addiu a1,zero,15
    paddub t0,s0,zero
    .word 0x70003628
    jal func_001959a0
    paddub a3,s1,zero
    .word 0x8ea20014
    .word 0x8e490008
    addiu a1,zero,16
    addiu a2,zero,1
    addiu a0,v0,32
    paddub t0,s6,zero
    jal func_001959a0
    paddub a3,s1,zero
    .word 0x8ea20014
    .word 0x8e490008
    addiu a1,zero,18
    addiu a2,zero,3
    addiu a0,v0,64
    addiu t0,zero,2
    jal func_001959a0
    paddub a3,s1,zero
    .word 0x8ea20014
    addiu a2,zero,2
    .word 0x8e490008
    addiu a1,zero,17
    paddub a3,s1,zero
    addiu a0,v0,96
    jal func_001959a0
    paddub t0,a2,zero
    .word 0x8ea20014
    .word 0x8e490008
    addiu a1,zero,19
    addiu a2,zero,4
    addiu a0,v0,128
    addiu t0,zero,2
    jal func_001959a0
    paddub a3,s1,zero
    .word 0x8ea20014
    .word 0x8e490008
    addiu a1,zero,20
    addiu a2,zero,5
    addiu t0,zero,2
    addiu a0,v0,160
    jal func_001959a0
    paddub a3,s1,zero
    .word 0x8f828574
    andi v0,v0,0x2
    bnez v0,L1a33d4
    nop
    jal func_001b4c00
    .word 0x70002628
    bnez v0,L1a32bc
    addiu a0,zero,1
    .word 0x8ea30014
    .word 0x8c620048
    ori v0,v0,0x1
    .word 0xac620048
    .word 0x8f848328
    jal func_0013b550
    addiu a1,zero,21
    .word 0x8ea30014
    .word 0xac620044
    addiu a0,zero,1
L1a32bc:
    jal func_001b4c00
    nop
    bnez v0,L1a32f4
    addiu a0,zero,3
    .word 0x8ea30014
    .word 0x8c620068
    ori v0,v0,0x1
    .word 0xac620068
    .word 0x8f848328
    jal func_0013b550
    addiu a1,zero,21
    .word 0x8ea30014
    .word 0xac620064
    addiu a0,zero,3
L1a32f4:
    jal func_001b4c00
    nop
    bnez v0,L1a332c
    addiu a0,zero,4
    .word 0x8ea30014
    .word 0x8c620088
    ori v0,v0,0x1
    .word 0xac620088
    .word 0x8f848328
    jal func_0013b550
    addiu a1,zero,21
    .word 0x8ea30014
    .word 0xac620084
    addiu a0,zero,4
L1a332c:
    jal func_001b4c00
    nop
    bnez v0,L1a33d4
    nop
    .word 0x8ea30014
    .word 0x8c6200a8
    ori v0,v0,0x1
    .word 0xac6200a8
    .word 0x8f848328
    jal func_0013b550
    addiu a1,zero,21
    .word 0x8ea30014
    b L1a33d4
    .word 0xac6200a4
L1a3364:
    .word 0x8e420004
    beqz v0,L1a33a4
    nop
    .word 0x8ea30018
    .word 0x8ea20014
    sll v1,v1,0x5
    addu v0,v0,v1
    .word 0x8c42000c
    .word 0xae620008
    .word 0x8ea30018
    .word 0x8ea20014
    sll v1,v1,0x5
    addu v0,v0,v1
    .word 0x90420010
    b L1a33d4
    .word 0xa262000d
L1a33a4:
    .word 0x8ea30018
    .word 0x8ea20014
    sll v1,v1,0x5
    addu v0,v0,v1
    .word 0x8c42000c
    .word 0xae620004
    .word 0x8ea30018
    .word 0x8ea20014
    sll v1,v1,0x5
    addu v0,v0,v1
    .word 0x90420010
    .word 0xa262000c
L1a33d4:
    paddub a0,s5,zero
L1a33d8:
    paddub a1,s4,zero
    jal func_001a3ac0
    paddub a2,s3,zero
    .word 0x7bbf0070
    .word 0x7bb60060
    .word 0x7bb50050
    .word 0x7bb40040
    .word 0x7bb30030
    .word 0x7bb20020
    .word 0x7bb10010
    .word 0x7bb00000
    jr ra
    addiu sp,sp,128
}


