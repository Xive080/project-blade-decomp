asm void f(void) {
    .set noreorder
    .set noat
    .word 0x70001628
    lwc1 f0,0(a1)
    addiu v0,a0,12
    .word 0xe4400000
    vaddw.xyz $vf1xyz,$vf0xyz,$vf0w
    lqc2 $vf4,0(a2)
    lqc2 $vf5,0(a3)
    lqc2 $vf6,0(t0)
    vsub.xyz $vf10xyz,$vf5xyz,$vf4xyz
    vsub.xyz $vf11xyz,$vf6xyz,$vf4xyz
    lqc2 $vf3,0(a0)
    vdiv $Q,$vf0w,$vf3w
    vsub.xyz $vf7xyz,$vf4xyz,$vf3xyz
    vsub.xyz $vf8xyz,$vf5xyz,$vf3xyz
    vsub.xyz $vf9xyz,$vf6xyz,$vf3xyz
    vopmula.xyz $ACCxyz,$vf10xyz,$vf11xyz
    vopmsub.xyz $vf12xyz,$vf11xyz,$vf10xyz
    vmul.xyz $vf15xyz,$vf7xyz,$vf7xyz
    vmul.xyz $vf16xyz,$vf8xyz,$vf8xyz
    vmul.xyz $vf17xyz,$vf9xyz,$vf9xyz
    vmul.xyz $vf13xyz,$vf12xyz,$vf12xyz
    vmul.yz $vf18yz,$vf0yz,$vf18yz
    vadday.x $ACCx,$vf15x,$vf15y
    vmaddz.x $vf19x,$vf1x,$vf15z
    vadday.x $ACCx,$vf13x,$vf13y
    vmaddz.x $vf18x,$vf1x,$vf13z
    vadday.x $ACCx,$vf16x,$vf16y
    vmaddz.x $vf20x,$vf1x,$vf16z
    vmul.xyz $vf23xyz,$vf9xyz,$vf7xyz
    vwaitq 
    vaddq.x $vf11x,$vf0x,$Q
    qmfc2 v0,$vf18
    bne zero,v0,L17e960
    vmul.xyz $vf24xyz,$vf9xyz,$vf8xyz
    b L17ebfc
    add v0,zero,zero
L17e960:
    vrsqrt $Q,$vf0w,$vf18x
    vmul.xyz $vf25xyz,$vf8xyz,$vf7xyz
    vadday.x $ACCx,$vf17x,$vf17y
    vmaddz.x $vf21x,$vf1x,$vf17z
    vadday.x $ACCx,$vf23x,$vf23y
    vmaddz.x $vf26x,$vf1x,$vf23z
    vadday.x $ACCx,$vf24x,$vf24y
    vmaddz.x $vf27x,$vf1x,$vf24z
    vadday.x $ACCx,$vf25x,$vf25y
    vmaddz.x $vf28x,$vf1x,$vf25z
    qmfc2 v0,$vf19
    mtc1 v0,f1
    qmfc2 v0,$vf11
    mtc1 v0,f8
    vwaitq 
    vmulq.xyz $vf22xyz,$vf12xyz,$Q
    vaddw.x $vf2x,$vf0x,$vf3w
    qmfc2 v0,$vf20
    mtc1 v0,f2
    vmul.xyz $vf29xyz,$vf22xyz,$vf7xyz
    vmul.x $vf31x,$vf2x,$vf2x
    qmfc2 v0,$vf21
    mtc1 v0,f3
    vadday.x $ACCx,$vf29x,$vf29y
    vmaddz.x $vf30x,$vf1x,$vf29z
    qmfc2 v0,$vf31
    mtc1 v0,f7
    sqc2 $vf22,0(t1)
    qmfc2 v0,$vf30
    mtc1 v0,f0
    neg.s f0,f0
    qmfc2 v0,$vf26
    mtc1 v0,f6
    qmfc2 v0,$vf27
    mtc1 v0,f5
    mul.s f8,f8,f0
    mul.s f0,f0,f0
    qmfc2 v0,$vf28
    mtc1 v0,f4
    swc1 f8,12(t1)
    c.le.s f0,f7
    nop
    bc1t L17ea18
    nop
    b L17ebfc
    add v0,zero,zero
L17ea18:
    c.le.s f1,f7
    nop
    bc1f L17ea30
    nop
    b L17ebfc
    addi v0,zero,1
L17ea30:
    c.le.s f2,f7
    nop
    bc1f L17ea48
    nop
    b L17ebfc
    addi v0,zero,1
L17ea48:
    c.le.s f3,f7
    nop
    bc1f L17ea60
    nop
    b L17ebfc
    addi v0,zero,1
L17ea60:
    c.lt.s f1,f2
    nop
    bc1f L17ead0
    nop
    c.lt.s f3,f1
    nop
    bc1f L17eaa8
    nop
    c.le.s f6,f3
    nop
    bc1t L17eb30
    sub.s f0,f2,f4
    c.le.s f5,f3
    nop
    bc1t L17eb30
    sub.s f0,f2,f4
    b L17ebfc
    add v0,zero,zero
L17eaa8:
    c.le.s f4,f1
    nop
    bc1t L17eb30
    sub.s f0,f2,f4
    c.le.s f6,f1
    nop
    bc1t L17eb30
    sub.s f0,f2,f4
    b L17ebfc
    add v0,zero,zero
L17ead0:
    c.lt.s f3,f2
    nop
    bc1f L17eb08
    nop
    c.le.s f6,f3
    nop
    bc1t L17eb30
    sub.s f0,f2,f4
    c.le.s f5,f3
    nop
    bc1t L17eb30
    sub.s f0,f2,f4
    b L17ebfc
    add v0,zero,zero
L17eb08:
    c.le.s f4,f2
    nop
    bc1t L17eb30
    sub.s f0,f2,f4
    c.le.s f5,f2
    nop
    bc1t L17eb30
    sub.s f0,f2,f4
    b L17ebfc
    add v0,zero,zero
L17eb30:
    mula.s f1,f2
    msub.s f9,f4,f4
    sub.s f8,f1,f4
    mula.s f6,f0
    add.s f0,f8,f0
    mul.s f0,f7,f0
    c.le.s f9,f0
    nop
    bc1t L17eb70
    madd.s f10,f5,f8
    c.lt.s f9,f10
    nop
    bc1f L17eb74
    sub.s f0,f3,f5
    b L17ebfc
    add v0,zero,zero
L17eb70:
    sub.s f0,f3,f5
L17eb74:
    mula.s f2,f3
    msub.s f9,f5,f5
    sub.s f8,f2,f5
    mula.s f4,f0
    add.s f0,f8,f0
    mul.s f0,f7,f0
    c.le.s f9,f0
    nop
    bc1t L17ebb4
    madd.s f10,f6,f8
    c.lt.s f9,f10
    nop
    bc1f L17ebb8
    sub.s f0,f1,f6
    b L17ebfc
    add v0,zero,zero
L17ebb4:
    sub.s f0,f1,f6
L17ebb8:
    mula.s f1,f3
    msub.s f9,f6,f6
    sub.s f8,f3,f6
    mula.s f5,f0
    add.s f0,f8,f0
    mul.s f0,f7,f0
    c.le.s f9,f0
    nop
    bc1t L17ebf8
    madd.s f10,f4,f8
    c.lt.s f9,f10
    nop
    bc1f L17ebfc
    addi v0,zero,1
    b L17ebfc
    add v0,zero,zero
L17ebf8:
    addi v0,zero,1
L17ebfc:
    jr ra
    nop
}
