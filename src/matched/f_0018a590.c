asm void f(void) {
    .set noreorder
    .set noat
    .word 0x3c024080
    .word 0x44820000
    .word 0
    mul.s $f12,$f12,$f0
    .word 0x3c023f00
    .word 0x46006064
    cvt.s.w $f1,$f1
    sub.s $f12,$f12,$f1
    .word 0x44820000
    .word 0
    c.lt.s $f12,$f0
    .word 0
    bc1t L18a5d8
    nop
    .word 0x3c023f80
    mtc1 v0,$f0
    b L18a5dc
    nop
L18a5d8:
    mtc1 zero,$f0
L18a5dc:
    jr ra
    nop
}
