asm void f(void) {
    .set noreorder
    .set noat
    addiu sp,sp,-16
    .word 0xe7b40000
    .word 0xc4f30008
    .word 0xc4c20008
    .word 0xc4f20004
    .word 0xc4c10004
    .word 0xc4f10000
    .word 0xc4c00000
    .word 0xc4a40004
    sub.s $f10,$f19,$f2
    .word 0xc4a30008
    .word 0xc4a50000
    .word 0xc4880008
    sub.s $f9,$f18,$f1
    .word 0xc4860000
    .word 0xc4870004
    mula.s $f4,$f10
    msub.s $f15,$f3,$f9
    sub.s $f11,$f17,$f0
    mula.s $f5,$f9
    mul.s $f10,$f5,$f10
    mul.s $f9,$f3,$f11
    sub.s $f16,$f9,$f10
    sub.s $f14,$f8,$f2
    msub.s $f9,$f4,$f11
    sub.s $f12,$f6,$f0
    mul.s $f10,$f9,$f14
    sub.s $f13,$f7,$f1
    mula.s $f15,$f12
    madd.s $f9,$f16,$f13
    add.s $f10,$f10,$f9
    mtc1 zero,$f9
    nop
    c.lt.s $f10,$f9
    nop
    bc1f L17ce2c
    nop
    b L17cf58
    paddub v0,zero,zero
L17ce2c:
    .word 0xc50f0004
    .word 0xc5100008
    sub.s $f11,$f7,$f18
    .word 0xc50e0000
    sub.s $f20,$f15,$f18
    sub.s $f18,$f16,$f19
    sub.s $f12,$f6,$f17
    mula.s $f4,$f18
    msub.s $f13,$f3,$f20
    sub.s $f17,$f14,$f17
    mul.s $f13,$f13,$f12
    mula.s $f3,$f17
    msub.s $f12,$f5,$f18
    mul.s $f11,$f12,$f11
    adda.s $f13,$f11
    mul.s $f12,$f5,$f20
    mul.s $f11,$f4,$f17
    sub.s $f10,$f8,$f19
    sub.s $f11,$f12,$f11
    madd.s $f10,$f11,$f10
    c.lt.s $f10,$f9
    nop
    bc1f L17ce94
    nop
    b L17cf58
    paddub v0,zero,zero
L17ce94:
    .word 0xc5320004
    .word 0xc5330008
    sub.s $f11,$f7,$f15
    .word 0xc5310000
    sub.s $f20,$f18,$f15
    sub.s $f15,$f19,$f16
    sub.s $f12,$f6,$f14
    mula.s $f4,$f15
    msub.s $f13,$f3,$f20
    sub.s $f14,$f17,$f14
    mul.s $f13,$f13,$f12
    mula.s $f3,$f14
    msub.s $f12,$f5,$f15
    mul.s $f11,$f12,$f11
    adda.s $f13,$f11
    mul.s $f12,$f5,$f20
    mul.s $f11,$f4,$f14
    sub.s $f10,$f8,$f16
    sub.s $f11,$f12,$f11
    madd.s $f10,$f11,$f10
    c.lt.s $f10,$f9
    nop
    bc1f L17cf00
    sub.s $f10,$f6,$f17
    b L17cf58
    paddub v0,zero,zero
    sub.s $f10,$f6,$f17
L17cf00:
    sub.s $f6,$f7,$f18
    sub.s $f7,$f2,$f19
    sub.s $f11,$f0,$f17
    sub.s $f12,$f1,$f18
    mula.s $f4,$f7
    msub.s $f2,$f3,$f12
    mula.s $f3,$f11
    mul.s $f3,$f2,$f10
    msub.s $f2,$f5,$f7
    mul.s $f2,$f2,$f6
    adda.s $f3,$f2
    mul.s $f1,$f4,$f11
    mul.s $f2,$f5,$f12
    sub.s $f0,$f8,$f19
    sub.s $f1,$f2,$f1
    madd.s $f0,$f1,$f0
    c.lt.s $f0,$f9
    nop
    bc1t L17cf54
    addiu v0,zero,1
    paddub v0,zero,zero
L17cf54:
    xori v0,v0,0x1
L17cf58:
    .word 0xc7b40000
    jr ra
    addiu sp,sp,16
}
