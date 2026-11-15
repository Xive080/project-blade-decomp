asm void f(void) {
    .set noreorder
    .set noat
    sll v0,a1,0x1
    addu v0,v0,a1
    .word 0x44803800
    sll v0,v0,0x2
    addu v0,v0,a1
    sll v0,v0,0x2
    addu t0,a0,v0
    .word 0x3c023f7d
    ori v0,v0,0x70a4
    .word 0x44823000
    .word 0x3c023a83
    ori v0,v0,0x126f
    .word 0x44827800
    b L17def8
    addiu v1,a0,52
L17ddec:
    .word 0xc4600000
    c.eq.s $f0,$f7
    nop
    bc1tl L17def4
    addiu v1,v1,52
    sltu at,a0,v1
    beqz at,L17def0
    .word 0x70802e28
    nop
L17de10:
    .word 0xc4ae0000
    c.eq.s $f14,$f7
    nop
    bc1tl L17dee4
    addiu a1,a1,52
    .word 0xc4690004
    .word 0xc4ac0004
    .word 0xc4680008
    .word 0xc4ab0008
    .word 0xc46a000c
    .word 0xc4ad000c
    mul.s $f1,$f9,$f12
    mul.s $f0,$f8,$f11
    adda.s $f1,$f0
    madd.s $f0,$f10,$f13
    c.le.s $f0,$f6
    nop
    bc1t L17dee0
    nop
    .word 0xc4650010
    .word 0xc4640014
    .word 0xc4a20010
    .word 0xc4a10014
    .word 0xc4630018
    .word 0xc4a00018
    mul.s $f5,$f9,$f5
    mul.s $f4,$f8,$f4
    adda.s $f5,$f4
    mul.s $f2,$f12,$f2
    mul.s $f1,$f11,$f1
    madd.s $f3,$f10,$f3
    adda.s $f2,$f1
    madd.s $f1,$f13,$f0
    sub.s $f0,$f1,$f15
    c.lt.s $f3,$f0
    nop
    bc1t L17dee0
    nop
    add.s $f0,$f15,$f1
    c.le.s $f3,$f0
    nop
    bc1f L17dee0
    nop
    .word 0xc4600000
    c.le.s $f0,$f14
    nop
    bc1t L17ded8
    nop
    b L17dee0
    .word 0xaca00000
L17ded8:
    .word 0xac600000
    nop
L17dee0:
    addiu a1,a1,52
L17dee4:
    sltu v0,a1,v1
    bnez v0,L17de10
    nop
L17def0:
    addiu v1,v1,52
L17def4:
    nop
L17def8:
    sltu v0,v1,t0
    bnez v0,L17ddec
    nop
    .word 0x44800000
    .word 0x70002e28
    b L17df60
    .word 0x70001628
L17df14:
    beqz a1,L17df38
    nop
    .word 0xc4820000
    .word 0xc4a10000
    c.le.s $f2,$f1
    nop
    bc1t L17df38
    nop
    .word 0x70802e28
L17df38:
    .word 0xc4810000
    c.eq.s $f1,$f0
    nop
    bc1tl L17df5c
    addiu a0,a0,52
    bnez a1,L17df58
    addiu v0,v0,1
    .word 0x70802e28
L17df58:
    addiu a0,a0,52
L17df5c:
    nop
L17df60:
    sltu v1,a0,t0
    bnez v1,L17df14
    nop
    beqzl a1,L17dff4
    .word 0x70001628
    .word 0xc4a10000
    .word 0x44800000
    nop
    c.eq.s $f1,$f0
    nop
    bc1t L17dff0
    nop
    .word 0x3c033a83
    ori v1,v1,0x126f
    .word 0x44831000
    .word 0xc4a00004
    add.s $f1,$f2,$f1
    mul.s $f0,$f0,$f1
    .word 0xe4e00000
    .word 0xc4a10000
    .word 0xc4a00008
    add.s $f1,$f2,$f1
    mul.s $f0,$f0,$f1
    .word 0xe4e00004
    .word 0xc4a10000
    .word 0xc4a0000c
    add.s $f1,$f2,$f1
    mul.s $f0,$f0,$f1
    .word 0xe4e00008
    .word 0xc4a20004
    .word 0xc4a10008
    .word 0xc4a0000c
    .word 0xe4c20000
    .word 0xe4c10004
    b L17dff4
    .word 0xe4c00008
L17dff0:
    .word 0x70001628
L17dff4:
    jr ra
    nop
}
