extern void fn_1c3b70(void);
extern void fn_1ce160(void);
extern void fn_149e60(void);
extern void fn_17f6b0(void);
asm void func(void) {
    .set noreorder
    addiu sp,sp,-80
    .word 0x7fbf0040
    .word 0x7fb30030
    .word 0x7fb20020
    .word 0x7fb10010
    .word 0x7fb00000
    .word 0x8c91000c
    .word 0x70809e28
    jal fn_1c3b70
    .word 0x8e240048
    .word 0x3c010032
    lwc1 $f2,31664(at)
    .word 0x70409628
    .word 0x70002628
    .word 0x70001e28
    .word 0x70002e28
    .word 0x70003628
    b L1ad0b8
    .word 0x70003e28
L1ad02c:
    .word 0x8e6a0008
    .word 0x3c010001
    addu t1,t2,a1
    addu at,t1,at
    .word 0x8c28ea94
    andi v0,t0,0x2
    bnez v0,L1ad05c
    .word 0x3c010001
    andi v0,t0,0x200
    beqzl v0,L1ad0ac
    addiu a1,a1,4
    .word 0x3c010001
L1ad05c:
    addu at,t1,at
    .word 0x8c22ea74
    beqz v0,L1ad0a8
    nop
    .word 0x8e22004c
    .word 0x3c010001
    addu at,t1,at
    lwc1 $f0,-5532(at)
    addu v0,v0,a2
    lwc1 $f1,28(v0)
    sub.s $f1,$f2,$f1
    c.lt.s $f0,$f1
    nop
    bc1f L1ad0a8
    nop
    addu v0,t2,a3
    ori at,zero,0xea34
    addu s0,v0,at
    addiu a0,zero,1
L1ad0a8:
    addiu a1,a1,4
L1ad0ac:
    addiu a2,a2,64
    addiu a3,a3,12
    addiu v1,v1,1
L1ad0b8:
    slti at,v1,4
    beqz at,L1ad0d0
    nop
    beqz a0,L1ad02c
    nop
    nop
L1ad0d0:
    bnez a0,L1ad130
    nop
    .word 0x8e630004
    andi v0,v1,0x100
    beqz v0,L1ad120
    addiu v0,zero,-2049
    addiu v0,zero,-257
    and v0,v1,v0
    .word 0xae620004
    .word 0x8e620004
    ori v0,v0,0x800
    .word 0xae620004
    .word 0xae200038
    .word 0xae200034
    .word 0xae200030
    .word 0xae200044
    .word 0xae200040
    b L1ad128
    .word 0xae20003c
    addiu v0,zero,-2049
L1ad120:
    and v0,v1,v0
    .word 0xae620004
L1ad128:
    b L1ad4a8
    .word 0x70001628
L1ad130:
    .word 0x8e630004
    andi v0,v1,0x100
    bnez v0,L1ad1c8
    nop
    ori v0,v1,0x100
    .word 0xae620004
    .word 0x8e650004
    addiu v1,zero,-129
    addiu v0,zero,-1025
    addiu a0,s3,584
    and v1,a1,v1
    .word 0xae630004
    .word 0x8e630004
    .word 0x70802e28
    and v0,v1,v0
    .word 0xae620004
    lwc1 $f3,4(s0)
    lwc1 $f2,8(s2)
    lwc1 $f1,8(s0)
    lwc1 $f0,4(s2)
    mula.s $f3,$f2
    msub.s $f0,$f1,$f0
    swc1 $f0,584(s3)
    lwc1 $f3,8(s0)
    lwc1 $f2,0(s2)
    lwc1 $f1,0(s0)
    lwc1 $f0,8(s2)
    mula.s $f3,$f2
    msub.s $f0,$f1,$f0
    swc1 $f0,588(s3)
    lwc1 $f3,0(s0)
    lwc1 $f2,4(s2)
    lwc1 $f1,4(s0)
    lwc1 $f0,0(s2)
    mula.s $f3,$f2
    msub.s $f0,$f1,$f0
    jal fn_1ce160
    swc1 $f0,592(s3)
L1ad1c8:
    .word 0x8e640008
    ori v0,zero,0xeaa4
    ori v1,zero,0xeaa8
    lwc1 $f2,16(s1)
    lwc1 $f6,12(s1)
    ori a1,zero,0xeaac
    addu v0,a0,v0
    lwc1 $f0,20(s1)
    lwc1 $f3,0(v0)
    addu v1,a0,v1
    lwc1 $f4,0(v1)
    .word 0x3c010001
    addu v0,a0,a1
    mul.s $f1,$f3,$f6
    lwc1 $f5,0(v0)
    mul.s $f2,$f4,$f2
    .word 0x3c02bf7d
    ori v0,v0,0x70a4
    adda.s $f1,$f2
    madd.s $f2,$f5,$f0
    mul.s $f0,$f3,$f2
    sub.s $f0,$f6,$f0
    swc1 $f0,12(s1)
    mul.s $f1,$f4,$f2
    lwc1 $f0,16(s1)
    mul.s $f2,$f5,$f2
    sub.s $f0,$f0,$f1
    swc1 $f0,16(s1)
    lwc1 $f1,20(s1)
    .word 0x44820000
    nop
    sub.s $f1,$f1,$f2
    swc1 $f1,20(s1)
    .word 0x8e620008
    lwc1 $f7,0(s1)
    lwc1 $f2,4(s1)
    lwc1 $f1,8(s1)
    addu at,v0,at
    lwc1 $f4,-5464(at)
    .word 0x3c010001
    addu at,v0,at
    mul.s $f2,$f4,$f2
    lwc1 $f6,-5468(at)
    .word 0x3c010001
    addu at,v0,at
    mul.s $f3,$f6,$f7
    lwc1 $f5,-5460(at)
    adda.s $f3,$f2
    madd.s $f2,$f5,$f1
    mul.s $f1,$f6,$f2
    sub.s $f1,$f7,$f1
    swc1 $f1,0(s1)
    mul.s $f3,$f4,$f2
    mul.s $f1,$f5,$f2
    lwc1 $f2,4(s1)
    sub.s $f2,$f2,$f3
    swc1 $f2,4(s1)
    lwc1 $f2,8(s1)
    sub.s $f1,$f2,$f1
    swc1 $f1,8(s1)
    lwc1 $f1,588(s3)
    c.le.s $f1,$f0
    nop
    bc1t L1ad3f4
    nop
    .word 0x8e620004
    andi v0,v0,0x400
    bnez v0,L1ad470
    nop
    lwc1 $f2,12(s1)
    lwc1 $f1,16(s1)
    lwc1 $f3,20(s1)
    .word 0x44800000
    mul.s $f2,$f2,$f2
    mul.s $f1,$f1,$f1
    adda.s $f2,$f1
    madd.s $f1,$f3,$f3
    c.eq.s $f1,$f0
    nop
    bc1t L1ad470
    nop
    .word 0x8e620008
    ori at,zero,0xeaa4
    addiu a0,s2,32
    addiu a1,s1,12
    addu v0,v0,at
    lwc1 $f2,0(v0)
    lwc1 $f1,4(v0)
    lwc1 $f0,8(v0)
    swc1 $f2,16(s2)
    swc1 $f1,20(s2)
    jal fn_1ce160
    swc1 $f0,24(s2)
    lwc1 $f3,20(s2)
    lwc1 $f2,40(s2)
    lwc1 $f1,24(s2)
    lwc1 $f0,36(s2)
    .word 0x72402628
    .word 0x72402e28
    mula.s $f3,$f2
    msub.s $f0,$f1,$f0
    swc1 $f0,0(s2)
    lwc1 $f3,24(s2)
    lwc1 $f2,32(s2)
    lwc1 $f1,16(s2)
    lwc1 $f0,40(s2)
    mula.s $f3,$f2
    msub.s $f0,$f1,$f0
    swc1 $f0,4(s2)
    lwc1 $f3,16(s2)
    lwc1 $f2,36(s2)
    lwc1 $f1,20(s2)
    lwc1 $f0,32(s2)
    mula.s $f3,$f2
    msub.s $f0,$f1,$f0
    jal fn_1ce160
    swc1 $f0,8(s2)
    lwc1 $f3,4(s2)
    lwc1 $f2,24(s2)
    lwc1 $f1,8(s2)
    lwc1 $f0,20(s2)
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
    b L1ad470
    swc1 $f0,40(s2)
L1ad3f4:
    .word 0x8e630004
    andi v0,v1,0x400
    bnez v0,L1ad470
    nop
    lwc1 $f1,16(s1)
    .word 0x44800000
    nop
    c.lt.s $f1,$f0
    nop
    bc1f L1ad470
    nop
    andi v0,v1,0x80
    bnez v0,L1ad470
    nop
    .word 0x8e700008
    .word 0x8e02003c
    andi v0,v0,0x880
    bnez v0,L1ad470
    nop
    jal fn_149e60
    nop
    .word 0x8c43002c
    addiu a2,zero,1
    .word 0x72002628
    .word 0x8e02051c
    sltu v0,zero,v0
    jalr ra,v1
    xori a1,v0,0x1
    .word 0x8e620004
    ori v0,v0,0x80
    .word 0xae620004
L1ad470:
    .word 0xae200038
    .word 0xae200034
    .word 0xae200030
    .word 0xae200044
    .word 0xae200040
    .word 0xae20003c
    .word 0xae600274
    .word 0xae600270
    .word 0x8e64000c
    addiu a1,zero,4
    addiu a2,zero,2
    jal fn_17f6b0
    .word 0x70003e28
    addiu v0,zero,1
L1ad4a8:
    .word 0x7bbf0040
    .word 0x7bb30030
    .word 0x7bb20020
    .word 0x7bb10010
    .word 0x7bb00000
    jr ra
    addiu sp,sp,80
}
