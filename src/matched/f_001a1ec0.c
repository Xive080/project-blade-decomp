extern void func_0013b550(void);
extern void func_0024b540(void);
extern void func_0024b4b0(void);
extern void func_001b85a0(void);
extern void func_001785a0(void);
extern void func_001b54e0(void);
extern void func_001a09c0(void);
extern void func_001b5310(void);
extern void func_001b6f50(void);
extern void func_0024b470(void);
extern void func_001b85c0(void);
extern void func_001b6f70(void);
extern void func_001a3fe0(void);
extern void func_001b6f40(void);
extern void func_001a3ac0(void);
asm void func(void) {
    .set noreorder
    addiu sp,sp,-352
    .word 0x7fbf0070
    .word 0x7fb60060
    .word 0x7fb50050
    .word 0x7fb40040
    .word 0x7fb30030
    .word 0x7fb20020
    .word 0x7fb10010
    addiu v0,zero,18
    paddub s4,a1,zero
    .word 0x7fb00000
    paddub s5,a0,zero
    paddub s6,a2,zero
    .word 0x70008e28
    beq s4,v0,L1a233c
    .word 0x70009628
    addiu v0,zero,10
    beq s4,v0,L1a22f0
    nop
    addiu v0,zero,9
    beq s4,v0,L1a2144
    nop
    addiu v0,zero,6
    beq s4,v0,L1a20d8
    nop
    addiu v0,zero,5
    beq s4,v0,L1a207c
    nop
    addiu v0,zero,13
    beq s4,v0,L1a204c
    nop
    addiu v1,zero,1
    beq s4,v1,L1a1f80
    nop
    addiu v0,zero,3
    beq s4,v0,L1a1f80
    nop
    addiu v0,zero,2
    beq s4,v0,L1a1f6c
    addiu v0,zero,-1
    b L1a2644
    nop
    addiu v0,zero,-1
L1a1f6c:
    .word 0xaf808504
    .word 0xaf808500
    paddub s1,v1,zero
    b L1a2644
    .word 0xaf8284fc
L1a1f80:
    .word 0x8f848328
    addiu s1,zero,1
    addiu a1,zero,270
    jal func_0013b550
    paddub s2,s1,zero
    .word 0x80420000
    .word 0x8f848328
    addiu a1,zero,190
    jal func_0013b550
    .word 0xa3a20088
    addiu s0,sp,140
    addiu a2,sp,136
    addiu a0,zero,5
    .word 0xae020000
    jal func_0024b540
    .word 0x70002e28
    .word 0x8f848328
    jal func_0013b550
    addiu a1,zero,267
    .word 0x80420000
    .word 0x8f848328
    addiu a1,zero,191
    jal func_0013b550
    .word 0xa3a20088
    addiu a2,sp,136
    addiu a0,zero,6
    .word 0xae020000
    jal func_0024b540
    .word 0x70002e28
    addiu a0,zero,17
    jal func_0024b4b0
    .word 0x70002e28
    addiu a0,zero,18
    jal func_0024b4b0
    .word 0x70002e28
    .word 0x8f8484fc
    bltz a0,L1a2644
    nop
    jal func_001b85a0
    nop
    addiu v1,zero,14
    beq v0,v1,L1a2044
    addiu v0,zero,-1
    jal func_001b85a0
    .word 0x8f8484fc
    addiu v1,zero,15
    bne v0,v1,L1a2644
    nop
    addiu v0,zero,-1
L1a2044:
    b L1a2644
    .word 0xaf8284fc
L1a204c:
    .word 0x8f8284fc
    bgez v0,L1a206c
    nop
    addiu v0,zero,2
    .word 0xaec20000
    addiu v0,zero,4
    b L1a2644
    .word 0xaec20004
L1a206c:
    .word 0xaec20000
    .word 0x8f828500
    b L1a2644
    .word 0xaec20004
L1a207c:
    .word 0x8f8284fc
    bgez v0,L1a20b0
    nop
    .word 0x8f828504
    beqz v0,L1a2644
    nop
    addiu v0,v0,-1
    addiu a0,zero,4
    .word 0xaf828504
    jal func_001785a0
    addiu s1,zero,1
    b L1a2644
    nop
L1a20b0:
    .word 0x8f828500
    beqz v0,L1a2644
    nop
    addiu v0,v0,-1
    addiu a0,zero,4
    .word 0xaf828500
    jal func_001785a0
    addiu s1,zero,1
    b L1a2644
    nop
L1a20d8:
    .word 0x8f8284fc
    bgez v0,L1a2118
    nop
    .word 0x8f828508
    .word 0x8f838504
    addiu v0,v0,-1
    sltu at,v1,v0
    beqz at,L1a2644
    nop
    addiu v0,v1,1
    addiu a0,zero,4
    .word 0xaf828504
    jal func_001785a0
    addiu s1,zero,1
    b L1a2644
    nop
L1a2118:
    .word 0x8f828500
    sltiu at,v0,2
    beqz at,L1a2644
    nop
    addiu v0,v0,1
    addiu a0,zero,4
    .word 0xaf828500
    jal func_001785a0
    addiu s1,zero,1
    b L1a2644
    nop
L1a2144:
    .word 0x8f848504
    addiu v0,zero,2
    bne a0,v0,L1a21b4
    nop
    jal func_001785a0
    .word 0x70002628
    jal func_001b54e0
    nop
    beqz v0,L1a2180
    nop
    addiu a1,zero,1
    jal func_001a09c0
    paddub a0,s5,zero
    b L1a2644
    nop
L1a2180:
    jal func_001b5310
    nop
    .word 0x3c010031
    .word 0x8c227404
    bnez v0,L1a2644
    nop
    .word 0x8ea20000
    addiu a1,zero,14
    paddub a0,s5,zero
    jalr ra,v0
    .word 0x70003628
    b L1a2644
    nop
L1a21b4:
    .word 0x8f8284fc
    bgezl v0,L1a22d4
    .word 0x70002628
    jal func_001b85a0
    nop
    addiu v1,zero,8
    beq v0,v1,L1a2268
    nop
    addiu v1,zero,15
    beq v0,v1,L1a2268
    nop
    addiu v1,zero,7
    beq v0,v1,L1a2200
    nop
    addiu v1,zero,6
    beq v0,v1,L1a2200
    nop
    b L1a2644
    nop
L1a2200:
    .word 0x3c02002e
    addiu a0,v0,8368
    .word 0xdc820000
    .word 0xc4800008
    addiu v1,sp,144
    .word 0xfc620000
    .word 0xe4600008
    jal func_001b6f50
    .word 0x8f848504
    .word 0xafa20098
    .word 0x8f828504
    addiu a1,sp,144
    jal func_0024b470
    addiu a0,v0,14
    .word 0x8f828504
    .word 0xaf8284fc
    .word 0x8f8484fc
    jal func_001b6f50
    addiu s2,zero,1
    .word 0x8c42000c
    .word 0x70002628
    paddub s1,s2,zero
    jal func_001785a0
    .word 0xaf828500
    b L1a2644
    nop
L1a2268:
    .word 0x3c020031
    addiu v0,v0,27584
    beq s5,v0,L1a2644
    nop
    .word 0x3c02002e
    addiu a0,v0,8384
    .word 0xdc820000
    .word 0xc4800008
    addiu v1,sp,160
    .word 0xfc620000
    .word 0xe4600008
    jal func_001b6f50
    .word 0x8f848504
    .word 0xafa200a8
    .word 0x8f828504
    addiu a1,sp,160
    jal func_0024b470
    addiu a0,v0,14
    .word 0x8f828504
    addiu s2,zero,1
    .word 0x70002628
    .word 0xaf808500
    jal func_001785a0
    .word 0xaf8284fc
    b L1a2644
    nop
    .word 0x70002628
L1a22d4:
    jal func_001785a0
    nop
    addiu a1,zero,1
    jal func_001a09c0
    paddub a0,s5,zero
    b L1a2644
    nop
L1a22f0:
    .word 0x8f8284fc
    bltz v0,L1a2318
    nop
    addiu v0,zero,-1
    addiu s2,zero,1
    .word 0xaf8284fc
    jal func_001785a0
    paddub a0,s2,zero
    b L1a2644
    nop
L1a2318:
    jal func_001b85c0
    nop
    bnez v0,L1a2644
    nop
    addiu a1,zero,2
    jal func_001a09c0
    paddub a0,s5,zero
    b L1a27b8
    addiu v0,zero,1
L1a233c:
    jal func_001b6f70
    nop
    .word 0xaf80851c
    .word 0x70008628
L1a234c:
    .word 0x8f8284fc
    beql v0,s0,L1a260c
    addiu s0,s0,1
    jal func_001b85a0
    paddub a0,s0,zero
    sltiu at,v0,16
    beqz at,L1a2608
    nop
    .word 0x3c03002f
    addiu v1,v1,-96
    sll v0,v0,0x2
    addu v0,v0,v1
    .word 0x8c420000
    jr v0
    nop
    .word 0x3c02002e
    addiu a0,v0,5808
    .word 0xdc820000
    .word 0xc4800008
    addiu v1,sp,240
    .word 0xfc620000
    .word 0xe4600008
    .word 0x8f848328
    jal func_0013b550
    addiu a1,zero,151
    paddub a0,v0,zero
    .word 0x70002e28
    jal func_001a3fe0
    .word 0x70003628
    addiu a0,s0,14
    addiu a1,sp,240
    jal func_0024b470
    .word 0xafa200f8
    b L1a2608
    nop
    .word 0x3c02002e
    addiu a0,v0,5808
    .word 0xdc820000
    .word 0xc4800008
    addiu v1,sp,256
    .word 0xfc620000
    .word 0xe4600008
    .word 0x8f848328
    jal func_0013b550
    addiu a1,zero,146
    paddub a0,v0,zero
    .word 0x70002e28
    jal func_001a3fe0
    .word 0x70003628
    addiu a0,s0,14
    addiu a1,sp,256
    jal func_0024b470
    .word 0xafa20108
    b L1a2608
    nop
    .word 0x3c02002e
    addiu a0,v0,5808
    .word 0xdc820000
    .word 0xc4800008
    addiu v1,sp,272
    .word 0xfc620000
    .word 0xe4600008
    .word 0x8f848328
    jal func_0013b550
    addiu a1,zero,149
    paddub a0,v0,zero
    .word 0x70002e28
    jal func_001a3fe0
    .word 0x70003628
    addiu a0,s0,14
    addiu a1,sp,272
    jal func_0024b470
    .word 0xafa20118
    b L1a2608
    nop
    .word 0x3c02002e
    addiu a0,v0,5808
    .word 0xdc820000
    .word 0xc4800008
    addiu v1,sp,288
    .word 0xfc620000
    .word 0xe4600008
    .word 0x8f848328
    jal func_0013b550
    addiu a1,zero,148
    paddub a0,v0,zero
    .word 0x70002e28
    jal func_001a3fe0
    .word 0x70003628
    addiu a0,s0,14
    addiu a1,sp,288
    jal func_0024b470
    .word 0xafa20128
    b L1a2608
    nop
    .word 0x3c020031
    addiu v0,v0,27584
    beq s5,v0,L1a2534
    nop
    jal func_001b6f40
    nop
    paddub s3,v0,zero
    .word 0x3c02002e
    addiu a0,v0,5808
    .word 0xdc820000
    .word 0xc4800008
    addiu v1,sp,304
    .word 0xfc620000
    .word 0xe4600008
    .word 0x8f848328
    jal func_0013b550
    addiu a1,zero,150
    paddub a1,s3,zero
    paddub a0,v0,zero
    jal func_001a3fe0
    .word 0x70003628
    addiu a0,s0,14
    addiu a1,sp,304
    jal func_0024b470
    .word 0xafa20138
    b L1a2608
    nop
L1a2534:
    .word 0x3c02002e
    addiu a0,v0,5808
    .word 0xdc820000
    .word 0xc4800008
    addiu v1,sp,320
    .word 0xfc620000
    .word 0xe4600008
    .word 0x8f848328
    jal func_0013b550
    addiu a1,zero,149
    paddub a0,v0,zero
    .word 0x70002e28
    jal func_001a3fe0
    .word 0x70003628
    addiu a0,s0,14
    addiu a1,sp,320
    jal func_0024b470
    .word 0xafa20148
    b L1a2608
    nop
    .word 0x3c02002e
    addiu a0,v0,5808
    .word 0xdc820000
    .word 0xc4800008
    addiu v1,sp,336
    .word 0xfc620000
    .word 0xe4600008
    .word 0x8f848328
    jal func_0013b550
    addiu a1,zero,147
    paddub a0,v0,zero
    .word 0x70002e28
    jal func_001a3fe0
    .word 0x70003628
    addiu a0,s0,14
    addiu a1,sp,336
    jal func_0024b470
    .word 0xafa20158
    b L1a2608
    nop
    .word 0x3c02002e
    addiu a0,v0,8400
    .word 0xdc820000
    .word 0xc4800008
    addiu v1,sp,176
    .word 0xfc620000
    paddub a0,s0,zero
    jal func_001b6f50
    .word 0xe4600008
    addiu a0,s0,14
    addiu a1,sp,176
    jal func_0024b470
    .word 0xafa200b8
L1a2608:
    addiu s0,s0,1
L1a260c:
    sltiu v0,s0,2
    bnez v0,L1a234c
    nop
    .word 0x8f8484fc
    bltz a0,L1a2644
    nop
    jal func_001b85a0
    nop
    addiu v1,zero,14
    bne v0,v1,L1a2644
    nop
    addiu v0,zero,-1
    addiu s2,zero,1
    .word 0xaf8284fc
L1a2644:
    beqz s1,L1a26e8
    nop
    .word 0x8f8284fc
    bgez v0,L1a26b8
    nop
    .word 0x3c02002e
    addiu a0,v0,8416
    .word 0xdc820000
    .word 0xc4800008
    addiu v1,sp,192
    .word 0x70008628
    .word 0xfc620000
    b L1a26a0
    .word 0xe4600008
L1a267c:
    .word 0x8f828504
    addiu a0,s0,14
    addiu a1,sp,192
    xor v0,s0,v0
    sltiu v0,v0,1
    jal func_0024b470
    .word 0xafa200c4
    addiu s0,s0,1
    nop
L1a26a0:
    .word 0x8f828508
    sltu v0,s0,v0
    bnez v0,L1a267c
    nop
    b L1a26e8
    nop
L1a26b8:
    .word 0x3c02002e
    addiu v1,v0,8432
    .word 0xdc620000
    .word 0xc4600008
    addiu a1,sp,208
    .word 0xfca20000
    .word 0xe4a00008
    .word 0x8f828504
    .word 0x8f838500
    addiu a0,v0,14
    jal func_0024b470
    .word 0xafa300d4
L1a26e8:
    beqz s2,L1a278c
    nop
    .word 0x3c02002e
    addiu a0,v0,8448
    .word 0xdc820000
    .word 0xc4800008
    addiu v1,sp,224
    .word 0x70008628
    .word 0xfc620000
    b L1a2738
    .word 0xe4600008
L1a2714:
    .word 0x8f8284fc
    addiu a0,s0,14
    addiu a1,sp,224
    xor v0,s0,v0
    sltiu v0,v0,1
    jal func_0024b470
    .word 0xafa200e4
    addiu s0,s0,1
    nop
L1a2738:
    .word 0x8f828508
    sltu v0,s0,v0
    bnez v0,L1a2714
    nop
    .word 0x8f8284fc
    bgez v0,L1a2774
    nop
    .word 0x8f848328
    jal func_0013b550
    addiu a1,zero,153
    addiu a0,zero,19
    jal func_0024b470
    paddub a1,v0,zero
    b L1a2790
    .word 0x8f8284fc
L1a2774:
    .word 0x8f848328
    jal func_0013b550
    addiu a1,zero,154
    addiu a0,zero,19
    jal func_0024b470
    paddub a1,v0,zero
L1a278c:
    .word 0x8f8284fc
L1a2790:
    bgez v0,L1a27ac
    paddub a0,s5,zero
    beqz s2,L1a27a8
    nop
    b L1a27b8
    addiu v0,zero,1
L1a27a8:
    paddub a0,s5,zero
L1a27ac:
    paddub a1,s4,zero
    jal func_001a3ac0
    paddub a2,s6,zero
L1a27b8:
    .word 0x7bbf0070
    .word 0x7bb60060
    .word 0x7bb50050
    .word 0x7bb40040
    .word 0x7bb30030
    .word 0x7bb20020
    .word 0x7bb10010
    .word 0x7bb00000
    jr ra
    addiu sp,sp,352
}


