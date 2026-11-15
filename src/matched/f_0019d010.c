extern void func_0013b550(void);
extern void func_00195a30(void);
extern void func_001b6240(void);
extern void func_00121b70(void);
extern void func_001214b8(void);
extern void func_0024b540(void);
extern void func_001a3ac0(void);
asm void func(void) {
    .set noreorder
    addiu sp,sp,-288
    .word 0x7fbf0050
    .word 0x7fb40040
    .word 0x7fb30030
    .word 0x7fb20020
    .word 0x7fb10010
    .word 0x7fb00000
    addiu v0,zero,3
    paddub s1,a1,zero
    paddub s2,a0,zero
    beq s1,v0,L19d0c8
    paddub s0,a2,zero
    addiu v0,zero,9
    beq s1,v0,L19d0b0
    nop
    beqz s1,L19d05c
    nop
    b L19d3bc
    paddub a0,s2,zero
L19d05c:
    .word 0x8f848328
    jal func_0013b550
    .word 0x70002e28
    .word 0xae420008
    .word 0x3c020031
    addiu v0,v0,24160
    .word 0xae40000c
    .word 0xae420014
    addiu v0,zero,1
    .word 0xae420010
    .word 0x3c020031
    .word 0xae400018
    addiu a0,v0,24160
    addiu a1,zero,12
    addiu a2,zero,39
    jal func_00195a30
    .word 0xae400004
    .word 0x8e420004
    ori v0,v0,0xa
    b L19d3b8
    .word 0xae420004
L19d0b0:
    jal func_001b6240
    nop
    bnez v0,L19d3b8
    nop
    b L19d3c8
    addiu v0,zero,1
L19d0c8:
    .word 0x3c02002e
    addiu a2,v0,10784
    addiu a1,sp,96
    addiu a0,zero,5
L19d0d8:
    .word 0x78c30000
    .word 0x78c20010
    addiu a0,a0,-1
    .word 0x7ca30000
    .word 0x7ca20010
    addiu a2,a2,32
    bgtz a0,L19d0d8
    addiu a1,a1,32
    .word 0xdcc20000
    .word 0x3c010030
    .word 0xfca20000
    .word 0xc42170d0
    .word 0x3c010030
    .word 0xc4207680
    .word 0xe7a10118
    .word 0xc7a20118
    .word 0xe7a0011c
    .word 0xc7a1011c
    c.le.s $f2,$f1
    nop
    bc1t L19d1b0
    .word 0xaf80851c
    .word 0x44800000
    nop
    c.eq.s $f0,$f1
    nop
    bc1f L19d154
    addiu a1,zero,311
    b L19d154
    addiu a1,zero,312
    addiu a1,zero,311
L19d154:
    jal func_0013b550
    .word 0x8f848328
    .word 0x8f84851c
    beqz a0,L19d184
    paddub s3,v0,zero
    jal func_00121b70
    nop
    addiu v1,v0,1
    .word 0x8f82851c
    addu v0,v0,v1
    b L19d190
    .word 0xaf82851c
L19d184:
    .word 0x3c020031
    addiu v0,v0,26880
    .word 0xaf82851c
L19d190:
    .word 0x8f84851c
    addiu a2,zero,1
    addiu a3,zero,2
    jal func_001214b8
    paddub a1,s3,zero
    .word 0x8f82851c
    b L19d268
    .word 0xafa20074
L19d1b0:
    c.le.s $f1,$f2
    nop
    bc1t L19d250
    nop
    .word 0x44800000
    nop
    c.eq.s $f0,$f2
    nop
    bc1f L19d1e0
    .word 0x8f848328
    b L19d1e4
    addiu a1,zero,312
L19d1e0:
    addiu a1,zero,311
L19d1e4:
    jal func_0013b550
    nop
    .word 0x8f84851c
    beqz a0,L19d214
    paddub s3,v0,zero
    jal func_00121b70
    nop
    addiu v1,v0,1
    .word 0x8f82851c
    addu v0,v0,v1
    b L19d220
    .word 0xaf82851c
L19d214:
    .word 0x3c020031
    addiu v0,v0,26880
    .word 0xaf82851c
L19d220:
    .word 0x8f84851c
    addiu a2,zero,2
    addiu a3,zero,1
    jal func_001214b8
    paddub a1,s3,zero
    .word 0x8f84851c
    addiu v1,zero,6
    addiu v0,zero,5
    .word 0xafa40074
    .word 0xafa30088
    b L19d268
    .word 0xafa200a4
L19d250:
    .word 0x8f848328
    jal func_0013b550
    addiu a1,zero,315
    .word 0xafa20074
    addiu v0,zero,5
    .word 0xafa200a4
L19d268:
    .word 0x8f848328
    jal func_0013b550
    addiu a1,zero,304
    .word 0x8f84851c
    beqz a0,L19d29c
    paddub s3,v0,zero
    jal func_00121b70
    nop
    addiu v1,v0,1
    .word 0x8f82851c
    addu v0,v0,v1
    b L19d2a8
    .word 0xaf82851c
L19d29c:
    .word 0x3c020031
    addiu v0,v0,26880
    .word 0xaf82851c
L19d2a8:
    .word 0x8f84851c
    addiu a2,zero,1
    paddub a1,s3,zero
    jal func_001214b8
    .word 0x70003e28
    .word 0x8f83851c
    .word 0x8f848328
    addiu v0,sp,280
    addiu a1,zero,304
    .word 0xafa30090
    jal func_0013b550
    .word 0xafa20094
    .word 0x8f84851c
    beqz a0,L19d300
    paddub s3,v0,zero
    jal func_00121b70
    nop
    addiu v1,v0,1
    .word 0x8f82851c
    addu v0,v0,v1
    b L19d30c
    .word 0xaf82851c
L19d300:
    .word 0x3c020031
    addiu v0,v0,26880
    .word 0xaf82851c
L19d30c:
    .word 0x8f84851c
    addiu a2,zero,2
    paddub a1,s3,zero
    jal func_001214b8
    .word 0x70003e28
    .word 0x8f83851c
    .word 0x8f848328
    .word 0x8f9488a8
    addiu v0,sp,284
    addiu a1,zero,316
    .word 0xafa300ac
    jal func_0013b550
    .word 0xafa200b0
    .word 0x8f84851c
    beqz a0,L19d368
    paddub s3,v0,zero
    jal func_00121b70
    nop
    addiu v1,v0,1
    .word 0x8f82851c
    addu v0,v0,v1
    b L19d374
    .word 0xaf82851c
L19d368:
    .word 0x3c020031
    addiu v0,v0,26880
    .word 0xaf82851c
L19d374:
    .word 0x8f84851c
    paddub a1,s3,zero
    paddub a2,s4,zero
    jal func_001214b8
    .word 0x70003e28
    .word 0x8f84851c
    .word 0xdf8584d8
    addiu a2,sp,272
    addiu v1,zero,6
    .word 0xafa400c8
    .word 0xfcc50000
    addiu v0,sp,96
    .word 0xafa30110
    addiu a0,zero,10
    .word 0xafa20114
    jal func_0024b540
    .word 0x70002e28
L19d3b8:
    paddub a0,s2,zero
L19d3bc:
    paddub a1,s1,zero
    jal func_001a3ac0
    paddub a2,s0,zero
L19d3c8:
    .word 0x7bbf0050
    .word 0x7bb40040
    .word 0x7bb30030
    .word 0x7bb20020
    .word 0x7bb10010
    .word 0x7bb00000
    jr ra
    addiu sp,sp,288
}


