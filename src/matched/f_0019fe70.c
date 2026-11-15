extern void func_0013b550(void);
extern void func_00195a90(void);
extern void func_001b86b0(void);
extern void func_001a09c0(void);
extern void func_0024b540(void);
extern void func_0024b4b0(void);
extern void func_001a1ec0(void);
extern void func_001a3ac0(void);
extern void func_001b6f50(void);
extern void func_001b54e0(void);
extern void func_001b8630(void);
extern void func_001a1880(void);
extern void func_001b6f70(void);
extern void func_001b85a0(void);
extern void func_001a3fe0(void);
extern void func_001a0a90(void);
extern void func_0024b470(void);
extern void func_001785a0(void);
extern void func_001b85c0(void);
extern void func_00198070(void);
asm void func(void) {
    .set noreorder
    addiu sp,sp,-144
    .word 0x7fbf0040
    .word 0x7fb30030
    .word 0x7fb20020
    .word 0x7fb10010
    .word 0x7fb00000
    addiu v0,zero,14
    paddub s1,a1,zero
    paddub s2,a0,zero
    beq s1,v0,L19ffd0
    paddub s0,a2,zero
    addiu v0,zero,13
    beq s1,v0,L19ffc0
    nop
    addiu v0,zero,3
    beq s1,v0,L19ff48
    .word 0x3c023dcc
    addiu v0,zero,2
    beq s1,v0,L19ff24
    nop
    beqz s1,L19fed0
    nop
    b L19ffe4
    .word 0x8f848510
L19fed0:
    .word 0x8f848328
    jal func_0013b550
    addiu a1,zero,40
    .word 0xae420008
    .word 0x8f848328
    jal func_0013b550
    addiu a1,zero,40
    .word 0xae42000c
    .word 0x3c020031
    addiu v0,v0,25312
    .word 0xae420014
    addiu v0,zero,1
    .word 0xae420010
    .word 0x3c020031
    addiu a0,v0,25312
    .word 0xae400018
    addiu a1,zero,40
    jal func_00195a90
    .word 0xae400004
    b L19ffe0
    nop
L19ff24:
    .word 0xaf828508
    jal func_001b86b0
    .word 0x70002628
    .word 0x70002628
    jal func_001a09c0
    .word 0x70002e28
    b L19ffe0
    nop
    .word 0x3c023dcc
L19ff48:
    ori v0,v0,0xcccd
    .word 0xafa20058
    .word 0x3c023e8f
    ori v0,v0,0x5c29
    .word 0x8f848328
    addiu a1,zero,101
    jal func_0013b550
    .word 0xafa2005c
    addiu s3,sp,96
    addiu a2,sp,88
    addiu a0,zero,14
    addiu a1,zero,1
    jal func_0024b540
    .word 0xae620000
    .word 0x8f848328
    .word 0x3c023ecc
    ori v0,v0,0xcccd
    addiu a1,zero,102
    jal func_0013b550
    .word 0xafa20058
    addiu a2,sp,88
    addiu a0,zero,15
    addiu a1,zero,1
    jal func_0024b540
    .word 0xae620000
    addiu a0,zero,24
    jal func_0024b4b0
    .word 0x70002e28
    b L19ffe0
    nop
L19ffc0:
    jal func_001a1ec0
    nop
    b L1a0390
    .word 0x7bbf0040
L19ffd0:
    jal func_001a3ac0
    nop
    b L1a038c
    nop
L19ffe0:
    .word 0x8f848510
L19ffe4:
    addiu v0,zero,2
    beq a0,v0,L1a0350
    addiu v0,zero,18
    addiu v0,zero,12
    beq a0,v0,L1a0284
    addiu v0,zero,9
    addiu v0,zero,11
    beql a0,v0,L1a026c
    paddub a0,s2,zero
    addiu v1,zero,10
    beq a0,v1,L1a0150
    addiu v0,zero,18
    addiu v0,zero,3
    beql a0,v0,L1a0138
    paddub a0,s2,zero
    addiu v0,zero,4
    beq a0,v0,L1a00d0
    nop
    addiu v0,zero,1
    beq a0,v0,L1a0060
    nop
    beqz a0,L1a004c
    paddub a0,s2,zero
    b L1a038c
    .word 0x70001628
    paddub a0,s2,zero
L1a004c:
    paddub a1,s1,zero
    jal func_001a1ec0
    paddub a2,s0,zero
    b L1a038c
    nop
L1a0060:
    .word 0x3c010031
    .word 0x8c227404
    bnez v0,L1a0084
    nop
    .word 0x8e420000
    addiu a2,sp,104
    addiu a1,zero,13
    jalr ra,v0
    paddub a0,s2,zero
L1a0084:
    jal func_001b6f50
    .word 0x8fa40068
    .word 0x8fa4006c
    sll v1,a0,0x2
    addu v1,v1,a0
    sll v1,v1,0x2
    addu v0,v0,v1
    .word 0x8c420020
    beqz v0,L1a00d0
    nop
    jal func_001b54e0
    nop
    beqz v0,L1a00d0
    nop
    addiu a1,zero,3
    jal func_001a09c0
    paddub a0,s2,zero
    b L1a038c
    addiu v0,zero,1
L1a00d0:
    .word 0x3c010031
    .word 0x8c227404
    bnez v0,L1a00f4
    nop
    .word 0x8e420000
    addiu a2,sp,112
    addiu a1,zero,13
    jalr ra,v0
    paddub a0,s2,zero
L1a00f4:
    .word 0x8fa50074
    jal func_001b8630
    .word 0x8fa40070
    beqz v0,L1a0120
    paddub a0,s2,zero
    addiu a1,zero,10
    jal func_001a09c0
    paddub a0,s2,zero
    b L1a012c
    addiu v0,zero,1
    paddub a0,s2,zero
L1a0120:
    jal func_001a09c0
    .word 0x70002e28
    addiu v0,zero,1
L1a012c:
    b L1a038c
    nop
    paddub a0,s2,zero
L1a0138:
    paddub a1,s1,zero
    jal func_001a1880
    paddub a2,s0,zero
    b L1a038c
    nop
    addiu v0,zero,18
L1a0150:
    beq s1,v0,L1a0174
    nop
    beq s1,v1,L1a016c
    addiu v0,zero,1
    b L1a0254
    paddub a0,s2,zero
    addiu v0,zero,1
L1a016c:
    b L1a0260
    nop
L1a0174:
    .word 0x3c010031
    .word 0x8c227404
    bnez v0,L1a0198
    nop
    .word 0x8e420000
    addiu a2,sp,120
    addiu a1,zero,13
    jalr ra,v0
    paddub a0,s2,zero
L1a0198:
    jal func_001b6f70
    nop
    jal func_001b85a0
    .word 0x8fa40078
    addiu v1,zero,4
    beq v0,v1,L1a0250
    nop
    addiu v1,zero,8
    beq v0,v1,L1a0250
    nop
    addiu v1,zero,7
    beq v0,v1,L1a0250
    nop
    addiu v1,zero,6
    beq v0,v1,L1a0250
    nop
    addiu v1,zero,2
    beq v0,v1,L1a01f0
    addiu a1,zero,11
    b L1a0204
    .word 0x8fa20078
    addiu a1,zero,11
L1a01f0:
    jal func_001a09c0
    paddub a0,s2,zero
    b L1a0250
    nop
    .word 0x8fa20078
L1a0204:
    .word 0x8f848328
    addiu a1,zero,137
    .word 0xaf80851c
    jal func_0013b550
    addiu s3,v0,1
    paddub a1,s3,zero
    paddub a0,v0,zero
    jal func_001a3fe0
    .word 0x70003628
    .word 0xafa20088
    addiu v0,zero,1
    addiu a2,sp,136
    addiu a0,zero,18
    .word 0xafa2008c
    jal func_0024b540
    .word 0x70002e28
    addiu a1,zero,12
    jal func_001a09c0
    paddub a0,s2,zero
L1a0250:
    paddub a0,s2,zero
L1a0254:
    paddub a1,s1,zero
    jal func_001a3ac0
    paddub a2,s0,zero
L1a0260:
    b L1a038c
    nop
    paddub a0,s2,zero
L1a026c:
    paddub a1,s1,zero
    jal func_001a0a90
    paddub a2,s0,zero
    b L1a038c
    nop
    addiu v0,zero,9
L1a0284:
    beq s1,v0,L1a0320
    .word 0x70002628
    addiu v0,zero,10
    beq s1,v0,L1a0314
    addiu v0,zero,1
    addiu v0,zero,1
    beq s1,v0,L1a02ac
    nop
    b L1a0338
    paddub a0,s2,zero
L1a02ac:
    .word 0x8f848328
    jal func_0013b550
    addiu a1,zero,270
    .word 0x80420000
    .word 0x8f848328
    addiu a1,zero,195
    jal func_0013b550
    .word 0xa3a20080
    addiu a2,sp,128
    addiu a0,zero,5
    .word 0xafa20084
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
    b L1a0334
    nop
    addiu v0,zero,1
L1a0314:
    b L1a0344
    nop
    .word 0x70002628
L1a0320:
    jal func_001785a0
    nop
    paddub a0,s2,zero
    jal func_001a09c0
    .word 0x70002e28
L1a0334:
    paddub a0,s2,zero
L1a0338:
    paddub a1,s1,zero
    jal func_001a3ac0
    paddub a2,s0,zero
L1a0344:
    b L1a038c
    nop
    addiu v0,zero,18
L1a0350:
    bne s1,v0,L1a0380
    addiu v0,zero,1
    jal func_001b6f70
    nop
    jal func_001b85c0
    nop
    beqz v0,L1a037c
    nop
    addiu a1,zero,1
    jal func_00198070
    paddub a0,s2,zero
L1a037c:
    addiu v0,zero,1
L1a0380:
    b L1a038c
    nop
    .word 0x70001628
L1a038c:
    .word 0x7bbf0040
L1a0390:
    .word 0x7bb30030
    .word 0x7bb20020
    .word 0x7bb10010
    .word 0x7bb00000
    jr ra
    addiu sp,sp,144
}


