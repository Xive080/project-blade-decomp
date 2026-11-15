extern void func_001ce3f0(void);
asm void func(void) {
    .set noreorder
    .set noat
    addiu sp,sp,-112
    .word 0x7fbf0050
    .word 0x7fb30040
    .word 0x7fb20030
    .word 0x7fb10020
    .word 0x7fb00010
    .word 0xe7b40000
    lw v0,4(a0)
    .word 0x3c037f7f
    ori v1,v1,0xffff
    .word 0x4483a000
    .word 0x70e09628
    .word 0x71008e28
    .word 0x71208628
    bnez v0, L17c6d8
    .word 0x70809e28
    b L17c87c
    .word 0x70001628
L17c6d8:
    .word 0xc4c20000
    .word 0xc4c10004
    .word 0xc4c00008
    addiu a0,sp,96
    .word 0x70a03e28
    .word 0x70802e28
    .word 0xe4820000
    .word 0xe4810004
    addiu a2,zero,1
    jal func_001ce3f0
    .word 0xe4800008
    addiu a1,sp,100
    .word 0x44800000
    addiu a2,sp,104
    .word 0x70001e28
    b L17c868
    .word 0x70002628
L17c71c:
    lw v0,8(s3)
    .word 0xc7a50060
    .word 0xc4a40000
    .word 0xc4c20000
    .word 0xc6460000
    addu v0,v0,a0
    .word 0xc4480000
    .word 0xc4430004
    .word 0xc4410008
    .word 0xc447000c
    mul.s $f5,$f5,$f8
    mul.s $f3,$f4,$f3
    adda.s $f5,$f3
    madd.s $f3,$f2,$f1
    sub.s $f1,$f3,$f7
    sub.s $f1,$f1,$f6
    c.le.s $f1,$f0
    nop
    bc1t L17c778
    neg.s $f2,$f1
    b L17c87c
    .word 0x70001628
    neg.s $f2,$f1
L17c778:
    c.lt.s $f2,$f20
    nop
    bc1fl L17c864
    addiu a0,a0,32
    sub.s $f1,$f6,$f3
    add.s $f1,$f7,$f1
    mul.s $f1,$f8,$f1
    .word 0xe6010000
    lw v0,8(s3)
    mov.s $f20,$f2
    .word 0xc4c70000
    .word 0xc7a50060
    .word 0xc4a30000
    .word 0xc6420000
    addu v0,v0,a0
    .word 0xc4460008
    .word 0xc4440000
    .word 0xc4480004
    .word 0xc441000c
    mul.s $f6,$f7,$f6
    mula.s $f5,$f4
    madd.s $f3,$f3,$f8
    add.s $f3,$f6,$f3
    sub.s $f2,$f2,$f3
    add.s $f1,$f1,$f2
    mul.s $f1,$f8,$f1
    .word 0xe6010004
    lw v0,8(s3)
    .word 0xc4a70000
    .word 0xc7a50060
    .word 0xc4c30000
    .word 0xc6420000
    addu v0,v0,a0
    .word 0xc4460004
    .word 0xc4440000
    .word 0xc4480008
    .word 0xc441000c
    mul.s $f6,$f7,$f6
    mul.s $f4,$f5,$f4
    adda.s $f4,$f6
    madd.s $f3,$f3,$f8
    sub.s $f2,$f2,$f3
    add.s $f1,$f1,$f2
    mul.s $f1,$f8,$f1
    .word 0xe6010008
    lw v0,8(s3)
    addu v0,v0,a0
    .word 0xc4410000
    .word 0xe6210000
    lw v0,8(s3)
    addu v0,v0,a0
    .word 0xc4410004
    .word 0xe6210004
    lw v0,8(s3)
    addu v0,v0,a0
    .word 0xc4410008
    .word 0xe6210008
    nop
    addiu a0,a0,32
L17c864:
    addiu v1,v1,1
L17c868:
    lw v0,4(s3)
    slt v0,v1,v0
    bnez v0, L17c71c
    nop
    addiu v0,zero,1
L17c87c:
    .word 0x7bbf0050
    .word 0x7bb30040
    .word 0x7bb20030
    .word 0x7bb10020
    .word 0x7bb00010
    .word 0xc7b40000
    jr ra
    addiu sp,sp,112
}
