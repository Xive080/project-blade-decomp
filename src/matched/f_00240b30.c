extern void func_00189520(void);
extern void func_001895d0(void);
extern void func_00230d10(void);
extern void func_00240f50(void);
asm void func(void) {
    .set noreorder
    addiu sp,sp,-192
    .word 0x7fbf0020
    .word 0x7fb00010
    .word 0xe7b40000
    .word 0x3c017000
    .word 0x8c830048
    .word 0xc4343fb0
    beqz v1,L240c0c
    paddub s0,a0,zero
    .word 0x8e020034
    beqz v0,L240bf8
    nop
    beqz v0,L240bdc
    nop
    .word 0xae000044
    .word 0x3c023ea8
    .word 0xae00005c
    ori v0,v0,0xf5c3
    .word 0xafa20060
    addiu v0,zero,1
    .word 0xafa00064
    .word 0xafa20068
    .word 0xafa0006c
    addiu v0,zero,5
    .word 0xafa00070
    .word 0xafa20040
    .word 0x3c0238d1
    ori v0,v0,0xb717
    .word 0xafa20044
    .word 0xafa0005c
    .word 0x8e050038
    beqz a1,L240bc0
    nop
    .word 0x8e040034
    jal func_00189520
    .word 0x70003628
L240bc0:
    .word 0x8e040034
    .word 0x3c020024
    addiu a1,sp,64
    addiu a2,v0,5296
    jal func_001895d0
    paddub a3,s0,zero
    .word 0xae020038
L240bdc:
    .word 0x8e020030
    andi v0,v0,0x1
    bnez v0,L240bf8
    nop
    addiu a1,zero,1
    jal func_00230d10
    paddub a0,s0,zero
L240bf8:
    .word 0x8e050048
    addiu a2,zero,14
    jal func_00240f50
    paddub a0,s0,zero
    .word 0xae000048
L240c0c:
    .word 0x8e030044
    beqz v1,L240dac
    nop
    .word 0x8e04003c
    beqz a0,L240dac
    nop
    .word 0xc601004c
    c.le.s $f20,$f1
    nop
    bc1t L240d18
    nop
    .word 0x3c034000
    .word 0x44830000
    nop
    add.s $f0,$f0,$f1
    c.le.s $f20,$f0
    nop
    bc1tl L240c6c
    sub.s $f0,$f0,$f1
    .word 0x3c033f80
    .word 0x44832800
    b L240c74
    nop
    sub.s $f0,$f0,$f1
L240c6c:
    sub.s $f1,$f20,$f1
    div.s $f5,$f1,$f0
L240c74:
    .word 0x3c01002f
    .word 0xc4208220
    .word 0x3c033f80
    .word 0x44830800
    nop
    sub.s $f6,$f1,$f5
    addiu v1,sp,48
    .word 0x3c01002f
    .word 0xc4248230
    mula.s $f0,$f6
    .word 0x3c01002f
    .word 0xc4238224
    madd.s $f4,$f4,$f5
    .word 0xe7a40030
    .word 0x3c01002f
    .word 0xc4228234
    mula.s $f3,$f6
    .word 0x3c01002f
    .word 0xc4218228
    madd.s $f2,$f2,$f5
    .word 0xe7a20034
    .word 0x3c01002f
    .word 0xc4208238
    mula.s $f1,$f6
    .word 0x3c01002f
    .word 0xc421822c
    madd.s $f0,$f0,$f5
    .word 0xe7a00038
    .word 0x3c01002f
    .word 0xc420823c
    mula.s $f1,$f6
    madd.s $f0,$f0,$f5
    .word 0xe7a0003c
    .word 0xc4630000
    .word 0xc4620004
    .word 0xc4610008
    .word 0xc460000c
    .word 0xe4830028
    .word 0xe482002c
    .word 0xe4810030
    .word 0xe4800034
L240d18:
    .word 0xc6000054
    c.lt.s $f20,$f0
    nop
    bc1t L240dac
    nop
    .word 0xc6000050
    c.lt.s $f20,$f0
    nop
    bc1f L240dac
    nop
    .word 0x8e030030
    andi v1,v1,0x1
    bnez v1,L240d5c
    nop
    addiu a1,zero,2
    jal func_00230d10
    paddub a0,s0,zero
L240d5c:
    .word 0xc6010058
    .word 0xc6000054
    .word 0x3c033c23
    ori v1,v1,0xd70a
    .word 0x44831000
    add.s $f0,$f0,$f1
    .word 0xe6000054
    .word 0xc6010058
    c.le.s $f1,$f2
    nop
    bc1t L240da8
    nop
    .word 0x3c033df5
    ori v1,v1,0xc28f
    .word 0x44830000
    nop
    sub.s $f0,$f1,$f0
    b L240dac
    .word 0xe6000058
L240da8:
    .word 0xae030058
L240dac:
    .word 0x8e03005c
    beqz v1,L240e68
    nop
    .word 0xc6000050
    c.lt.s $f20,$f0
    nop
    bc1t L240e68
    nop
    .word 0x8e030034
    beqz v1,L240e4c
    nop
    .word 0xae000044
    .word 0x3c023ea8
    .word 0xae00005c
    ori v0,v0,0xf5c3
    .word 0xafa200a0
    addiu v0,zero,1
    .word 0xafa000a4
    .word 0xafa200a8
    .word 0xafa000ac
    addiu v0,zero,5
    .word 0xafa000b0
    .word 0xafa20080
    .word 0x3c0238d1
    ori v0,v0,0xb717
    .word 0xafa20084
    .word 0xafa0009c
    .word 0x8e050038
    beqz a1,L240e30
    nop
    .word 0x8e040034
    jal func_00189520
    .word 0x70003628
L240e30:
    .word 0x8e040034
    .word 0x3c020024
    addiu a1,sp,128
    addiu a2,v0,5296
    jal func_001895d0
    paddub a3,s0,zero
    .word 0xae020038
L240e4c:
    .word 0x8e030030
    andi v1,v1,0x1
    bnez v1,L240e68
    nop
    addiu a1,zero,1
    jal func_00230d10
    paddub a0,s0,zero
L240e68:
    .word 0x7bbf0020
    .word 0x7bb00010
    .word 0xc7b40000
    jr ra
    addiu sp,sp,192
}


