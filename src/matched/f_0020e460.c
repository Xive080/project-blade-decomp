extern void f256438(void);
asm void f(void) {
    .set noreorder
    addiu sp,sp,-176
    sq ra,96(sp)
    sq s4,80(sp)
    sq s3,64(sp)
    sq s2,48(sp)
    sq s1,32(sp)
    sq s0,16(sp)
    .word 0xe7b40000
    paddub s3,a0,zero
    paddub s2,a1,zero
    paddub s1,a2,zero
    b L20e808
    paddub s0,a3,zero
L20e494:
    lhu a1,0(s2)
    lhu a0,2(s2)
    lhu v1,4(s2)
    .word 0x44800000
    sll v0,a1,0x1
    addu v0,v0,a1
    sll v0,v0,0x2
    addu a1,s0,v0
    sll v0,a0,0x1
    addu v0,v0,a0
    sll v0,v0,0x2
    addu a0,s0,v0
    .word 0xc4a20000
    .word 0xc4810000
    sll v0,v1,0x1
    addu v0,v0,v1
    sll v0,v0,0x2
    addu v0,s0,v0
    sub.s $f1,$f2,$f1
    .word 0xe7a10070
    .word 0xc4a20004
    .word 0xc4810004
    sub.s $f1,$f2,$f1
    .word 0xe7a10074
    .word 0xc4a20008
    .word 0xc4810008
    sub.s $f1,$f2,$f1
    .word 0xe7a10078
    .word 0xc4430000
    .word 0xc4820000
    .word 0xc7a70074
    .word 0xc7a50078
    .word 0xc7a10070
    sub.s $f2,$f3,$f2
    .word 0xe7a20080
    .word 0xc4430004
    .word 0xc4820004
    sub.s $f2,$f3,$f2
    .word 0xe7a20084
    .word 0xc4430008
    .word 0xc4820008
    sub.s $f2,$f3,$f2
    .word 0xe7a20088
    mov.s $f6,$f2
    .word 0xc7a40084
    mula.s $f7,$f6
    .word 0xc7a30080
    msub.s $f2,$f5,$f4
    .word 0xe7a20090
    mula.s $f5,$f3
    msub.s $f2,$f1,$f6
    mula.s $f1,$f4
    msub.s $f1,$f7,$f3
    .word 0xe7a20094
    .word 0xe7a10098
    .word 0xc7a30090
    .word 0xc7a20094
    .word 0xc7a10098
    mul.s $f3,$f3,$f3
    mul.s $f2,$f2,$f2
    adda.s $f3,$f2
    madd.s $f1,$f1,$f1
    c.eq.s $f0,$f1
    nop
    bc1t L20e63c
    nop
    nop
    nop
    .word 0x46010084
    nop
    nop
    c.le.s $f2,$f0
    nop
    bc1t L20e5dc
    .word 0x3c023f80
    .word 0x44820000
    nop
    div.s $f2,$f0,$f2
    nop
    nop
    b L20e5e0
    nop
L20e5dc:
    nop
L20e5e0:
    .word 0x3c02437f
    .word 0x44820800
    .word 0xc7a00090
    mul.s $f2,$f2,$f1
    mul.s $f0,$f0,$f2
    .word 0xe7a00090
    .word 0xc7a00094
    mul.s $f0,$f0,$f2
    .word 0xe7a00094
    .word 0xc7a00098
    mul.s $f0,$f0,$f2
    .word 0xe7a00098
    .word 0xc4a50000
    .word 0xc7a40090
    .word 0xc4a30004
    .word 0xc7a20094
    .word 0xc4a10008
    .word 0xc7a00098
    mul.s $f4,$f5,$f4
    mul.s $f2,$f3,$f2
    adda.s $f4,$f2
    b L20e650
    madd.s $f20,$f1,$f0
L20e63c:
    sw zero,144(sp)
    .word 0x3c02bf80
    sw zero,148(sp)
    .word 0x4482a000
    sw zero,152(sp)
L20e650:
    .word 0xc7a10090
    .word 0x44800000
    nop
    c.lt.s $f1,$f0
    nop
    bc1f L20e674
    neg.s $f0,$f1
    b L20e684
    .word 0xe7a000a0
L20e674:
    .word 0xc7a00090
    nop
    nop
    .word 0xe7a000a0
L20e684:
    .word 0xc7a200a0
    .word 0x3c023f00
    .word 0xc7a10094
    .word 0x44821800
    .word 0x44800000
    add.s $f2,$f3,$f2
    c.lt.s $f1,$f0
    .word 0x46001024
    cvt.s.w $f0,$f0
    bc1f L20e6b8
    .word 0xe7a000a0
    b L20e6c0
    neg.s $f0,$f1
L20e6b8:
    .word 0xc7a00094
    nop
L20e6c0:
    .word 0xe7a000a4
    .word 0xc7a200a4
    .word 0x3c023f00
    .word 0xc7a10098
    .word 0x44821800
    .word 0x44800000
    add.s $f2,$f3,$f2
    c.lt.s $f1,$f0
    .word 0x46001024
    cvt.s.w $f0,$f0
    bc1f L20e6f8
    .word 0xe7a000a4
    b L20e700
    neg.s $f0,$f1
L20e6f8:
    .word 0xc7a00098
    nop
L20e700:
    .word 0xe7a000a8
    .word 0xc7a000a8
    .word 0x3c023f00
    .word 0x44820800
    nop
    add.s $f0,$f1,$f0
    .word 0x46000024
    cvt.s.w $f12,$f0
    jal f256438
    .word 0xe7ac00a8
    .word 0xc7ac00a4
    andi v0,v0,0xff
    jal f256438
    sll s4,v0,0x10
    .word 0xc7ac00a0
    andi v0,v0,0xff
    sll v0,v0,0x8
    jal f256438
    or s4,s4,v0
    andi v1,v0,0xff
    or v1,v1,s4
    sw v1,0(s1)
    addiu v1,sp,152
    .word 0x8c660000
    .word 0x3c078000
    .word 0x44800000
    nop
    c.lt.s $f20,$f0
    addiu v1,sp,148
    .word 0x8c650000
    and a2,a2,a3
    addiu v1,sp,144
    .word 0x8c640000
    and a1,a1,a3
    srl a1,a1,0x1
    or a1,a2,a1
    lw v1,0(s1)
    and a0,a0,a3
    srl a0,a0,0x2
    or a0,a0,a1
    or v1,v1,a0
    sw v1,0(s1)
    bc1t L20e7b4
    addiu v1,zero,1
    .word 0x70001e28
L20e7b4:
    .word 0x44830000
    nop
    cvt.s.w $f2,$f0
    .word 0x3c033c23
    ori v1,v1,0xd70a
    .word 0x44830800
    .word 0x44800000
    nop
    mul.s $f1,$f1,$f2
    add.s $f1,$f20,$f1
    c.eq.s $f1,$f0
    nop
    bc1t L20e7f4
    nop
    b L20e7f8
    neg.s $f20,$f20
L20e7f4:
    nop
L20e7f8:
    .word 0xe6340004
    addiu s1,s1,8
    addiu s2,s2,6
    nop
L20e808:
    paddub v1,s3,zero
    bnez v1,L20e494
    addiu s3,s3,-1
    lq ra,96(sp)
    lq s4,80(sp)
    lq s3,64(sp)
    lq s2,48(sp)
    lq s1,32(sp)
    lq s0,16(sp)
    .word 0xc7b40000
    jr ra
    addiu sp,sp,176
}
