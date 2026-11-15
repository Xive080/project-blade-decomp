extern void func_0013b550(void);
extern void func_001957d0(void);
extern void func_001b6f50(void);
extern void func_001214b8(void);
extern void func_0024b470(void);
extern void func_0024b540(void);
extern void func_00121a58(void);
extern void func_0024b4b0(void);
extern void func_001b85a0(void);
extern void func_001a09c0(void);
extern void func_001785a0(void);
extern void func_001b6f70(void);
extern void func_001a3ac0(void);
asm void func(void) {
    .set noreorder
    addiu sp,sp,-160
    .word 0x7fbf0070
    .word 0x7fb60060
    .word 0x7fb50050
    .word 0x7fb40040
    .word 0x7fb30030
    .word 0x7fb20020
    .word 0x7fb10010
    .word 0x7fb00000
    addiu v0,zero,18
    paddub s1,a1,zero
    paddub s0,a2,zero
    paddub s2,a0,zero
    beq s1,v0,L1a1360
    .word 0x70009e28
    addiu v0,zero,10
    beql s1,v0,L1a1350
    addiu a0,zero,1
    addiu v0,zero,15
    beq s1,v0,L1a12b0
    .word 0x3c010031
    addiu v0,zero,1
    beq s1,v0,L1a1148
    nop
    b L1a13b8
    nop
L1a1148:
    .word 0x8f848328
    jal func_0013b550
    .word 0x70002e28
    .word 0x3c010031
    .word 0xac226368
    .word 0x3c010031
    .word 0x3c020031
    .word 0xac20636c
    addiu v0,v0,25408
    .word 0x3c010031
    .word 0xac226374
    addiu v0,zero,1
    .word 0x3c010031
    .word 0xac226370
    .word 0x3c020031
    addiu a0,v0,25408
    .word 0x3c010031
    .word 0x3c02001a
    .word 0xac206378
    .word 0x3c010031
    addiu a1,zero,39
    addiu a2,v0,5184
    jal func_001957d0
    .word 0xac206364
    .word 0x3c010031
    .word 0x8c227404
    bnez v0,L1a11cc
    nop
    .word 0x8e420000
    addiu a2,sp,136
    addiu a1,zero,13
    jalr ra,v0
    paddub a0,s2,zero
L1a11cc:
    jal func_001b6f50
    .word 0x8fa40088
    addiu s6,sp,140
    .word 0x8ed50000
    paddub s4,v0,zero
    sll v1,s5,0x2
    addu v1,v1,s5
    sll v1,v1,0x2
    addu v0,v1,v0
    .word 0x8c420020
    bnez v0,L1a1234
    nop
    .word 0x8f848328
    jal func_0013b550
    addiu a1,zero,145
    .word 0x8ec30000
    paddub a2,v0,zero
    .word 0x3c02002f
    addiu a1,v0,-104
    addiu a3,s5,1
    sll v0,v1,0x2
    addu v0,v0,v1
    sll v0,v0,0x2
    addu v0,s4,v0
    jal func_001214b8
    addiu a0,v0,16
L1a1234:
    .word 0x8ec30000
    .word 0x3c020031
    addiu a0,v0,25408
    .word 0x3c010031
    .word 0x70002e28
    sll v0,v1,0x2
    addu v0,v0,v1
    sll v0,v0,0x2
    addu v0,s4,v0
    addiu v0,v0,16
    .word 0xac22634c
    .word 0x3c010031
    .word 0x8c226340
    jalr ra,v0
    .word 0x70003628
    .word 0x8f848328
    jal func_0013b550
    addiu a1,zero,155
    addiu a0,zero,19
    jal func_0024b470
    paddub a1,v0,zero
    addiu a0,zero,21
    addiu a1,zero,1
    jal func_0024b540
    .word 0x70003628
    addiu a0,zero,17
    .word 0x70002e28
    jal func_0024b540
    .word 0x70003628
    b L1a13b8
    nop
L1a12b0:
    .word 0x8c227404
    bnez v0,L1a12cc
    nop
    .word 0x8e420000
    addiu a2,sp,144
    jalr ra,v0
    addiu a1,zero,13
L1a12cc:
    jal func_001b6f50
    .word 0x8fa40090
    .word 0x8fa40094
    paddub a1,s0,zero
    sll v1,a0,0x2
    addu v1,v1,a0
    sll v1,v1,0x2
    addu v0,v0,v1
    jal func_00121a58
    addiu a0,v0,16
    addiu a0,zero,23
    jal func_0024b4b0
    .word 0x70002e28
    addiu a0,zero,24
    jal func_0024b4b0
    .word 0x70002e28
    addiu a0,zero,21
    jal func_0024b4b0
    .word 0x70002e28
    jal func_001b85a0
    .word 0x8fa40090
    addiu v1,zero,15
    bne v0,v1,L1a1340
    addiu a1,zero,9
    addiu a1,zero,7
    jal func_001a09c0
    paddub a0,s2,zero
    b L1a13b8
    nop
L1a1340:
    jal func_001a09c0
    paddub a0,s2,zero
    b L1a13b8
    nop
L1a1350:
    jal func_001785a0
    nop
    b L1a13b8
    addiu s3,zero,1
L1a1360:
    .word 0x3c010031
    .word 0x8c227404
    bnez v0,L1a1380
    nop
    .word 0x8e420000
    addiu a2,sp,152
    jalr ra,v0
    addiu a1,zero,13
L1a1380:
    jal func_001b6f70
    nop
    jal func_001b85a0
    .word 0x8fa40098
    addiu v1,zero,15
    beq v0,v1,L1a13b8
    addiu v1,zero,8
    beq v0,v1,L1a13b8
    addiu v1,zero,7
    beq v0,v1,L1a13b8
    addiu v1,zero,6
    beq v0,v1,L1a13b8
    nop
    addiu s3,zero,1
L1a13b8:
    beqz s3,L1a13f8
    .word 0x3c020031
    addiu a0,zero,23
    jal func_0024b4b0
    .word 0x70002e28
    addiu a0,zero,24
    jal func_0024b4b0
    .word 0x70002e28
    addiu a0,zero,21
    jal func_0024b4b0
    .word 0x70002e28
    paddub a0,s2,zero
    jal func_001a09c0
    .word 0x70002e28
    b L1a1418
    addiu v0,zero,1
L1a13f8:
    addiu a0,v0,25440
    paddub a1,s1,zero
    jal func_001a3ac0
    paddub a2,s0,zero
    paddub a0,s2,zero
    paddub a1,s1,zero
    jal func_001a3ac0
    paddub a2,s0,zero
L1a1418:
    .word 0x7bbf0070
    .word 0x7bb60060
    .word 0x7bb50050
    .word 0x7bb40040
    .word 0x7bb30030
    .word 0x7bb20020
    .word 0x7bb10010
    .word 0x7bb00000
    jr ra
    addiu sp,sp,160
}


