extern void func_0013b550(void);
extern void func_00195a30(void);
extern void func_001b6240(void);
extern void func_00121b70(void);
extern void func_001214b8(void);
extern void func_0024b540(void);
extern void func_001a3ac0(void);
asm void func(void) {
    .set noreorder
    addiu sp,sp,-240
    .word 0x7fbf0040
    .word 0x7fb30030
    .word 0x7fb20020
    .word 0x7fb10010
    .word 0x7fb00000
    addiu v0,zero,3
    paddub s1,a1,zero
    paddub s2,a0,zero
    beq s1,v0,L19d8f4
    paddub s0,a2,zero
    addiu v0,zero,9
    beq s1,v0,L19d8dc
    nop
    beqz s1,L19d888
    nop
    b L19db90
    paddub a0,s2,zero
L19d888:
    .word 0x8f848328
    jal func_0013b550
    .word 0x70002e28
    .word 0xae420008
    .word 0x3c020031
    addiu v0,v0,24224
    .word 0xae40000c
    .word 0xae420014
    addiu v0,zero,1
    .word 0xae420010
    .word 0x3c020031
    .word 0xae400018
    addiu a0,v0,24224
    addiu a1,zero,9
    addiu a2,zero,39
    jal func_00195a30
    .word 0xae400004
    .word 0x8e420004
    ori v0,v0,0xa
    b L19db8c
    .word 0xae420004
L19d8dc:
    jal func_001b6240
    nop
    bnez v0,L19db8c
    nop
    b L19db9c
    addiu v0,zero,1
L19d8f4:
    .word 0x3c02002e
    addiu a2,v0,10432
    addiu a1,sp,80
    addiu a0,zero,4
L19d904:
    .word 0x78c30000
    .word 0x78c20010
    addiu a0,a0,-1
    .word 0x7ca30000
    .word 0x7ca20010
    addiu a2,a2,32
    bgtz a0,L19d904
    addiu a1,a1,32
    .word 0xdcc30000
    .word 0xc4c20008
    .word 0x3c010030
    .word 0xfca30000
    .word 0xe4a20008
    .word 0xc42170d0
    .word 0x3c010030
    .word 0xc4207680
    .word 0xe7a100e8
    .word 0xc7a200e8
    .word 0xe7a000ec
    .word 0xc7a100ec
    c.le.s $f2,$f1
    nop
    bc1t L19d9e4
    .word 0xaf80851c
    .word 0x44800000
    nop
    c.eq.s $f0,$f1
    nop
    bc1f L19d988
    addiu a1,zero,311
    b L19d988
    addiu a1,zero,312
    addiu a1,zero,311
L19d988:
    jal func_0013b550
    .word 0x8f848328
    .word 0x8f84851c
    beqz a0,L19d9b8
    paddub s3,v0,zero
    jal func_00121b70
    nop
    addiu v1,v0,1
    .word 0x8f82851c
    addu v0,v0,v1
    b L19d9c4
    .word 0xaf82851c
L19d9b8:
    .word 0x3c020031
    addiu v0,v0,26880
    .word 0xaf82851c
L19d9c4:
    .word 0x8f84851c
    addiu a2,zero,1
    addiu a3,zero,2
    jal func_001214b8
    paddub a1,s3,zero
    .word 0x8f82851c
    b L19da9c
    .word 0xafa20064
L19d9e4:
    c.le.s $f1,$f2
    nop
    bc1t L19da84
    nop
    .word 0x44800000
    nop
    c.eq.s $f0,$f2
    nop
    bc1f L19da18
    addiu a1,zero,311
    b L19da18
    addiu a1,zero,312
    addiu a1,zero,311
L19da18:
    jal func_0013b550
    .word 0x8f848328
    .word 0x8f84851c
    beqz a0,L19da48
    paddub s3,v0,zero
    jal func_00121b70
    nop
    addiu v1,v0,1
    .word 0x8f82851c
    addu v0,v0,v1
    b L19da54
    .word 0xaf82851c
L19da48:
    .word 0x3c020031
    addiu v0,v0,26880
    .word 0xaf82851c
L19da54:
    .word 0x8f84851c
    addiu a2,zero,2
    addiu a3,zero,1
    jal func_001214b8
    paddub a1,s3,zero
    .word 0x8f84851c
    addiu v1,zero,5
    addiu v0,zero,4
    .word 0xafa40064
    .word 0xafa30078
    b L19da9c
    .word 0xafa20094
L19da84:
    .word 0x8f848328
    jal func_0013b550
    addiu a1,zero,315
    .word 0xafa20064
    addiu v0,zero,4
    .word 0xafa20094
L19da9c:
    .word 0x8f848328
    jal func_0013b550
    addiu a1,zero,304
    .word 0x8f84851c
    beqz a0,L19dad0
    paddub s3,v0,zero
    jal func_00121b70
    nop
    addiu v1,v0,1
    .word 0x8f82851c
    addu v0,v0,v1
    b L19dadc
    .word 0xaf82851c
L19dad0:
    .word 0x3c020031
    addiu v0,v0,26880
    .word 0xaf82851c
L19dadc:
    .word 0x8f84851c
    addiu a2,zero,1
    paddub a1,s3,zero
    jal func_001214b8
    .word 0x70003e28
    .word 0x8f83851c
    .word 0x8f848328
    addiu v0,sp,232
    addiu a1,zero,304
    .word 0xafa30080
    jal func_0013b550
    .word 0xafa20084
    .word 0x8f84851c
    beqz a0,L19db34
    paddub s3,v0,zero
    jal func_00121b70
    nop
    addiu v1,v0,1
    .word 0x8f82851c
    addu v0,v0,v1
    b L19db40
    .word 0xaf82851c
L19db34:
    .word 0x3c020031
    addiu v0,v0,26880
    .word 0xaf82851c
L19db40:
    .word 0x8f84851c
    addiu a2,zero,2
    paddub a1,s3,zero
    jal func_001214b8
    .word 0x70003e28
    .word 0x8f85851c
    .word 0xdf8484d8
    addiu v0,sp,236
    addiu a2,sp,224
    .word 0xafa5009c
    .word 0xafa200a0
    .word 0xfcc40000
    addiu v1,zero,5
    addiu v0,sp,80
    .word 0xafa300e0
    addiu a0,zero,10
    .word 0xafa200e4
    jal func_0024b540
    .word 0x70002e28
L19db8c:
    paddub a0,s2,zero
L19db90:
    paddub a1,s1,zero
    jal func_001a3ac0
    paddub a2,s0,zero
L19db9c:
    .word 0x7bbf0040
    .word 0x7bb30030
    .word 0x7bb20020
    .word 0x7bb10010
    .word 0x7bb00000
    jr ra
    addiu sp,sp,240
}


