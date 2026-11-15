asm void f(void) {
    .set noreorder
    .set noat
    bltz t0,L184578
    nop
    .word 0x8ce30004
    slt v1,t0,v1
    bnez v1,L1845d8
    nop
L184578:
    blez a2,L1846c0
    nop
L184580:
    .word 0xc4a30000
    .word 0xc4a20004
    .word 0xc4a10008
    .word 0xc4a0000c
    addiu a2,a2,-1
    .word 0xe4830000
    .word 0xe4820004
    .word 0xe4810008
    .word 0xe480000c
    .word 0xc4a30010
    .word 0xc4a20014
    .word 0xc4a10018
    .word 0xc4a0001c
    .word 0xe4830010
    .word 0xe4820014
    .word 0xe4810018
    .word 0xe480001c
    addiu a0,a0,32
    bgtz a2,L184580
    addiu a1,a1,40
    b L1846c0
    nop
L1845d8:
    .word 0x8ce30000
    .word 0x44880000
    nop
    cvt.s.w $f7,$f0
    sll a3,t0,0x4
    blez a2,L1846c0
    addu a3,v1,a3
    .word 0x3c033f80
    .word 0x44830800
    nop
    sub.s $f0,$f1,$f12
L184604:
    .word 0xc4a50000
    .word 0xc4a40004
    .word 0xc4a30008
    .word 0xc4a2000c
    addiu a2,a2,-1
    .word 0xe4850000
    .word 0xe4840004
    .word 0xe4830008
    .word 0xe482000c
    .word 0xc4a50010
    .word 0xc4a40014
    .word 0xc4a30018
    .word 0xc4a2001c
    .word 0xe4850010
    .word 0xe4840014
    .word 0xe4830018
    .word 0xe482001c
    .word 0xc4a60024
    .word 0xc4e50000
    .word 0xc4e40008
    .word 0xc5230008
    .word 0xc4820000
    sub.s $f6,$f6,$f7
    addiu a1,a1,40
    sub.s $f8,$f1,$f6
    mula.s $f5,$f8
    madd.s $f4,$f4,$f6
    mul.s $f4,$f12,$f4
    mul.s $f3,$f3,$f4
    add.s $f2,$f2,$f3
    .word 0xe4820000
    .word 0xc523000c
    .word 0xc4820004
    mul.s $f3,$f3,$f4
    add.s $f2,$f2,$f3
    .word 0xe4820004
    .word 0xc4e40004
    .word 0xc4e3000c
    .word 0xc4820014
    mula.s $f4,$f8
    madd.s $f3,$f3,$f6
    mul.s $f3,$f12,$f3
    add.s $f3,$f0,$f3
    mul.s $f2,$f2,$f3
    .word 0xe4820014
    bgtz a2,L184604
    addiu a0,a0,32
L1846c0:
    jr ra
    nop
}
