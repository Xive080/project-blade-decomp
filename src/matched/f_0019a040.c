extern void func_0013b550(void);
extern void func_00195a90(void);
extern void func_00132a00(void);
extern void func_0024b4b0(void);
extern void func_0024b540(void);
extern void func_00131fd0(void);
extern void func_001785a0(void);
extern void func_001a3ac0(void);
extern void func_001b5c30(void);
asm void func(void) {
    .set noreorder
    addiu sp,sp,-160
    .word 0x7fbf0050
    .word 0x7fb40040
    .word 0x7fb30030
    .word 0x7fb20020
    .word 0x7fb10010
    .word 0x7fb00000
    addiu v0,zero,10
    paddub s1,a1,zero
    paddub s2,a0,zero
    beq s1,v0,L19a2a4
    paddub s0,a2,zero
    addiu v0,zero,4
    beq s1,v0,L19a294
    nop
    addiu v0,zero,18
    beq s1,v0,L19a1c0
    nop
    addiu v0,zero,3
    beq s1,v0,L19a180
    nop
    addiu v0,zero,11
    beq s1,v0,L19a11c
    nop
    beqz s1,L19a0b0
    nop
    b L19a2fc
    paddub a2,s0,zero
L19a0b0:
    .word 0x8f848328
    jal func_0013b550
    addiu a1,zero,253
    .word 0xae420008
    .word 0x8f848328
    jal func_0013b550
    addiu a1,zero,254
    .word 0xae42000c
    .word 0x3c020031
    addiu v0,v0,22784
    .word 0xae420014
    addiu v0,zero,8
    .word 0xae420010
    .word 0x3c020031
    .word 0xae400018
    addiu s4,v0,22784
    .word 0xae400004
    .word 0x70009e28
L19a0f8:
    addiu a1,s3,255
    jal func_00195a90
    paddub a0,s4,zero
    addiu s3,s3,1
    sltiu v0,s3,8
    bnez v0,L19a0f8
    addiu s4,s4,32
    b L19a2f8
    nop
L19a11c:
    .word 0x8f8284e4
    beqz v0,L19a2f8
    nop
    .word 0xc7818518
    .word 0x3c023f4c
    ori v0,v0,0xcccd
    .word 0x44820000
    nop
    c.le.s $f1,$f0
    nop
    bc1t L19a2f8
    nop
    jal func_00132a00
    nop
    addiu a0,zero,5
    jal func_0024b4b0
    addiu a1,zero,1
    addiu a0,zero,10
    jal func_0024b4b0
    .word 0x70002e28
    addiu v0,zero,1
    .word 0xaf8084e4
    .word 0xaf808518
    b L19a2f8
    .word 0xaf8284e0
L19a180:
    .word 0x8f848328
    jal func_0013b550
    addiu a1,zero,270
    .word 0x80420000
    .word 0x8f848328
    addiu a1,zero,263
    jal func_0013b550
    .word 0xa3a20088
    addiu a2,sp,136
    addiu a0,zero,5
    addiu a1,zero,1
    jal func_0024b540
    .word 0xafa2008c
    .word 0xaf8084e4
    b L19a2f8
    .word 0xaf8084e0
L19a1c0:
    .word 0x8f8284e4
    beqz v0,L19a1f4
    nop
    jal func_00131fd0
    .word 0x70002628
    bnez v0,L19a1f4
    nop
    addiu a0,zero,10
    jal func_0024b4b0
    .word 0x70002e28
    addiu v0,zero,1
    .word 0xaf8084e4
    .word 0xaf8284e0
L19a1f4:
    .word 0x8f8284e0
    beqz v0,L19a2f8
    nop
    .word 0xc7818518
    .word 0x3c023f4c
    ori v0,v0,0xcccd
    .word 0x44820000
    nop
    c.le.s $f1,$f0
    nop
    bc1t L19a2f8
    nop
    .word 0x8f8284e4
    beqz v0,L19a258
    nop
    .word 0x8f848328
    jal func_0013b550
    addiu a1,zero,269
    .word 0x80420000
    .word 0x8f848328
    addiu a1,zero,264
    jal func_0013b550
    .word 0xa3a20090
    b L19a27c
    .word 0xafa20094
L19a258:
    .word 0x8f848328
    jal func_0013b550
    addiu a1,zero,270
    .word 0x80420000
    .word 0x8f848328
    addiu a1,zero,263
    jal func_0013b550
    .word 0xa3a20090
    .word 0xafa20094
L19a27c:
    addiu a2,sp,144
    addiu a0,zero,5
    jal func_0024b540
    addiu a1,zero,1
    b L19a2f8
    .word 0xaf8084e0
L19a294:
    jal func_00132a00
    nop
    b L19a2f8
    .word 0xaf8084e4
L19a2a4:
    .word 0x3c020031
    addiu v1,v0,29280
    .word 0x3c010031
    .word 0x8c227400
    beqz v0,L19a2d4
    addiu a0,zero,1
L19a2bc:
    beq v0,v1,L19a2d0
    nop
    .word 0x8c42001c
    bnez v0,L19a2bc
    nop
L19a2d0:
    addiu a0,zero,1
L19a2d4:
    .word 0x3c010031
    .word 0xac247404
    .word 0x3c010031
    .word 0xac227408
    .word 0x3c010031
    jal func_001785a0
    .word 0xac20740c
    b L19a48c
    addiu v0,zero,1
L19a2f8:
    paddub a2,s0,zero
L19a2fc:
    paddub a0,s2,zero
    jal func_001a3ac0
    paddub a1,s1,zero
    bnez v0,L19a31c
    addiu v0,zero,9
    b L19a48c
    .word 0x70001628
    addiu v0,zero,9
L19a31c:
    beq s1,v0,L19a348
    nop
    addiu v0,zero,3
    beq s1,v0,L19a33c
    .word 0x3c023f4c
    b L19a48c
    addiu v0,zero,1
    .word 0x3c023f4c
L19a33c:
    ori v0,v0,0xcccd
    b L19a488
    .word 0xaf828518
L19a348:
    .word 0x8f8284e4
    bnez v0,L19a488
    nop
    .word 0xc7818518
    .word 0x3c023f4c
    ori v0,v0,0xcccd
    .word 0x44820000
    nop
    c.le.s $f1,$f0
    nop
    bc1t L19a488
    nop
    .word 0x3c02002e
    addiu v0,v0,12272
    .word 0x78460000
    .word 0xdc430010
    addiu a3,sp,96
    addiu a0,zero,5
    addiu a1,zero,1
    .word 0xc4420018
    .word 0x7ce60000
    .word 0xfce30010
    jal func_0024b4b0
    .word 0xe4e20018
    .word 0x3c010031
    .word 0x8c227410
    beqz v0,L19a3d4
    addiu v0,zero,8
    addiu v0,zero,96
    .word 0x3c010030
    .word 0xac22a64c
    .word 0x3c010030
    b L19a3e8
    .word 0xac20a658
    addiu v0,zero,8
L19a3d4:
    .word 0x3c010030
    .word 0xac22a64c
    addiu v0,zero,2
    .word 0x3c010030
    .word 0xac22a658
L19a3e8:
    addiu v0,zero,1
    .word 0x3c010030
    .word 0xac22a670
    .word 0x3c010030
    .word 0xac22a664
    .word 0x3c010030
    jal func_001b5c30
    .word 0xac20a6c4
    .word 0x3c010030
    .word 0xe420a6ac
    .word 0x8e430018
    addiu v0,zero,7
    beq v1,v0,L19a428
    nop
    b L19a438
    addiu v0,v1,1
L19a428:
    .word 0x3c010030
    b L19a440
    .word 0xac20a640
    addiu v0,v1,1
L19a438:
    .word 0x3c010030
    .word 0xac22a640
L19a440:
    .word 0x8f848328
    jal func_0013b550
    addiu a1,zero,252
    .word 0xdf8584d8
    .word 0xafa20074
    addiu a2,sp,152
    addiu v1,zero,1
    .word 0xfcc50000
    addiu v0,sp,96
    .word 0xafa30098
    addiu a0,zero,10
    .word 0xafa2009c
    jal func_0024b540
    .word 0x70002e28
    addiu v0,zero,1
    .word 0xaf808518
    .word 0xaf8284e0
    .word 0xaf8284e4
L19a488:
    addiu v0,zero,1
L19a48c:
    .word 0x7bbf0050
    .word 0x7bb40040
    .word 0x7bb30030
    .word 0x7bb20020
    .word 0x7bb10010
    .word 0x7bb00000
    jr ra
    addiu sp,sp,160
}


