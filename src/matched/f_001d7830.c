asm void func(void) {
    .set noreorder
    .set noat
    .word 0xc4a40004
    .word 0xc4c00004
    .word 0x3c0b3f80
    .word 0x448b0800
    .word 0xc4a50000
    .word 0xc4c20000
    sub.s $f3,$f1,$f4
    .word 0x3c034780
    .word 0x3c0a3f00
    ori t4,zero,0x8000
    sub.s $f0,$f0,$f4
    addiu v0,zero,-16
    div.s $f0,$f3,$f0
    sub.s $f2,$f2,$f5
    mul.s $f2,$f0,$f2
    add.s $f2,$f5,$f2
    .word 0xe4820000
    .word 0x44831000
    .word 0x448a1800
    nop
    mul.s $f2,$f2,$f0
    .word 0xc4a50008
    .word 0xc4c40008
    add.s $f2,$f3,$f2
    sub.s $f3,$f4,$f5
    mul.s $f3,$f0,$f3
    add.s $f3,$f5,$f3
    .word 0xe4830008
    sw t3,4(a0)
    .word 0xc4a40020
    .word 0xc4c30020
    .word 0x460010a4
    sub.s $f3,$f3,$f4
    mul.s $f3,$f0,$f3
    add.s $f3,$f4,$f3
    .word 0xe4830020
    .word 0xc4c30024
    .word 0xc4a40024
    .word 0x440a1000
    .word 0x44801000
    nop
    sub.s $f3,$f3,$f4
    mul.s $f3,$f0,$f3
    add.s $f3,$f4,$f3
    .word 0xe4830024
    .word 0xc5040020
    .word 0xc5230020
    sub.s $f3,$f3,$f4
    .word 0x460018e4
    .word 0x44031800
    nop
    .word 0x01431818
    addu v1,v1,t4
    sra v1,v1,0x10
    .word 0x44831800
    nop
    cvt.s.w $f3,$f3
    add.s $f3,$f4,$f3
    .word 0xe4e30020
    .word 0xc5040024
    .word 0xc5230024
    sub.s $f3,$f3,$f4
    .word 0x460018e4
    .word 0x44031800
    nop
    .word 0x71431818
    addiu v1,v1,32767
    addiu v1,v1,1
    sra v1,v1,0x10
    .word 0x44831800
    nop
    cvt.s.w $f3,$f3
    add.s $f3,$f4,$f3
    .word 0xe4e30024
    .word 0xc5040028
    .word 0xc5230028
    sub.s $f3,$f3,$f4
    .word 0x460018e4
    .word 0x44031800
    nop
    .word 0x01431818
    addiu v1,v1,32767
    addiu v1,v1,1
    sra v1,v1,0x10
    .word 0x44831800
    nop
    cvt.s.w $f3,$f3
    add.s $f3,$f4,$f3
    .word 0xe4e30028
    .word 0xc504002c
    .word 0xc523002c
    sub.s $f3,$f3,$f4
    .word 0x460018e4
    .word 0x44031800
    nop
    .word 0x01431818
    addiu v1,v1,32767
    addiu v1,v1,1
    sra v1,v1,0x10
    .word 0x44831800
    nop
    cvt.s.w $f3,$f3
    add.s $f3,$f4,$f3
    .word 0xe4e3002c
    lb v1,12(a1)
    and v0,v1,v0
    ori v0,v0,0x8
    sb v0,12(a0)
    .word 0xc4830000
    c.lt.s $f3,$f2
    nop
    bc1f L1d79fc
    addiu v0,zero,1
    b L1d7a18
    andi v1,v0,0xff
L1d79fc:
    c.le.s $f3,$f1
    nop
    bc1t L1d7a14
    .word 0x70001628
    b L1d7a14
    addiu v0,zero,2
L1d7a14:
    andi v1,v0,0xff
L1d7a18:
    lbu v0,12(a0)
    or v0,v0,v1
    jr ra
    sb v0,12(a0)
}
