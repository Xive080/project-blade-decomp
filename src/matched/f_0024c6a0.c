extern void fn_24bc60(void);
extern void fn_234ff0(void);
extern void fn_1f79f0(void);
extern void fn_1895d0(void);
extern void fn_189320(void);
extern void fn_189240(void);
extern void fn_1879b0(void);
asm void func(void) {
    .set noreorder
    addiu sp,sp,-256
    .word 0x44800800
    .word 0x7fbf0030
    .word 0x7fb10020
    .word 0x7fb00010
    .word 0xe7b7000c
    .word 0xe7b60008
    .word 0xe7b50004
    .word 0xe7b40000
    .word 0x8f8389f0
    mov.s $f23,$f12
    .word 0xc4600018
    c.le.s $f0,$f1
    nop
    bc1t L24c73c
    addiu v0,v1,24
    .word 0xc4400000
    sub.s $f0,$f0,$f23
    .word 0xe4400000
    .word 0x8f8289f0
    .word 0xc4400018
    c.le.s $f0,$f1
    nop
    bc1f L24cf40
    paddub s0,zero,zero
    .word 0x8c42001c
    beqz v0,L24cf3c
    nop
    paddub a0,zero,zero
    jal fn_24bc60
    paddub a1,zero,zero
    .word 0x8f8289f0
    .word 0x8c440020
    .word 0x8c450024
    .word 0x8c42001c
    jalr ra,v0
    nop
    b L24cf3c
    nop
L24c73c:
    .word 0xc4600090
    sub.s $f0,$f0,$f23
    .word 0xe4600090
    .word 0x8f8289f0
    .word 0xc4400090
    c.le.s $f0,$f1
    nop
    bc1f L24ca4c
    nop
    jal fn_234ff0
    nop
    .word 0x8f8589f0
    andi a0,v0,0x1ff
    .word 0x8ca30028
    mult v1,a0,v1
    srl v1,v1,0x9
    sll v1,v1,0x2
    addu v1,v1,a1
    .word 0x8c70002c
    .word 0x8e030028
    beqz v1,L24ca4c
    nop
    .word 0x8e050024
    andi a0,a1,0x300
    beqz a0,L24ca4c
    nop
    .word 0x8e030030
    bnez v1,L24ca4c
    nop
    addiu v1,zero,768
    bnel a0,v1,L24c7cc
    andi v0,a1,0x200
    andi v0,v0,0x1
    b L24c7d0
    sltu s1,zero,v0
    andi v0,a1,0x200
L24c7cc:
    sltu s1,zero,v0
L24c7d0:
    jal fn_1f79f0
    nop
    andi v0,v0,0x1fff
    bltz v0,L24c7f4
    srl v1,v0,0x1
    .word 0x44820000
    b L24c80c
    cvt.s.w $f0,$f0
    srl v1,v0,0x1
L24c7f4:
    andi v0,v0,0x1
    or v1,v1,v0
    .word 0x44830000
    nop
    cvt.s.w $f0,$f0
    add.s $f0,$f0,$f0
L24c80c:
    .word 0x3c0245ff
    ori v0,v0,0xf800
    .word 0x44820800
    nop
    div.s $f1,$f0,$f1
    .word 0x3c023d75
    ori a0,v0,0xc290
    .word 0x3c023d23
    ori v1,v0,0xd70a
    addiu v0,zero,11
    .word 0x44840000
    .word 0x44831000
    mul.s $f0,$f0,$f1
    add.s $f0,$f2,$f0
    .word 0xe7a00060
    .word 0xafa00064
    .word 0xafa20068
    .word 0xafa0006c
    beqz s1,L24c8d8
    .word 0xafa00070
    jal fn_1f79f0
    nop
    andi v0,v0,0x1fff
    bltz v0,L24c880
    srl v1,v0,0x1
    .word 0x44820000
    b L24c898
    cvt.s.w $f1,$f0
    srl v1,v0,0x1
L24c880:
    andi v0,v0,0x1
    or v1,v1,v0
    .word 0x44830000
    nop
    cvt.s.w $f1,$f0
    add.s $f1,$f1,$f1
L24c898:
    .word 0x3c0245ff
    ori v0,v0,0xf800
    .word 0x44820000
    .word 0x3c0440a0
    div.s $f2,$f1,$f0
    .word 0x3c03c020
    addiu v0,zero,1
    .word 0xafa20040
    .word 0x44840800
    .word 0x44830000
    nop
    mul.s $f1,$f1,$f2
    add.s $f0,$f0,$f1
    .word 0xe7a00044
    b L24c9b8
    .word 0xafa2005c
L24c8d8:
    jal fn_1f79f0
    nop
    andi v0,v0,0x1fff
    bltz v0,L24c8fc
    srl v1,v0,0x1
    .word 0x44820000
    b L24c914
    cvt.s.w $f1,$f0
    srl v1,v0,0x1
L24c8fc:
    andi v0,v0,0x1
    or v1,v1,v0
    .word 0x44830000
    nop
    cvt.s.w $f1,$f0
    add.s $f1,$f1,$f1
L24c914:
    .word 0x3c0245ff
    ori v0,v0,0xf800
    .word 0x44820000
    .word 0x3c0340a0
    div.s $f2,$f1,$f0
    .word 0x3c02c020
    .word 0x44830800
    .word 0x44820000
    nop
    mul.s $f1,$f1,$f2
    jal fn_1f79f0
    add.s $f20,$f0,$f1
    andi v0,v0,0x1fff
    bltz v0,L24c960
    srl v1,v0,0x1
    .word 0x44820000
    b L24c978
    cvt.s.w $f1,$f0
    srl v1,v0,0x1
L24c960:
    andi v0,v0,0x1
    or v1,v1,v0
    .word 0x44830000
    nop
    cvt.s.w $f1,$f0
    add.s $f1,$f1,$f1
L24c978:
    .word 0x3c0245ff
    ori v0,v0,0xf800
    .word 0x44820000
    .word 0x3c044120
    div.s $f2,$f1,$f0
    .word 0x3c03c0a0
    .word 0xafa00040
    addiu v0,zero,1
    .word 0x44840800
    .word 0x44830000
    nop
    mul.s $f1,$f1,$f2
    add.s $f0,$f0,$f1
    .word 0xe7a00044
    .word 0xe7b40048
    .word 0xafa2005c
L24c9b8:
    .word 0x8e040028
    .word 0x3c020019
    addiu a3,s0,48
    addiu a1,sp,64
    jal fn_1895d0
    addiu a2,v0,-18544
    jal fn_1f79f0
    .word 0xae020030
    andi v0,v0,0x1fff
    bltz v0,L24c9f4
    srl v1,v0,0x1
    .word 0x44820000
    b L24ca0c
    cvt.s.w $f1,$f0
    srl v1,v0,0x1
L24c9f4:
    andi v0,v0,0x1
    or v1,v1,v0
    .word 0x44830000
    nop
    cvt.s.w $f1,$f0
    add.s $f1,$f1,$f1
L24ca0c:
    .word 0x3c0245ff
    ori v0,v0,0xf800
    .word 0x44820000
    nop
    div.s $f2,$f1,$f0
    .word 0x3c023de1
    ori a0,v0,0x47af
    .word 0x3c023d23
    ori v1,v0,0xd70a
    .word 0x8f8289f0
    .word 0x44840800
    .word 0x44830000
    nop
    mul.s $f1,$f1,$f2
    add.s $f0,$f0,$f1
    .word 0xe4400090
L24ca4c:
    .word 0x8f8289f0
    .word 0x44800000
    .word 0xc4410094
    sub.s $f1,$f1,$f23
    .word 0xe4410094
    .word 0x8f8289f0
    .word 0xc4410094
    c.le.s $f1,$f0
    nop
    bc1f L24cf3c
    nop
    jal fn_234ff0
    nop
    paddub s1,v0,zero
    andi a0,v0,0x1ff
    .word 0x8f8289f0
    .word 0x8c430028
    mult v1,a0,v1
    srl v1,v1,0x9
    sll v1,v1,0x2
    addu v1,v1,v0
    .word 0x8c70002c
    .word 0x8e030028
    beqz v1,L24cf3c
    nop
    .word 0x8e050024
    andi a0,a1,0xc00
    beqz a0,L24cf3c
    nop
    .word 0x8e030034
    bnez v1,L24cf3c
    nop
    addiu v1,zero,3072
    bne a0,v1,L24cae8
    andi v1,a1,0x400
    andi v1,s1,0x1
    b L24caec
    sltu v1,zero,v1
    andi v1,a1,0x400
L24cae8:
    sltu v1,zero,v1
L24caec:
    beqz v1,L24cba4
    nop
    .word 0x3c03002e
    addiu t1,v1,1792
    .word 0xc5230000
    .word 0xc5220004
    .word 0xc5210008
    .word 0xc520000c
    addiu a3,sp,200
    .word 0x3c033f19
    addiu t2,sp,240
    .word 0xe4e30000
    .word 0xe4e20004
    .word 0xe4e10008
    .word 0xe4e0000c
    .word 0xc5230010
    .word 0xc5220014
    .word 0xc5210018
    .word 0xc520001c
    .word 0x3c063f80
    .word 0x3c0540c0
    ori v1,v1,0x999a
    addiu a0,sp,192
    .word 0xe4e30010
    .word 0xe4e20014
    .word 0xe4e10018
    .word 0xe4e0001c
    .word 0xc5210020
    .word 0xc5200024
    paddub t0,zero,zero
    .word 0xe4e10020
    .word 0xe4e00024
    .word 0xad460000
    .word 0xafa000c0
    .word 0xafa500d0
    .word 0xafa000d4
    .word 0xafa000d8
    .word 0xafa600dc
    .word 0xad430000
    .word 0x8c450000
    .word 0x8e06003c
    .word 0x8e070040
    jal fn_189320
    paddub t1,a1,zero
    b L24ce08
    .word 0xae020034
L24cba4:
    .word 0xc6140078
    .word 0x3c023e80
    .word 0x44820000
    jal fn_1f79f0
    mul.s $f21,$f0,$f20
    andi v0,v0,0x1fff
    bltz v0,L24cbd4
    srl v1,v0,0x1
    .word 0x44820000
    b L24cbec
    cvt.s.w $f1,$f0
    srl v1,v0,0x1
L24cbd4:
    andi v0,v0,0x1
    or v1,v1,v0
    .word 0x44830000
    nop
    cvt.s.w $f1,$f0
    add.s $f1,$f1,$f1
L24cbec:
    .word 0x3c0245ff
    ori v0,v0,0xf800
    .word 0x44821000
    sub.s $f0,$f20,$f21
    .word 0x3c023e19
    .word 0xc6160080
    ori v0,v0,0x999a
    div.s $f1,$f1,$f2
    mul.s $f0,$f0,$f1
    add.s $f20,$f21,$f0
    .word 0x44820000
    jal fn_1f79f0
    mul.s $f21,$f0,$f22
    andi v0,v0,0x1fff
    bltz v0,L24cc3c
    srl v1,v0,0x1
    .word 0x44820000
    b L24cc54
    cvt.s.w $f2,$f0
    srl v1,v0,0x1
L24cc3c:
    andi v0,v0,0x1
    or v1,v1,v0
    .word 0x44830000
    nop
    cvt.s.w $f2,$f0
    add.s $f2,$f2,$f2
L24cc54:
    .word 0x3c0245ff
    ori v0,v0,0xf800
    .word 0x44820800
    sub.s $f0,$f22,$f21
    div.s $f1,$f2,$f1
    .word 0xc6160080
    nop
    mul.s $f0,$f0,$f1
    jal fn_1f79f0
    add.s $f21,$f21,$f0
    andi v0,v0,0x1fff
    bltz v0,L24cc98
    srl v1,v0,0x1
    .word 0x44820000
    b L24ccb0
    cvt.s.w $f3,$f0
    srl v1,v0,0x1
L24cc98:
    andi v0,v0,0x1
    or v1,v1,v0
    .word 0x44830000
    nop
    cvt.s.w $f3,$f0
    add.s $f3,$f3,$f3
L24ccb0:
    .word 0x3c0245ff
    ori v0,v0,0xf800
    .word 0x44821000
    add.s $f1,$f22,$f22
    .word 0x8e040028
    .word 0x3c033f00
    .word 0xc600007c
    div.s $f3,$f3,$f2
    andi v0,s1,0x2
    mul.s $f3,$f1,$f3
    .word 0xc4820014
    neg.s $f1,$f22
    add.s $f3,$f1,$f3
    .word 0x44830800
    nop
    mul.s $f1,$f1,$f3
    add.s $f1,$f1,$f2
    beqz v0,L24cd00
    add.s $f4,$f0,$f1
    neg.s $f20,$f20
L24cd00:
    andi v0,s1,0x4
    beqz v0,L24cd14
    andi v0,s1,0x8
    neg.s $f21,$f21
    andi v0,s1,0x8
L24cd14:
    beqz v0,L24cd28
    nop
    .word 0x3c02002e
    b L24cd30
    addiu a2,v0,1488
L24cd28:
    .word 0x3c02002e
    addiu a2,v0,1568
L24cd30:
    .word 0x3c02002e
    addiu a1,v0,1792
    .word 0xc4a30000
    .word 0xc4a20004
    .word 0xc4a10008
    .word 0xc4a0000c
    addiu a3,sp,200
    .word 0x3c033f80
    addiu v0,zero,3
    .word 0xe4e30000
    .word 0xe4e20004
    .word 0xe4e10008
    .word 0xe4e0000c
    .word 0xc4a30010
    .word 0xc4a20014
    .word 0xc4a10018
    .word 0xc4a0001c
    addiu a0,sp,192
    paddub t0,zero,zero
    .word 0xe4e30010
    .word 0xe4e20014
    .word 0xe4e10018
    .word 0xe4e0001c
    .word 0xc4a10020
    .word 0xc4a00024
    .word 0xe4e10020
    .word 0xe4e00024
    .word 0xafa300f0
    .word 0xafa200c0
    .word 0xafa600c4
    .word 0xace00000
    .word 0xe7a400cc
    .word 0xc7a000d0
    .word 0x8f8289f0
    mul.s $f0,$f0,$f20
    .word 0xe7a000d0
    .word 0xc7a000d4
    mul.s $f0,$f0,$f20
    .word 0xe7a000d4
    .word 0xc4c10004
    .word 0xc7a000d8
    cvt.s.w $f1,$f1
    div.s $f21,$f21,$f1
    mul.s $f0,$f0,$f21
    .word 0xe7a000d8
    .word 0xc7a000dc
    mul.s $f0,$f0,$f21
    .word 0xe7a000dc
    .word 0x8c450000
    .word 0x8e060044
    .word 0x8e070048
    jal fn_189320
    paddub t1,a1,zero
    .word 0xae020034
L24ce08:
    jal fn_1f79f0
    nop
    andi v0,v0,0x1fff
    bltz v0,L24ce2c
    srl v1,v0,0x1
    .word 0x44820000
    b L24ce44
    cvt.s.w $f0,$f0
    srl v1,v0,0x1
L24ce2c:
    andi v0,v0,0x1
    or v1,v1,v0
    .word 0x44830000
    nop
    cvt.s.w $f0,$f0
    add.s $f0,$f0,$f0
L24ce44:
    .word 0x3c0245ff
    ori v0,v0,0xf800
    .word 0x44820800
    addiu t1,zero,11
    div.s $f1,$f0,$f1
    .word 0x3c023d75
    ori t3,v0,0xc290
    .word 0x3c023d23
    ori t2,v0,0xd70a
    .word 0x3c020025
    addiu t0,zero,24
    .word 0x3c043f80
    addiu v1,zero,1
    addiu a1,sp,128
    addiu a2,v0,-12352
    .word 0x448b0000
    .word 0x448a1000
    mul.s $f0,$f0,$f1
    add.s $f0,$f2,$f0
    .word 0xe7a000a0
    .word 0xafa000a4
    .word 0xafa900a8
    .word 0xafa000ac
    .word 0xafa000b0
    .word 0xafa80080
    .word 0xafa40084
    .word 0xafa40088
    .word 0xafa3009c
    .word 0x8e040034
    jal fn_189240
    paddub a3,s0,zero
    jal fn_1f79f0
    .word 0xae020038
    andi v0,v0,0x1fff
    bltz v0,L24cee4
    srl v1,v0,0x1
    .word 0x44820000
    b L24cefc
    cvt.s.w $f1,$f0
    srl v1,v0,0x1
L24cee4:
    andi v0,v0,0x1
    or v1,v1,v0
    .word 0x44830000
    nop
    cvt.s.w $f1,$f0
    add.s $f1,$f1,$f1
L24cefc:
    .word 0x3c0245ff
    ori v0,v0,0xf800
    .word 0x44820000
    nop
    div.s $f2,$f1,$f0
    .word 0x3c023de1
    ori a0,v0,0x47af
    .word 0x3c023d23
    ori v1,v0,0xd70a
    .word 0x8f8289f0
    .word 0x44840800
    .word 0x44830000
    nop
    mul.s $f1,$f1,$f2
    add.s $f0,$f0,$f1
    .word 0xe4400094
L24cf3c:
    paddub s0,zero,zero
L24cf40:
    b L24cf78
    paddub s1,zero,zero
    addu v0,v1,s1
L24cf4c:
    .word 0x8c44002c
    .word 0x8c830014
    beqzl v1,L24cf74
    addiu s1,s1,4
    .word 0x8c820028
    beqz v0,L24cf70
    nop
    jalr ra,v1
    mov.s $f12,$f23
L24cf70:
    addiu s1,s1,4
L24cf74:
    addiu s0,s0,1
L24cf78:
    .word 0x8f8389f0
    .word 0x8c620028
    sltu v0,s0,v0
    bnez v0,L24cf4c
    addu v0,v1,s1
    .word 0x8c640000
    jal fn_1879b0
    mov.s $f12,$f23
    .word 0x7bbf0030
    .word 0x7bb10020
    .word 0x7bb00010
    .word 0xc7b7000c
    .word 0xc7b60008
    .word 0xc7b50004
    .word 0xc7b40000
    jr ra
    addiu sp,sp,256
}
