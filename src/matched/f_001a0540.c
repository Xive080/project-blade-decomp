extern void func_001a09c0(void);
extern void func_0013b550(void);
extern void func_0024b540(void);
extern void func_0024b4b0(void);
extern void func_0024b470(void);
extern void func_001a1ec0(void);
extern void func_001a3ac0(void);
extern void func_001b54e0(void);
extern void func_001b6f50(void);
extern void func_001a1880(void);
extern void func_001a1bd0(void);
extern void func_001a10e0(void);
extern void func_001a0c10(void);
extern void func_001a0a90(void);
extern void func_001a1480(void);
extern void func_001a0ef0(void);
extern void func_001785a0(void);
extern void func_001b6f70(void);
extern void func_001b85c0(void);
extern void func_00198070(void);
asm void func(void) {
    .set noreorder
    addiu sp,sp,-160
    .word 0x7fbf0050
    .word 0x7fb40040
    .word 0x7fb30030
    .word 0x7fb20020
    .word 0x7fb10010
    addiu v0,zero,14
    paddub s3,a1,zero
    .word 0x7fb00000
    paddub s4,a0,zero
    beq s3,v0,L1a06bc
    paddub s2,a2,zero
    addiu v0,zero,13
    beq s3,v0,L1a06ac
    nop
    addiu v0,zero,3
    beq s3,v0,L1a05b8
    nop
    addiu v0,zero,2
    beq s3,v0,L1a05a8
    .word 0x70002628
    beqz s3,L1a05a4
    nop
    b L1a06d0
    .word 0x8f828510
L1a05a4:
    .word 0x70002628
L1a05a8:
    jal func_001a09c0
    .word 0x70002e28
    b L1a06cc
    nop
L1a05b8:
    .word 0x3c02002e
    addiu a0,v0,8464
    .word 0xdc820000
    .word 0xc4800008
    addiu v1,sp,120
    .word 0xfc620000
    .word 0xe4600008
    .word 0x8f848328
    jal func_0013b550
    addiu a1,zero,152
    .word 0xafa20080
    .word 0x3c023dcc
    ori v0,v0,0xcccd
    .word 0xafa20068
    .word 0x3c023e8f
    addiu s1,sp,108
    ori v0,v0,0x5c29
    .word 0xae220000
    .word 0x8f848328
    jal func_0013b550
    addiu a1,zero,101
    addiu s0,sp,112
    addiu a2,sp,104
    addiu a0,zero,14
    addiu a1,zero,1
    jal func_0024b540
    .word 0xae020000
    .word 0x8f848328
    .word 0x3c023ecc
    ori v0,v0,0xcccd
    addiu a1,zero,102
    jal func_0013b550
    .word 0xafa20068
    addiu a2,sp,104
    addiu a0,zero,15
    addiu a1,zero,1
    jal func_0024b540
    .word 0xae020000
    addiu a0,zero,24
    jal func_0024b4b0
    .word 0x70002e28
    .word 0x8f838508
    addiu v0,zero,3
    bne v1,v0,L1a06cc
    nop
    .word 0x3c023f33
    ori v0,v0,0x3333
    .word 0xafa20068
    .word 0x3c023e4c
    ori v0,v0,0xcccd
    .word 0xae220000
    addiu a2,sp,104
    addiu a0,zero,16
    addiu a1,zero,1
    jal func_0024b540
    .word 0xae000000
    addiu a1,sp,120
    jal func_0024b470
    addiu a0,zero,16
    b L1a06cc
    nop
L1a06ac:
    jal func_001a1ec0
    nop
    b L1a0998
    .word 0x7bbf0050
L1a06bc:
    jal func_001a3ac0
    nop
    b L1a0994
    nop
L1a06cc:
    .word 0x8f828510
L1a06d0:
    sltiu at,v0,13
    beqzl at,L1a0994
    .word 0x70001628
    .word 0x3c03002f
    addiu v1,v1,-224
    sll v0,v0,0x2
    addu v0,v0,v1
    .word 0x8c420000
    jr v0
    nop
    paddub a0,s4,zero
    paddub a1,s3,zero
    jal func_001a1ec0
    paddub a2,s2,zero
    b L1a0994
    nop
    .word 0x3c010031
    .word 0x8c227404
    bnez v0,L1a0734
    nop
    .word 0x8e820000
    addiu a2,sp,136
    addiu a1,zero,13
    jalr ra,v0
    paddub a0,s4,zero
L1a0734:
    .word 0x3c020031
    addiu v0,v0,27520
    bne s4,v0,L1a0768
    nop
    jal func_001b54e0
    nop
    beqz v0,L1a0768
    nop
    addiu a1,zero,3
    jal func_001a09c0
    paddub a0,s4,zero
    b L1a0994
    addiu v0,zero,1
L1a0768:
    .word 0x3c010031
    .word 0x8c227404
    bnez v0,L1a078c
    nop
    .word 0x8e820000
    addiu a2,sp,144
    addiu a1,zero,13
    jalr ra,v0
    paddub a0,s4,zero
L1a078c:
    jal func_001b6f50
    .word 0x8fa40090
    .word 0x8fa40094
    sll v1,a0,0x2
    addu v1,v1,a0
    sll v1,v1,0x2
    addu v0,v0,v1
    .word 0x8c420020
    beqz v0,L1a07cc
    addiu a1,zero,5
    addiu a1,zero,6
    jal func_001a09c0
    paddub a0,s4,zero
    b L1a07d8
    addiu v0,zero,1
    addiu a1,zero,5
L1a07cc:
    jal func_001a09c0
    paddub a0,s4,zero
    addiu v0,zero,1
L1a07d8:
    b L1a0994
    nop
    paddub a0,s4,zero
    paddub a1,s3,zero
    jal func_001a1880
    paddub a2,s2,zero
    b L1a0994
    nop
    paddub a0,s4,zero
    paddub a1,s3,zero
    jal func_001a1bd0
    paddub a2,s2,zero
    b L1a0994
    nop
    paddub a0,s4,zero
    paddub a1,s3,zero
    jal func_001a10e0
    paddub a2,s2,zero
    b L1a0994
    nop
    paddub a0,s4,zero
    paddub a1,s3,zero
    jal func_001a0c10
    paddub a2,s2,zero
    b L1a0994
    nop
    paddub a0,s4,zero
    paddub a1,s3,zero
    jal func_001a0a90
    paddub a2,s2,zero
    b L1a0994
    nop
    paddub a0,s4,zero
    paddub a1,s3,zero
    jal func_001a1480
    paddub a2,s2,zero
    b L1a0994
    nop
    paddub a0,s4,zero
    paddub a1,s3,zero
    jal func_001a0ef0
    paddub a2,s2,zero
    b L1a0994
    nop
    addiu v0,zero,9
    beq s3,v0,L1a0928
    .word 0x70002628
    addiu v0,zero,10
    beq s3,v0,L1a091c
    addiu v0,zero,1
    addiu v0,zero,1
    beq s3,v0,L1a08b4
    nop
    b L1a0940
    paddub a0,s4,zero
L1a08b4:
    .word 0x8f848328
    jal func_0013b550
    addiu a1,zero,270
    .word 0x80420000
    .word 0x8f848328
    addiu a1,zero,195
    jal func_0013b550
    .word 0xa3a20098
    addiu a2,sp,152
    addiu a0,zero,5
    .word 0xafa2009c
    jal func_0024b540
    .word 0x70002e28
    addiu a0,zero,19
    jal func_0024b470
    .word 0x70002e28
    addiu a0,zero,17
    .word 0x70002e28
    jal func_0024b540
    .word 0x70003628
    addiu a0,zero,6
    jal func_0024b4b0
    .word 0x70002e28
    b L1a093c
    nop
    addiu v0,zero,1
L1a091c:
    b L1a094c
    nop
    .word 0x70002628
L1a0928:
    jal func_001785a0
    nop
    paddub a0,s4,zero
    jal func_001a09c0
    .word 0x70002e28
L1a093c:
    paddub a0,s4,zero
L1a0940:
    paddub a1,s3,zero
    jal func_001a3ac0
    paddub a2,s2,zero
L1a094c:
    b L1a0994
    nop
    addiu v0,zero,18
    bne s3,v0,L1a0988
    addiu v0,zero,1
    jal func_001b6f70
    nop
    jal func_001b85c0
    nop
    beqz v0,L1a0984
    nop
    addiu a1,zero,1
    jal func_00198070
    paddub a0,s4,zero
L1a0984:
    addiu v0,zero,1
L1a0988:
    b L1a0994
    nop
    .word 0x70001628
L1a0994:
    .word 0x7bbf0050
L1a0998:
    .word 0x7bb40040
    .word 0x7bb30030
    .word 0x7bb20020
    .word 0x7bb10010
    .word 0x7bb00000
    jr ra
    addiu sp,sp,160
}


