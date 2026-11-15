extern void fn_1c3b70(void);
extern void fn_17f6b0(void);
extern void fn_17f740(void);
extern void fn_14b0d0(void);
extern void fn_14ae40(void);
extern void fn_149e60(void);
extern void fn_1c73c0(void);
asm void func(void) {
    .set noreorder
    addiu sp,sp,-96
    .word 0x7fbf0050
    .word 0x7fb40040
    .word 0x7fb30030
    .word 0x7fb20020
    .word 0x7fb10010
    .word 0x7fb00000
    .word 0x8c90000c
    .word 0x8e110024
    .word 0x8e22000c
    bnez v0,L1abde8
    .word 0x7080a628
    b L1ac3e8
    .word 0x70001628
L1abde8:
    jal fn_1c3b70
    .word 0x8e040048
    lwc1 $f6,16(s1)
    lwc1 $f2,16(v0)
    lwc1 $f5,20(s1)
    lwc1 $f1,20(v0)
    lwc1 $f0,24(v0)
    .word 0x70409628
    lwc1 $f7,24(s1)
    mul.s $f2,$f2,$f6
    .word 0x3c02beb3
    ori v0,v0,0x3333
    mul.s $f1,$f1,$f5
    adda.s $f2,$f1
    madd.s $f1,$f0,$f7
    .word 0x44820000
    nop
    c.lt.s $f1,$f0
    nop
    bc1t L1abe60
    .word 0x70001628
    .word 0x3c023eb3
    ori v0,v0,0x3333
    .word 0x44820000
    nop
    c.le.s $f1,$f0
    nop
    bc1t L1abe68
    nop
    .word 0x70001628
L1abe60:
    b L1ac3ec
    .word 0x7bbf0050
L1abe68:
    lwc1 $f2,32(s2)
    lwc1 $f1,36(s2)
    lwc1 $f0,40(s2)
    .word 0x44801800
    nop
    mul.s $f2,$f2,$f6
    mul.s $f1,$f1,$f5
    adda.s $f2,$f1
    madd.s $f0,$f0,$f7
    c.le.s $f0,$f3
    nop
    bc1t L1abea8
    .word 0x3c023e99
    b L1ac3e8
    .word 0x70001628
    .word 0x3c023e99
L1abea8:
    ori v0,v0,0x999a
    .word 0x44820800
    nop
    c.le.s $f5,$f1
    nop
    bc1f L1abee8
    .word 0x70001628
    .word 0x3c02be99
    ori v0,v0,0x999a
    .word 0x44820800
    nop
    c.lt.s $f5,$f1
    nop
    bc1f L1abef0
    nop
    .word 0x70001628
L1abee8:
    b L1ac3e8
    nop
L1abef0:
    lwc1 $f1,92(s4)
    c.eq.s $f3,$f1
    nop
    bc1t L1abf18
    nop
    .word 0x8e830008
    addiu v0,zero,128
    .word 0x8c63003c
    bne v1,v0,L1abf2c
    nop
L1abf18:
    .word 0x8e930008
    addiu v0,zero,2048
    .word 0x8e63003c
    bne v1,v0,L1ac02c
    .word 0x3c027000
L1abf2c:
    .word 0x8e920008
    .word 0x3c050004
    .word 0x8e42003c
    beq v0,a1,L1abf80
    nop
    .word 0x8e420010
    andi v0,v0,0x2
    bnez v0,L1abf80
    nop
    .word 0x8e42000c
    .word 0x8c420010
    jalr ra,v0
    .word 0x72402628
    beqz v0,L1abf80
    nop
    .word 0x8e42000c
    .word 0x72402628
    .word 0x3c050004
    .word 0x8c420014
    jalr ra,v0
    .word 0x70003628
L1abf80:
    lwc1 $f0,16(s1)
    .word 0x3c023fb1
    ori v0,v0,0xc71d
    .word 0x44822000
    lwc1 $f3,20(s1)
    lwc1 $f1,12(s0)
    mul.s $f0,$f4,$f0
    lwc1 $f2,24(s1)
    .word 0x3c02bf00
    .word 0x3c010032
    add.s $f0,$f1,$f0
    .word 0x70008e28
    swc1 $f0,12(s0)
    lwc1 $f0,16(s0)
    mul.s $f3,$f4,$f3
    add.s $f0,$f0,$f3
    swc1 $f0,16(s0)
    lwc1 $f0,20(s0)
    mul.s $f2,$f4,$f2
    add.s $f0,$f0,$f2
    swc1 $f0,20(s0)
    .word 0xac2279b4
    .word 0x3c010032
    .word 0xac2079b8
    .word 0x3c010032
    .word 0xac2279bc
L1abfe8:
    .word 0x8e84000c
    addiu a2,zero,2
    addiu a3,zero,1
    jal fn_17f6b0
    .word 0x72202e28
    .word 0x8e84000c
    .word 0x3c020032
    addiu a2,v0,31136
    jal fn_17f740
    .word 0x72202e28
    addiu s1,s1,1
    slti v0,s1,4
    bnez v0,L1abfe8
    nop
    b L1ac3e8
    .word 0x70001628
    .word 0x3c027000
L1ac02c:
    ori v0,v0,0x3fb0
    lwc1 $f1,64(s4)
    lwc1 $f2,0(v0)
    c.le.s $f1,$f2
    nop
    bc1t L1ac0fc
    .word 0x3c02bf7c
    lwc1 $f2,68(s4)
    .word 0x44800800
    nop
    c.eq.s $f1,$f2
    nop
    bc1f L1ac0a8
    .word 0x3c02bf80
    lwc1 $f4,16(s1)
    lwc1 $f3,20(s1)
    lwc1 $f2,24(s1)
    .word 0x3c02be31
    ori v0,v0,0xc433
    .word 0x44820800
    nop
    c.lt.s $f0,$f1
    swc1 $f4,0(s2)
    swc1 $f3,4(s2)
    bc1f L1ac26c
    swc1 $f2,8(s2)
    jal fn_14b0d0
    .word 0x8e840008
    b L1ac270
    lwc1 $f3,4(s2)
    .word 0x3c02bf80
L1ac0a8:
    .word 0x44821800
    nop
    mul.s $f1,$f3,$f6
    .word 0x3c02be31
    ori v0,v0,0xc433
    swc1 $f1,0(s2)
    lwc1 $f2,20(s1)
    .word 0x44820800
    nop
    c.lt.s $f0,$f1
    mul.s $f0,$f3,$f2
    swc1 $f0,4(s2)
    lwc1 $f0,24(s1)
    mul.s $f0,$f3,$f0
    bc1f L1ac26c
    swc1 $f0,8(s2)
    jal fn_14ae40
    .word 0x8e840008
    b L1ac26c
    nop
    .word 0x3c02bf7c
L1ac0fc:
    ori v0,v0,0x1bda
    .word 0x44820800
    nop
    c.lt.s $f0,$f1
    nop
    bc1f L1ac1a8
    nop
    lwc1 $f1,316(s4)
    c.le.s $f2,$f1
    nop
    bc1t L1ac1a8
    nop
    jal fn_149e60
    nop
    .word 0x8c43002c
    addiu a2,zero,3
    .word 0x72602628
    .word 0x8e62051c
    sltu v0,zero,v0
    jalr ra,v1
    xori a1,v0,0x1
    .word 0x3c017000
    lwc1 $f2,16304(at)
    .word 0x3c023f80
    .word 0x44820800
    .word 0x3c044407
    .word 0x3c024000
    .word 0x44820000
    nop
    add.s $f1,$f1,$f2
    .word 0x3c017000
    addiu v0,zero,1
    swc1 $f1,308(s4)
    lwc1 $f1,16304(at)
    add.s $f0,$f0,$f1
    swc1 $f0,316(s4)
    .word 0x8e850014
    .word 0x8ca30010
    ori v1,v1,0x20
    .word 0xaca30010
    .word 0x8e830014
    b L1ac3e8
    .word 0xac6400e4
L1ac1a8:
    lwc1 $f4,0(s2)
    lwc1 $f3,4(s2)
    lwc1 $f2,8(s2)
    .word 0x44800800
    mul.s $f4,$f4,$f6
    mul.s $f3,$f3,$f5
    adda.s $f4,$f3
    madd.s $f2,$f2,$f7
    c.le.s $f2,$f1
    nop
    bc1t L1ac220
    .word 0x3c02bf80
    lwc1 $f4,16(s1)
    lwc1 $f3,20(s1)
    lwc1 $f2,24(s1)
    .word 0x3c02be31
    ori v0,v0,0xc433
    .word 0x44820800
    nop
    c.lt.s $f0,$f1
    swc1 $f4,0(s2)
    swc1 $f3,4(s2)
    swc1 $f2,8(s2)
    bc1f L1ac26c
    .word 0xae800044
    jal fn_14b0d0
    .word 0x8e840008
    b L1ac26c
    nop
    .word 0x3c02bf80
L1ac220:
    .word 0x44821800
    .word 0x3c033f80
    mul.s $f1,$f3,$f6
    .word 0x3c02be31
    ori v0,v0,0xc433
    swc1 $f1,0(s2)
    lwc1 $f2,20(s1)
    .word 0x44820800
    nop
    c.lt.s $f0,$f1
    mul.s $f0,$f3,$f2
    swc1 $f0,4(s2)
    lwc1 $f0,24(s1)
    mul.s $f0,$f3,$f0
    swc1 $f0,8(s2)
    bc1f L1ac26c
    .word 0xae830044
    jal fn_14ae40
    .word 0x8e840008
L1ac26c:
    lwc1 $f3,4(s2)
L1ac270:
    lwc1 $f2,24(s2)
    lwc1 $f1,8(s2)
    lwc1 $f0,20(s2)
    .word 0x72402628
    .word 0x72402e28
    mula.s $f3,$f2
    msub.s $f0,$f1,$f0
    swc1 $f0,32(s2)
    lwc1 $f3,8(s2)
    lwc1 $f2,16(s2)
    lwc1 $f1,0(s2)
    lwc1 $f0,24(s2)
    mula.s $f3,$f2
    msub.s $f0,$f1,$f0
    swc1 $f0,36(s2)
    lwc1 $f3,0(s2)
    lwc1 $f2,20(s2)
    lwc1 $f1,4(s2)
    lwc1 $f0,16(s2)
    mula.s $f3,$f2
    msub.s $f0,$f1,$f0
    swc1 $f0,40(s2)
    lwc1 $f3,36(s2)
    lwc1 $f2,8(s2)
    lwc1 $f1,40(s2)
    lwc1 $f0,4(s2)
    mula.s $f3,$f2
    msub.s $f0,$f1,$f0
    swc1 $f0,16(s2)
    lwc1 $f3,40(s2)
    lwc1 $f2,0(s2)
    lwc1 $f1,32(s2)
    lwc1 $f0,8(s2)
    mula.s $f3,$f2
    msub.s $f0,$f1,$f0
    swc1 $f0,20(s2)
    lwc1 $f3,32(s2)
    lwc1 $f2,4(s2)
    lwc1 $f1,36(s2)
    lwc1 $f0,0(s2)
    mula.s $f3,$f2
    msub.s $f0,$f1,$f0
    jal fn_1c73c0
    swc1 $f0,24(s2)
    lwc1 $f8,64(s0)
    lwc1 $f3,40(s2)
    lwc1 $f6,68(s0)
    lwc1 $f9,36(s2)
    lwc1 $f7,32(s2)
    lwc1 $f10,60(s0)
    lwc1 $f1,16(s1)
    mula.s $f8,$f3
    lwc1 $f2,24(s1)
    msub.s $f4,$f6,$f9
    mula.s $f6,$f7
    msub.s $f5,$f10,$f3
    mula.s $f10,$f9
    msub.s $f3,$f8,$f7
    mula.s $f4,$f1
    lwc1 $f0,20(s1)
    mul.s $f1,$f3,$f2
    madd.s $f0,$f5,$f0
    add.s $f1,$f1,$f0
    .word 0x44800000
    nop
    c.lt.s $f1,$f0
    nop
    bc1f L1ac3d0
    .word 0x3c017000
    lwc1 $f2,16(s2)
    lwc1 $f4,20(s2)
    lwc1 $f5,24(s2)
    mul.s $f0,$f10,$f2
    mul.s $f1,$f8,$f4
    adda.s $f0,$f1
    madd.s $f3,$f6,$f5
    mul.s $f0,$f2,$f3
    sub.s $f0,$f10,$f0
    swc1 $f0,60(s0)
    lwc1 $f2,64(s0)
    mul.s $f1,$f4,$f3
    sub.s $f1,$f2,$f1
    swc1 $f1,64(s0)
    lwc1 $f1,68(s0)
    mul.s $f0,$f5,$f3
    sub.s $f0,$f1,$f0
    swc1 $f0,68(s0)
    .word 0x3c017000
L1ac3d0:
    lwc1 $f1,16304(at)
    .word 0x3c023f00
    .word 0x44820000
    addiu v0,zero,1
    add.s $f0,$f0,$f1
    swc1 $f0,64(s4)
L1ac3e8:
    .word 0x7bbf0050
L1ac3ec:
    .word 0x7bb40040
    .word 0x7bb30030
    .word 0x7bb20020
    .word 0x7bb10010
    .word 0x7bb00000
    jr ra
    addiu sp,sp,96
}
