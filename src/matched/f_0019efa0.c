extern void func_0013b550(void);
extern void func_00195a30(void);
extern void func_001b6240(void);
extern void func_001b4ee0(void);
extern void func_001b5470(void);
extern void func_001956b0(void);
extern void func_00247890(void);
extern void func_00121b70(void);
extern void func_001214b8(void);
extern void func_0024b540(void);
extern void func_001a3ac0(void);
asm void func(void) {
    .set noreorder
    addiu sp,sp,-400
    .word 0x7fbf0080
    .word 0x7fb70070
    .word 0x7fb60060
    .word 0x7fb50050
    .word 0x7fb40040
    .word 0x7fb30030
    .word 0x7fb20020
    .word 0x7fb10010
    addiu v0,zero,3
    paddub s4,a1,zero
    .word 0x7fb00000
    paddub s5,a0,zero
    beq s4,v0,L19f064
    paddub s3,a2,zero
    addiu v0,zero,9
    beq s4,v0,L19f04c
    nop
    beqz s4,L19eff8
    nop
    b L19f388
    paddub a0,s5,zero
L19eff8:
    .word 0x8f848328
    jal func_0013b550
    .word 0x70002e28
    .word 0xaea20008
    .word 0x3c020031
    addiu v0,v0,24544
    .word 0xaea0000c
    .word 0xaea20014
    addiu v0,zero,1
    .word 0xaea20010
    .word 0x3c020031
    .word 0xaea00018
    addiu a0,v0,24544
    addiu a1,zero,3
    addiu a2,zero,48
    jal func_00195a30
    .word 0xaea00004
    .word 0x8ea20004
    ori v0,v0,0xa
    b L19f384
    .word 0xaea20004
L19f04c:
    jal func_001b6240
    nop
    bnez v0,L19f384
    nop
    b L19f394
    addiu v0,zero,1
L19f064:
    .word 0x3c020030
    addiu s0,v0,28544
    .word 0x3c02002e
    addiu a2,v0,8736
    addiu a1,sp,160
    addiu a0,zero,7
L19f07c:
    .word 0x78c30000
    .word 0x78c20010
    addiu a0,a0,-1
    .word 0x7ca30000
    .word 0x7ca20010
    addiu a2,a2,32
    bgtz a0,L19f07c
    addiu a1,a1,32
    .word 0x3c010030
    .word 0x9023a61f
    addiu v0,zero,6
    bne v1,v0,L19f0cc
    nop
    .word 0x3c020031
    addiu a0,v0,24544
    addiu a1,zero,3
    jal func_00195a30
    addiu a2,zero,47
    b L19f170
    .word 0xc600023c
L19f0cc:
    jal func_001b4ee0
    nop
    slti at,v0,7
    beqz at,L19f0fc
    nop
    .word 0x3c020031
    addiu a0,v0,24544
    addiu a1,zero,3
    jal func_00195a30
    addiu a2,zero,46
    b L19f16c
    nop
L19f0fc:
    jal func_001b5470
    nop
    bltz v0,L19f128
    nop
    .word 0x3c020031
    addiu a0,v0,24544
    addiu a1,zero,3
    jal func_00195a30
    addiu a2,zero,48
    b L19f16c
    nop
L19f128:
    .word 0x3c010030
    .word 0x9022a61f
    slti at,v0,6
    beqz at,L19f158
    nop
    .word 0x3c020031
    addiu a0,v0,24544
    addiu a1,zero,3
    jal func_00195a30
    addiu a2,zero,43
    b L19f16c
    nop
L19f158:
    .word 0x3c020031
    addiu a0,v0,24544
    addiu a1,zero,3
    jal func_001956b0
    addiu a2,zero,1
L19f16c:
    .word 0xc600023c
L19f170:
    addiu s7,sp,148
    addiu s6,sp,152
    addiu s2,sp,156
    .word 0xe7a00090
    .word 0x8e020240
    addiu a0,sp,144
    addiu a1,sp,399
    .word 0xaee20000
    .word 0x8e020244
    .word 0xaec20000
    .word 0xc6000150
    .word 0xe6400000
    jal func_00247890
    .word 0xaf80851c
    paddub s0,v0,zero
    beqz s0,L19f1d4
    nop
    .word 0x93a3018f
    sll v0,v1,0x3
    subu v0,v0,v1
    sll v0,v0,0x2
    addu v1,v0,sp
    .word 0x8c6200d8
    addiu v0,v0,1
    .word 0xac6200d8
L19f1d4:
    .word 0x8f848328
    jal func_0013b550
    addiu a1,zero,305
    .word 0x8f84851c
    beqz a0,L19f208
    paddub s1,v0,zero
    jal func_00121b70
    nop
    addiu v1,v0,1
    .word 0x8f82851c
    addu v0,v0,v1
    b L19f214
    .word 0xaf82851c
L19f208:
    .word 0x3c020031
    addiu v0,v0,26880
    .word 0xaf82851c
L19f214:
    .word 0x8f84851c
    paddub a1,s1,zero
    .word 0x70003628
    jal func_001214b8
    .word 0x70003e28
    .word 0x8f84851c
    .word 0x87828068
    addiu v1,sp,396
    .word 0xafa400b4
    beqz s0,L19f254
    .word 0xa4620000
    .word 0x83a2018c
    dsll32 v1,s0,0x18
    dsra32 v1,v1,0x18
    addu v0,v0,v1
    .word 0xa3a2018c
L19f254:
    beqz a0,L19f278
    nop
    jal func_00121b70
    nop
    addiu v1,v0,1
    .word 0x8f82851c
    addu v0,v0,v1
    b L19f284
    .word 0xaf82851c
L19f278:
    .word 0x3c020031
    addiu v0,v0,26880
    .word 0xaf82851c
L19f284:
    .word 0x8f84851c
    addiu a1,sp,396
    .word 0x70003628
    jal func_001214b8
    .word 0x70003e28
    .word 0x3c010030
    .word 0x9022a61f
    .word 0x8f84851c
    beqz a0,L19f2c8
    addiu s0,v0,22
    jal func_00121b70
    nop
    addiu v1,v0,1
    .word 0x8f82851c
    addu v0,v0,v1
    b L19f2d4
    .word 0xaf82851c
L19f2c8:
    .word 0x3c020031
    addiu v0,v0,26880
    .word 0xaf82851c
L19f2d4:
    .word 0x8f848328
    jal func_0013b550
    addiu a1,zero,299
    .word 0x8f848328
    paddub a1,s0,zero
    jal func_0013b550
    paddub s0,v0,zero
    .word 0x8f84851c
    paddub a1,s0,zero
    jal func_001214b8
    paddub a2,v0,zero
    .word 0x8f82851c
    .word 0x8f848328
    addiu a1,zero,300
    jal func_0013b550
    .word 0xafa200d0
    .word 0x8f848328
    .word 0xafa200ec
    addiu v0,sp,144
    addiu a1,zero,301
    jal func_0013b550
    .word 0xafa200f0
    .word 0x8f848328
    .word 0xafa20108
    addiu a1,zero,302
    jal func_0013b550
    .word 0xafb7010c
    .word 0x8f848328
    .word 0xafa20124
    addiu a1,zero,303
    jal func_0013b550
    .word 0xafb60128
    .word 0xdf8584d8
    .word 0xafa20140
    addiu a2,sp,384
    .word 0xafb20144
    addiu v1,zero,8
    .word 0xfcc50000
    addiu v0,sp,160
    .word 0xafa30180
    addiu a0,zero,10
    .word 0xafa20184
    jal func_0024b540
    .word 0x70002e28
L19f384:
    paddub a0,s5,zero
L19f388:
    paddub a1,s4,zero
    jal func_001a3ac0
    paddub a2,s3,zero
L19f394:
    .word 0x7bbf0080
    .word 0x7bb70070
    .word 0x7bb60060
    .word 0x7bb50050
    .word 0x7bb40040
    .word 0x7bb30030
    .word 0x7bb20020
    .word 0x7bb10010
    .word 0x7bb00000
    jr ra
    addiu sp,sp,400
}


