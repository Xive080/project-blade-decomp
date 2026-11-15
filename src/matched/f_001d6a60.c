asm void f(void) {
    .set noreorder
    .set noat
    .word 0xc4a30004
    .word 0xc4c00004
    .word 0x3c023f00
    .word 0x44821000
    .word 0xc4a40000
    .word 0xc4c10000
    .word 0x3c034780
    sub.s $f0,$f3,$f0
    ori t3,zero,32768
    addiu v0,zero,-16
    div.s $f0,$f3,$f0
    sub.s $f1,$f1,$f4
    mul.s $f1,$f0,$f1
    add.s $f1,$f4,$f1
    .word 0xe4810000
    .word 0x44830800
    .word 0xc4a40008
    mul.s $f1,$f1,$f0
    .word 0xc4c30008
    add.s $f1,$f2,$f1
    sub.s $f2,$f3,$f4
    mul.s $f2,$f0,$f2
    add.s $f2,$f4,$f2
    .word 0xe4820008
    .word 0xac800004
    .word 0xc4a30020
    .word 0xc4c20020
    .word 0x46000864
    sub.s $f2,$f2,$f3
    mul.s $f2,$f0,$f2
    add.s $f2,$f3,$f2
    .word 0xe4820020
    .word 0xc4c20024
    .word 0xc4a30024
    mfc1 t2,$f1
    .word 0x44800800
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
    mult1 v1,t2,v1
    addiu v1,v1,32767
    addiu v1,v1,1
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
    addiu v1,v1,32767
    addiu v1,v1,1
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
    addiu v1,v1,32767
    addiu v1,v1,1
    sra v1,v1,0x10
    .word 0x44831000
    nop
    cvt.s.w $f2,$f2
    add.s $f2,$f3,$f2
    .word 0xe4e2002c
    .word 0x80a3000c
    and v0,v1,v0
    ori v0,v0,0x4
    .word 0xa082000c
    .word 0xc4820000
    c.lt.s $f2,$f1
    nop
    bc1f L1d6c18
    addiu v0,zero,1
    b L1d6c38
    andi v1,v0,0xff
L1d6c18:
    .word 0xc4810008
    c.le.s $f2,$f1
    nop
    bc1t L1d6c34
    .word 0x70001628
    b L1d6c34
    addiu v0,zero,2
L1d6c34:
    andi v1,v0,0xff
L1d6c38:
    .word 0x9082000c
    or v0,v0,v1
    jr ra
    .word 0xa082000c
}
