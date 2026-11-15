extern void func_001f79f0(void);
asm void func(void) {
    .set noreorder
    .set noat
    addiu sp,sp,-160
    .word 0x7fbf0070
    .word 0x7fb50060
    .word 0x7fb40050
    .word 0x7fb30040
    .word 0x7fb20030
    .word 0x7fb10020
    .word 0x7fb00010
    .word 0xe7b50004
    .word 0xe7b40000
    lw v0,48(a2)
    .word 0xc4b40044
    lw v1,228(a1)
    .word 0x7080a628
    .word 0x70e08e28
    .word 0x71008628
    .word 0x70a09e28
    beqz v0, L15982c
    .word 0x70c09628
    .word 0x3c023f00
    .word 0x4482a800
    b L159838
    lw v0,52(s2)
L15982c:
    .word 0x3c023f80
    .word 0x4482a800
    lw v0,52(s2)
L159838:
    beqz v0, L159860
    nop
    .word 0xc4600010
    lw v0,48(s2)
    beqz v0, L1598c8
    cvt.s.w $f0,$f0
    .word 0x3c023f00
    .word 0x44820800
    b L1598c8
    add.s $f0,$f0,$f1
L159860:
    lw v0,20(v1)
    beqz v0, L1598a8
    nop
    .word 0xc4620010
    .word 0x3c024000
    .word 0x44820000
    .word 0x3c023f80
    .word 0x44820800
    cvt.s.w $f2,$f2
    div.s $f0,$f2,$f0
    nop
    nop
    c.lt.s $f0,$f1
    nop
    bc1f L1598c8
    nop
    b L1598c8
    mov.s $f0,$f1
L1598a8:
    .word 0xc4600010
    lw v0,48(s2)
    beqz v0, L1598c8
    cvt.s.w $f0,$f0
    .word 0x3c023f00
    .word 0x44820800
    nop
    add.s $f0,$f0,$f1
L1598c8:
    c.le.s $f21,$f0
    nop
    bc1t L1598e4
    .word 0x3c0240a0
    b L159e8c
    .word 0x70001628
    .word 0x3c0240a0
L1598e4:
    .word 0x44820800
    nop
    div.s $f1,$f12,$f1
    .word 0x3c024000
    .word 0x46000864
    cvt.s.w $f2,$f1
    .word 0x44820800
    nop
    div.s $f1,$f2,$f1
    nop
    nop
    c.lt.s $f13,$f1
    nop
    bc1fl L15992c
    mov.s $f13,$f1
    b L15992c
    nop
    mov.s $f13,$f1
L15992c:
    .word 0x44800800
    nop
    c.le.s $f13,$f1
    nop
    bc1f L159950
    sub.s $f1,$f20,$f13
    b L159e8c
    .word 0x70001628
    sub.s $f1,$f20,$f13
L159950:
    c.le.s $f21,$f1
    nop
    bc1tl L15996c
    mov.s $f21,$f1
    b L159970
    add.s $f1,$f20,$f13
    mov.s $f21,$f1
L15996c:
    add.s $f1,$f20,$f13
L159970:
    c.lt.s $f0,$f1
    nop
    bc1fl L15998c
    mov.s $f0,$f1
    b L159990
    lw v0,48(s2)
    mov.s $f0,$f1
L15998c:
    lw v0,48(s2)
L159990:
    bnez v0, L159a08
    nop
    .word 0x4600a864
    .word 0x44020800
    cvt.s.w $f1,$f1
    c.eq.s $f21,$f1
    nop
    bc1t L1599c8
    .word 0x46000064
    addiu v0,v0,1
    .word 0x44820800
    nop
    cvt.s.w $f21,$f1
    .word 0x46000064
L1599c8:
    .word 0x44020800
    cvt.s.w $f1,$f1
    c.eq.s $f0,$f1
    nop
    bc1t L1599f0
    nop
    addiu v0,v0,-1
    .word 0x44820000
    nop
    cvt.s.w $f0,$f0
L1599f0:
    c.le.s $f21,$f0
    nop
    bc1t L159a08
    nop
    b L159e8c
    .word 0x70001628
L159a08:
    lw v0,320(s3)
    lw v1,228(s3)
    sltu v0,zero,v0
    xori v0,v0,0x1
    beqz v0, L159a28
    addiu a1,v1,28
    b L159a30
    lw a0,336(s3)
L159a28:
    lw a0,340(s3)
    nop
L159a30:
    .word 0x44800800
    b L159ad0
    .word 0x72601e28
L159a3c:
    .word 0xc483fec8
    .word 0xc6620018
    addiu v0,a0,-336
    sub.s $f2,$f3,$f2
    .word 0xe7a20080
    .word 0xc483fecc
    .word 0xc662001c
    sub.s $f2,$f3,$f2
    .word 0xe7a20084
    .word 0xc483fed0
    .word 0xc6620020
    sub.s $f2,$f3,$f2
    .word 0xe7a20088
    .word 0xc7a40080
    .word 0xc7a30084
    .word 0xc7a20088
    mul.s $f4,$f4,$f4
    mul.s $f3,$f3,$f3
    adda.s $f4,$f3
    madd.s $f2,$f2,$f2
    .word 0x46020084
    nop
    nop
    c.le.s $f2,$f1
    nop
    bc1fl L159adc
    .word 0x3c023f00
    .word 0x70401e28
    lw v0,320(s3)
    sltu v0,zero,v0
    xori v0,v0,0x1
    beqz v0, L159ac8
    nop
    b L159ad0
    lw a0,0(a0)
L159ac8:
    lw a0,4(a0)
    nop
L159ad0:
    bne a0,a1, L159a3c
    nop
    .word 0x3c023f00
L159adc:
    addiu a2,v1,336
    .word 0x44820800
    b L159c80
    .word 0x70002628
    addiu v1,a2,-336
L159af0:
    bne v1,s3, L159b00
    nop
    b L159c58
    addiu a0,zero,1
L159b00:
    beqz a0, L159b70
    nop
    .word 0xc6630018
    .word 0xc4620018
    sub.s $f2,$f3,$f2
    .word 0xe7a20090
    .word 0xc663001c
    .word 0xc462001c
    sub.s $f2,$f3,$f2
    .word 0xe7a20094
    .word 0xc6630020
    .word 0xc4620020
    sub.s $f2,$f3,$f2
    .word 0xe7a20098
    .word 0xc7a40090
    .word 0xc7a30094
    .word 0xc7a20098
    mul.s $f4,$f4,$f4
    mul.s $f3,$f3,$f3
    adda.s $f4,$f3
    madd.s $f2,$f2,$f2
    .word 0x46020084
    nop
    nop
    c.le.s $f2,$f12
    nop
    bc1f L159c88
    nop
L159b70:
    .word 0xc463003c
    .word 0xc464004c
    lw v0,320(s3)
    lw v1,320(v1)
    beq v1,v0, L159ba8
    nop
    lw v0,228(s3)
    lw v0,16(v0)
    addiu v0,v0,1
    .word 0x44821000
    nop
    cvt.s.w $f2,$f2
    sub.s $f3,$f2,$f3
    sub.s $f4,$f2,$f4
L159ba8:
    c.le.s $f3,$f20
    nop
    bc1t L159bd0
    nop
    c.le.s $f3,$f0
    nop
    bc1f L159bd0
    nop
    b L159bf8
    sub.s $f0,$f3,$f1
L159bd0:
    c.lt.s $f3,$f20
    nop
    bc1f L159bf8
    nop
    c.lt.s $f3,$f21
    nop
    bc1t L159bf8
    nop
    add.s $f21,$f1,$f3
    nop
L159bf8:
    c.le.s $f4,$f20
    nop
    bc1t L159c20
    nop
    c.le.s $f4,$f0
    nop
    bc1f L159c20
    nop
    b L159c48
    sub.s $f0,$f4,$f1
L159c20:
    c.lt.s $f4,$f20
    nop
    bc1f L159c48
    nop
    c.lt.s $f4,$f21
    nop
    bc1t L159c48
    nop
    add.s $f21,$f1,$f4
    nop
L159c48:
    c.le.s $f21,$f0
    nop
    bc1f L159c88
    nop
L159c58:
    lw v0,320(s3)
    sltu v0,zero,v0
    xori v0,v0,0x1
    beqz v0, L159c74
    nop
    b L159c80
    lw a2,4(a2)
L159c74:
    lw a2,0(a2)
    nop
    nop
L159c80:
    bne a2,a1, L159af0
    addiu v1,a2,-336
L159c88:
    c.le.s $f21,$f0
    nop
    bc1f L159e8c
    .word 0x70001628
    lw v0,48(s2)
    beqz v0, L159cd4
    .word 0x4600a864
    sub.s $f3,$f0,$f21
    .word 0x3c034000
    .word 0x3c023f80
    .word 0x44831000
    .word 0x44820800
    mul.s $f2,$f2,$f3
    add.s $f1,$f1,$f2
    .word 0x46000864
    .word 0x44150800
    b L159d3c
    nop
    .word 0x4600a864
L159cd4:
    cvt.s.w $f1,$f1
    c.eq.s $f21,$f1
    nop
    bc1t L159cfc
    .word 0x46000064
    .word 0x3c023f00
    .word 0x44820800
    nop
    add.s $f21,$f21,$f1
    .word 0x46000064
L159cfc:
    cvt.s.w $f1,$f1
    c.eq.s $f0,$f1
    nop
    bc1t L159d24
    sub.s $f2,$f0,$f21
    .word 0x3c023f00
    .word 0x44820800
    nop
    sub.s $f0,$f0,$f1
    sub.s $f2,$f0,$f21
L159d24:
    .word 0x3c023f80
    .word 0x44820800
    nop
    add.s $f1,$f1,$f2
    .word 0x46000864
    .word 0x44150800
L159d3c:
    c.lt.s $f20,$f21
    nop
    bc1t L159d60
    nop
    c.le.s $f20,$f0
    nop
    bc1f L159d60
    nop
    addiu s5,s5,-1
L159d60:
    bnez s5, L159d74
    addiu v0,zero,1
    b L159e8c
    .word 0x70001628
    addiu v0,zero,1
L159d74:
    bne s5,v0, L159da0
    nop
    c.eq.s $f21,$f20
    nop
    bc1fl L159d98
    mov.s $f0,$f21
    b L159e28
    .word 0xe6200000
    mov.s $f0,$f21
L159d98:
    b L159e24
    nop
L159da0:
    jal func_001f79f0
    nop
    .word 0x0055001b
    lw v0,48(s2)
    nop
    mfhi v1
    beqz v0, L159df4
    nop
    .word 0x44830000
    .word 0x3c023f00
    cvt.s.w $f0,$f0
    .word 0x44820800
    nop
    mul.s $f0,$f1,$f0
    add.s $f0,$f21,$f0
    c.lt.s $f0,$f20
    nop
    bc1t L159e24
    nop
    b L159e24
    add.s $f0,$f0,$f1
L159df4:
    .word 0x44830000
    nop
    cvt.s.w $f0,$f0
    add.s $f0,$f21,$f0
    c.lt.s $f0,$f20
    nop
    bc1t L159e24
    nop
    .word 0x3c023f80
    .word 0x44820800
    nop
    add.s $f0,$f0,$f1
L159e24:
    .word 0xe6200000
L159e28:
    lw v0,320(s3)
    lw v1,228(s3)
    sltu v0,zero,v0
    xori v0,v0,0x1
    beqz v0, L159e48
    lw a0,7876(s4)
    bnez a0, L159e58
    nop
L159e48:
    bnez v0, L159e60
    nop
    bnez a0, L159e60
    nop
L159e58:
    b L159e7c
    .word 0xc6200000
L159e60:
    lw v0,16(v1)
    .word 0xc6200000
    addiu v0,v0,1
    .word 0x44820800
    nop
    cvt.s.w $f1,$f1
    sub.s $f0,$f1,$f0
L159e7c:
    addiu v0,zero,1
    b L159e8c
    .word 0xe6000000
    .word 0x70001628
L159e8c:
    .word 0x7bbf0070
    .word 0x7bb50060
    .word 0x7bb40050
    .word 0x7bb30040
    .word 0x7bb20030
    .word 0x7bb10020
    .word 0x7bb00010
    .word 0xc7b50004
    .word 0xc7b40000
    jr ra
    addiu sp,sp,160
}
