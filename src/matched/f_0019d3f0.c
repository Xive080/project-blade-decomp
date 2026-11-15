extern void func_0013b550(void);
extern void func_00195a30(void);
extern void func_001b6240(void);
extern void func_00121b70(void);
extern void func_001214b8(void);
extern void func_0024b540(void);
extern void func_001a3ac0(void);
asm void func(void) {
    .set noreorder
    addiu sp,sp,-320
    .word 0x7fbf0050
    .word 0x7fb40040
    .word 0x7fb30030
    .word 0x7fb20020
    .word 0x7fb10010
    .word 0x7fb00000
    addiu v0,zero,3
    paddub s1,a1,zero
    paddub s2,a0,zero
    beq s1,v0,L19d4a8
    paddub s0,a2,zero
    addiu v0,zero,9
    beq s1,v0,L19d490
    nop
    beqz s1,L19d43c
    nop
    b L19d814
    paddub a0,s2,zero
L19d43c:
    .word 0x8f848328
    jal func_0013b550
    .word 0x70002e28
    .word 0xae420008
    .word 0x3c020031
    addiu v0,v0,24192
    .word 0xae40000c
    .word 0xae420014
    addiu v0,zero,1
    .word 0xae420010
    .word 0x3c020031
    .word 0xae400018
    addiu a0,v0,24192
    addiu a1,zero,10
    addiu a2,zero,39
    jal func_00195a30
    .word 0xae400004
    .word 0x8e420004
    ori v0,v0,0xa
    b L19d810
    .word 0xae420004
L19d490:
    jal func_001b6240
    nop
    bnez v0,L19d810
    nop
    b L19d820
    addiu v0,zero,1
L19d4a8:
    .word 0x3c02002e
    addiu a2,v0,10576
    addiu a1,sp,96
    addiu a0,zero,6
L19d4b8:
    .word 0x78c30000
    .word 0x78c20010
    addiu a0,a0,-1
    .word 0x7ca30000
    .word 0x7ca20010
    addiu a2,a2,32
    bgtz a0,L19d4b8
    addiu a1,a1,32
    .word 0xc4c20000
    .word 0x3c010030
    .word 0xe4a20000
    .word 0xc42170d0
    .word 0x3c010030
    .word 0xc4207680
    .word 0xe7a10138
    .word 0xc7a20138
    .word 0xe7a0013c
    .word 0xc7a1013c
    c.le.s $f2,$f1
    nop
    bc1t L19d590
    .word 0xaf80851c
    .word 0x44800000
    nop
    c.eq.s $f0,$f1
    nop
    bc1f L19d530
    .word 0x8f848328
    b L19d534
    addiu a1,zero,312
L19d530:
    addiu a1,zero,311
L19d534:
    jal func_0013b550
    nop
    .word 0x8f84851c
    beqz a0,L19d564
    paddub s3,v0,zero
    jal func_00121b70
    nop
    addiu v1,v0,1
    .word 0x8f82851c
    addu v0,v0,v1
    b L19d570
    .word 0xaf82851c
L19d564:
    .word 0x3c020031
    addiu v0,v0,26880
    .word 0xaf82851c
L19d570:
    .word 0x8f84851c
    addiu a2,zero,1
    addiu a3,zero,2
    jal func_001214b8
    paddub a1,s3,zero
    .word 0x8f82851c
    b L19d660
    .word 0xafa20074
L19d590:
    c.le.s $f1,$f2
    nop
    bc1t L19d640
    nop
    .word 0x44800000
    nop
    c.eq.s $f0,$f2
    nop
    bc1f L19d5c0
    .word 0x8f848328
    b L19d5c4
    addiu a1,zero,312
L19d5c0:
    addiu a1,zero,311
L19d5c4:
    jal func_0013b550
    nop
    .word 0x8f84851c
    beqz a0,L19d5f4
    paddub s3,v0,zero
    jal func_00121b70
    nop
    addiu v1,v0,1
    .word 0x8f82851c
    addu v0,v0,v1
    b L19d600
    .word 0xaf82851c
L19d5f4:
    .word 0x3c020031
    addiu v0,v0,26880
    .word 0xaf82851c
L19d600:
    .word 0x8f84851c
    addiu a2,zero,2
    addiu a3,zero,1
    jal func_001214b8
    paddub a1,s3,zero
    .word 0x8f85851c
    addiu a0,zero,5
    addiu v1,zero,4
    addiu v0,zero,7
    .word 0xafa50074
    .word 0xafa40088
    .word 0xafa300a4
    .word 0xafa200c0
    addiu v0,zero,6
    b L19d660
    .word 0xafa200dc
L19d640:
    .word 0x8f848328
    jal func_0013b550
    addiu a1,zero,315
    .word 0xafa20074
    addiu v0,zero,4
    .word 0xafa200a4
    addiu v0,zero,6
    .word 0xafa200dc
L19d660:
    .word 0x8f848328
    jal func_0013b550
    addiu a1,zero,304
    .word 0x8f84851c
    beqz a0,L19d694
    paddub s3,v0,zero
    jal func_00121b70
    nop
    addiu v1,v0,1
    .word 0x8f82851c
    addu v0,v0,v1
    b L19d6a0
    .word 0xaf82851c
L19d694:
    .word 0x3c020031
    addiu v0,v0,26880
    .word 0xaf82851c
L19d6a0:
    .word 0x8f84851c
    addiu a2,zero,1
    paddub a1,s3,zero
    jal func_001214b8
    .word 0x70003e28
    .word 0x8f83851c
    .word 0x8f848328
    addiu v0,sp,312
    addiu a1,zero,304
    .word 0xafa30090
    jal func_0013b550
    .word 0xafa20094
    .word 0x8f84851c
    beqz a0,L19d6f8
    paddub s3,v0,zero
    jal func_00121b70
    nop
    addiu v1,v0,1
    .word 0x8f82851c
    addu v0,v0,v1
    b L19d704
    .word 0xaf82851c
L19d6f8:
    .word 0x3c020031
    addiu v0,v0,26880
    .word 0xaf82851c
L19d704:
    .word 0x8f84851c
    addiu a2,zero,2
    paddub a1,s3,zero
    jal func_001214b8
    .word 0x70003e28
    .word 0x8f83851c
    .word 0x8f848328
    .word 0x8f9488a0
    addiu v0,sp,316
    addiu a1,zero,317
    .word 0xafa300ac
    jal func_0013b550
    .word 0xafa200b0
    .word 0x8f84851c
    beqz a0,L19d760
    paddub s3,v0,zero
    jal func_00121b70
    nop
    addiu v1,v0,1
    .word 0x8f82851c
    addu v0,v0,v1
    b L19d76c
    .word 0xaf82851c
L19d760:
    .word 0x3c020031
    addiu v0,v0,26880
    .word 0xaf82851c
L19d76c:
    .word 0x8f84851c
    paddub a1,s3,zero
    paddub a2,s4,zero
    jal func_001214b8
    .word 0x70003e28
    .word 0x8f82851c
    .word 0x8f848328
    .word 0x8f9488a4
    addiu a1,zero,317
    jal func_0013b550
    .word 0xafa200c8
    .word 0x8f84851c
    beqz a0,L19d7c0
    paddub s3,v0,zero
    jal func_00121b70
    nop
    addiu v1,v0,1
    .word 0x8f82851c
    addu v0,v0,v1
    b L19d7cc
    .word 0xaf82851c
L19d7c0:
    .word 0x3c020031
    addiu v0,v0,26880
    .word 0xaf82851c
L19d7cc:
    .word 0x8f84851c
    paddub a1,s3,zero
    paddub a2,s4,zero
    jal func_001214b8
    .word 0x70003e28
    .word 0x8f84851c
    .word 0xdf8584d8
    addiu a2,sp,304
    addiu v1,zero,7
    .word 0xafa400e4
    .word 0xfcc50000
    addiu v0,sp,96
    .word 0xafa30130
    addiu a0,zero,10
    .word 0xafa20134
    jal func_0024b540
    .word 0x70002e28
L19d810:
    paddub a0,s2,zero
L19d814:
    paddub a1,s1,zero
    jal func_001a3ac0
    paddub a2,s0,zero
L19d820:
    .word 0x7bbf0050
    .word 0x7bb40040
    .word 0x7bb30030
    .word 0x7bb20020
    .word 0x7bb10010
    .word 0x7bb00000
    jr ra
    addiu sp,sp,320
}


