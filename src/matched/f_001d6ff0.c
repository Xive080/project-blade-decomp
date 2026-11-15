
asm void func(void) {
    .set noreorder
    .set noat
    .word 0xc4a40000
    .word 0xc4a30008
    .word 0xc4c20000
    .word 0xc4c00008
    .word 0xc4a50004
    .word 0xc4c10004
    .word 0x3c034780
    sub.s $f3,$f4,$f3
    .word 0x3c0a3f00
    ori t3,zero,0x8000
    addiu v0,zero,-4
    sub.s $f0,$f2,$f0
    sub.s $f0,$f3,$f0
    div.s $f0,$f3,$f0
    sub.s $f1,$f1,$f5
    mul.s $f1,$f0,$f1
    add.s $f1,$f5,$f1
    .word 0xe4810004
    .word 0x44830800
    .word 0x448a1000
    mul.s $f1,$f1,$f0
    .word 0xc4a40008
    .word 0xc4c30008
    add.s $f1,$f2,$f1
    sub.s $f2,$f3,$f4
    mul.s $f2,$f0,$f2
    add.s $f2,$f4,$f2
    .word 0x46000864
    .word 0xe4820008
    .word 0xe4820000
    .word 0xc4a30020
    .word 0xc4c20020
    mfc1 t2,$f1
    sub.s $f1,$f2,$f3
    mul.s $f1,$f0,$f1
    add.s $f1,$f3,$f1
    .word 0xe4810020
    .word 0xc4c10024
    .word 0xc4a20024
    sub.s $f1,$f1,$f2
    mul.s $f1,$f0,$f1
    add.s $f1,$f2,$f1
    .word 0xe4810024
    .word 0xc5020020
    .word 0xc5210020
    sub.s $f1,$f1,$f2
    .word 0x46000864
    mfc1 v1,$f1
    nop
    .word 0x01431818
    addu v1,v1,t3
    sra v1,v1,0x10
    .word 0x44830800
    nop
    cvt.s.w $f1,$f1
    add.s $f1,$f2,$f1
    .word 0xe4e10020
    .word 0xc5020024
    .word 0xc5210024
    sub.s $f1,$f1,$f2
    .word 0x46000864
    mfc1 v1,$f1
    nop
    .word 0x71431818
    .word 0x24637fff
    .word 0x24630001
    sra v1,v1,0x10
    .word 0x44830800
    nop
    cvt.s.w $f1,$f1
    add.s $f1,$f2,$f1
    .word 0xe4e10024
    .word 0xc5020028
    .word 0xc5210028
    sub.s $f1,$f1,$f2
    .word 0x46000864
    mfc1 v1,$f1
    nop
    .word 0x01431818
    .word 0x24637fff
    .word 0x24630001
    sra v1,v1,0x10
    .word 0x44830800
    nop
    cvt.s.w $f1,$f1
    add.s $f1,$f2,$f1
    .word 0xe4e10028
    .word 0xc502002c
    .word 0xc521002c
    sub.s $f1,$f1,$f2
    .word 0x46000864
    mfc1 v1,$f1
    nop
    .word 0x01431818
    .word 0x24637fff
    .word 0x24630001
    sra v1,v1,0x10
    .word 0x44830800
    nop
    cvt.s.w $f1,$f1
    add.s $f1,$f2,$f1
    .word 0xe4e1002c
    .word 0x80a3000c
    and v0,v1,v0
    ori v0,v0,0x2
    jr ra
    .word 0xa082000c
}
