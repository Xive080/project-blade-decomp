
asm void func(void) {
    .set noreorder
    .set noat
    .word 0x3c020033
    .word 0x244ae640
    .word 0xc4a40008
    .word 0xc5430008
    .word 0xc4c00008
    .word 0x3c023f00
    .word 0x44821000
    .word 0xc4a50000
    .word 0xc4c10000
    sub.s $f3,$f3,$f4
    .word 0x3c034780
    ori t3,zero,0x8000
    addiu v0,zero,16
    sub.s $f0,$f0,$f4
    div.s $f0,$f3,$f0
    sub.s $f1,$f1,$f5
    mul.s $f1,$f0,$f1
    add.s $f1,$f5,$f1
    .word 0xe4810000
    .word 0x44830800
    .word 0xc4a40004
    mul.s $f1,$f1,$f0
    .word 0xc4c30004
    add.s $f1,$f2,$f1
    sub.s $f2,$f3,$f4
    mul.s $f2,$f0,$f2
    add.s $f2,$f4,$f2
    .word 0xe4820004
    .word 0xc5420008
    .word 0x46000864
    .word 0xe4820008
    .word 0xc4a30020
    .word 0xc4c20020
    mfc1 t2,$f1
    .word 0x44800800
    sub.s $f2,$f2,$f3
    mul.s $f2,$f0,$f2
    add.s $f2,$f3,$f2
    .word 0xe4820020
    .word 0xc4a30024
    .word 0xc4c20024
    sub.s $f2,$f2,$f3
    mul.s $f2,$f0,$f2
    add.s $f2,$f3,$f2
    .word 0xe4820024
    .word 0xc5030020
    .word 0xc5220020
    sub.s $f2,$f2,$f3
    .word 0x460010a4
    mfc1 v1,$f2
    nop
    .word 0x01431818
    addu v1,v1,t3
    sra v1,v1,0x10
    .word 0x44831000
    nop
    cvt.s.w $f2,$f2
    add.s $f2,$f3,$f2
    .word 0xe4e20020
    .word 0xc5030024
    .word 0xc5220024
    sub.s $f2,$f2,$f3
    .word 0x460010a4
    mfc1 v1,$f2
    nop
    .word 0x71431818
    .word 0x24637fff
    .word 0x24630001
    sra v1,v1,0x10
    .word 0x44831000
    nop
    cvt.s.w $f2,$f2
    add.s $f2,$f3,$f2
    .word 0xe4e20024
    .word 0xc5030028
    .word 0xc5220028
    sub.s $f2,$f2,$f3
    .word 0x460010a4
    mfc1 v1,$f2
    nop
    .word 0x01431818
    .word 0x24637fff
    .word 0x24630001
    sra v1,v1,0x10
    .word 0x44831000
    nop
    cvt.s.w $f2,$f2
    add.s $f2,$f3,$f2
    .word 0xe4e20028
    .word 0xc503002c
    .word 0xc522002c
    sub.s $f2,$f2,$f3
    .word 0x460010a4
    mfc1 v1,$f2
    nop
    .word 0x01431818
    .word 0x24637fff
    .word 0x24630001
    sra v1,v1,0x10
    .word 0x44831000
    nop
    cvt.s.w $f2,$f2
    add.s $f2,$f3,$f2
    .word 0xe4e2002c
    .word 0xa082000c
    .word 0xc4820004
    c.lt.s $f2,$f1
    nop
    bc1f L1d7360
    .word 0x3c023f80
    b L1d7380
    addiu v0,zero,4
L1d7360:
    .word 0x44820800
    nop
    c.le.s $f2,$f1
    nop
    bc1t L1d7380
    .word 0x70001628
    b L1d7380
    addiu v0,zero,8
L1d7380:
    andi v1,v0,0xff
    .word 0x9082000c
    .word 0x44800800
    or v0,v0,v1
    .word 0xa082000c
    .word 0xc4820000
    c.lt.s $f2,$f1
    nop
    bc1f L1d73b0
    .word 0x3c023f80
    b L1d73d0
    addiu v0,zero,1
L1d73b0:
    .word 0x44820800
    nop
    c.le.s $f2,$f1
    nop
    bc1t L1d73d0
    .word 0x70001628
    b L1d73d0
    addiu v0,zero,2
L1d73d0:
    andi v1,v0,0xff
    .word 0x9082000c
    or v0,v0,v1
    jr ra
    .word 0xa082000c
}
