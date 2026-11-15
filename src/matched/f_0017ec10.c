asm void f(void) {
    .set noreorder
    .set noat
    addiu sp,sp,-32
    .word 0x70001628
    .word 0x70001628
    .word 0x3c02322b
    ori v0,v0,0xcc77
    .word 0x44820000
    nop
    .word 0xe7a00018
    .word 0x3c02b727
    ori v0,v0,0xc5ac
    .word 0x44820000
    nop
    .word 0xe7a0001c
    addiu v0,sp,24
    addiu v1,sp,0
    lqc2 $vf2,0(a0)
    lqc2 $vf3,0(a1)
    lqc2 $vf4,0(a2)
    lqc2 $vf5,0(a3)
    lqc2 $vf6,0(t0)
    vsub.xyz $vf7xyz,$vf3xyz,$vf2xyz
    vsub.xyz $vf9xyz,$vf6xyz,$vf4xyz
    vsub.xyz $vf8xyz,$vf5xyz,$vf4xyz
    vsub.xyz $vf10xyz,$vf2xyz,$vf4xyz
    vaddw.xyz $vf1xyz,$vf0xyz,$vf0w
    vopmula.xyz $ACCxyz,$vf7xyz,$vf9xyz
    vopmsub.xyz $vf11xyz,$vf9xyz,$vf7xyz
    vopmula.xyz $ACCxyz,$vf8xyz,$vf9xyz
    vopmsub.xyz $vf12xyz,$vf9xyz,$vf8xyz
    .word 0xc4410000
    vmul.xyz $vf13xyz,$vf8xyz,$vf11xyz
    vmul.xyz $vf14xyz,$vf11xyz,$vf10xyz
    .word 0xc4420004
    vmul.xyz $vf15xyz,$vf12xyz,$vf12xyz
    vadday.x $ACCx,$vf13x,$vf13y
    vmaddz.x $vf16x,$vf1x,$vf13z
    vadday.x $ACCx,$vf14x,$vf14y
    vmaddz.x $vf17x,$vf1x,$vf14z
    vopmula.xyz $ACCxyz,$vf10xyz,$vf8xyz
    vopmsub.xyz $vf18xyz,$vf8xyz,$vf10xyz
    qmfc2 v0,$vf16
    .word 0x44820000
    c.lt.s $f1,$f0
    mul.s $f5,$f0,$f2
    qmfc2 v0,$vf17
    bc1t L17ecd4
    .word 0x44821800
    b L17eda8
    add v0,zero,zero
L17ecd4:
    vmul.xyzw $vf19xyzw,$vf7xyzw,$vf18xyzw
    c.le.s $f5,$f3
    sub.s $f6,$f0,$f5
    bc1t L17ecf0
    vadday.x $ACCx,$vf19x,$vf19y
    b L17eda8
    add v0,zero,zero
L17ecf0:
    vmaddz.x $vf20x,$vf1x,$vf19z
    c.le.s $f3,$f6
    vmul.xyz $vf19xyz,$vf9xyz,$vf18xyz
    bc1t L17ed0c
    qmfc2 v0,$vf20
    b L17eda8
    add v0,zero,zero
L17ed0c:
    .word 0x44822000
    c.le.s $f5,$f4
    add.s $f7,$f4,$f3
    bc1t L17ed28
    vadday.x $ACCx,$vf19x,$vf19y
    b L17eda8
    add v0,zero,zero
L17ed28:
    vmaddz.x $vf20x,$vf1x,$vf19z
    c.le.s $f7,$f6
    vadday.x $ACCx,$vf15x,$vf15y
    bc1t L17ed44
    vmaddz.x $vf21x,$vf1x,$vf15z
    b L17eda8
    add v0,zero,zero
L17ed44:
    qmfc2 v0,$vf20
    .word 0x44824000
    c.le.s $f5,$f8
    vrsqrt $Q,$vf1x,$vf21x
    bc1t L17ed64
    div.s $f10,$f8,$f0
    b L17eda8
    add v0,zero,zero
L17ed64:
    c.le.s $f8,$f6
    nop
    bc1t L17ed7c
    nop
    b L17eda8
    add v0,zero,zero
L17ed7c:
    addi v0,zero,1
    nop
    nop
    nop
    vwaitq
    vmulq.xyzw $vf22xyzw,$vf12xyzw,$Q
    nop
    nop
    nop
    sqc2 $vf22,0(v1)
    .word 0xe52a0000
L17eda8:
    bnez v0,L17edbc
    nop
    .word 0x70001628
    b L17ede4
    nop
L17edbc:
    beqz t2,L17ede0
    nop
    addiu v0,sp,0
    .word 0xc4420000
    .word 0xc4410004
    .word 0xc4400008
    .word 0xe5420000
    .word 0xe5410004
    .word 0xe5400008
L17ede0:
    addiu v0,zero,1
L17ede4:
    addiu sp,sp,32
    jr ra
    nop
}
