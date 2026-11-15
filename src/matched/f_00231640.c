extern void func_00230ce0(void);
extern void func_00230d10(void);
asm void func(void) {
    .set noreorder
    addiu sp,sp,-80
    .word 0x7fbf0020
    .word 0x7fb00010
    .word 0xe7b40000
    paddub s0,a0,zero
    .word 0x3c017000
    .word 0x8c243fd4
    beqz a0,L231678
    nop
    .word 0x8c820000
    addiu a2,sp,76
    .word 0x8c420010
    jalr ra,v0
    .word 0x70002e28
L231678:
    .word 0xc7a3004c
    .word 0x3c034120
    .word 0x44830000
    nop
    c.lt.s $f3,$f0
    nop
    bc1f L231770
    nop
    .word 0x8e04003c
    .word 0x3c033f00
    .word 0x46001824
    .word 0xc482003c
    .word 0x44830800
    nop
    mfc1 v1,$f0
    add.s $f0,$f1,$f2
    .word 0x46000024
    mfc1 a0,$f0
    nop
    beq a0,v1,L231728
    nop
    .word 0x3c0241b0
    .word 0x44820000
    paddub a0,s0,zero
    div.s $f1,$f3,$f0
    .word 0x3c023f80
    .word 0x70002e28
    .word 0x44820000
    nop
    sub.s $f20,$f0,$f1
    jal func_00230ce0
    .word 0x4600a306
    addiu a1,zero,1
    .word 0x4600a306
    jal func_00230ce0
    paddub a0,s0,zero
    paddub a0,s0,zero
    jal func_00230d10
    .word 0x70002e28
    addiu a1,zero,1
    jal func_00230d10
    paddub a0,s0,zero
    b L231774
    .word 0xc7a0004c
L231728:
    .word 0x44800800
    nop
    c.eq.s $f1,$f3
    nop
    bc1f L231770
    nop
    .word 0x8e030040
    .word 0xc460003c
    c.eq.s $f1,$f0
    nop
    bc1t L231770
    nop
    addiu a1,zero,2
    jal func_00230d10
    paddub a0,s0,zero
    addiu a1,zero,3
    jal func_00230d10
    paddub a0,s0,zero
L231770:
    .word 0xc7a0004c
L231774:
    .word 0x3c033f00
    .word 0x44831000
    .word 0x8e04003c
    .word 0x3c0342c8
    .word 0x44830800
    nop
    sub.s $f0,$f0,$f2
    .word 0x3c034130
    .word 0xe480003c
    .word 0xc7a0004c
    .word 0x44831000
    .word 0x8e030040
    mul.s $f0,$f1,$f0
    .word 0xe460003c
    .word 0xc7a1004c
    c.lt.s $f1,$f2
    nop
    bc1f L231850
    nop
    .word 0x3c034110
    .word 0x44830000
    .word 0x3c043f80
    c.lt.s $f1,$f0
    nop
    bc1f L2317e8
    .word 0xafa40030
    .word 0x44840800
    b L231800
    .word 0x3c043f80
L2317e8:
    sub.s $f1,$f2,$f1
    .word 0x3c034000
    .word 0x44830000
    nop
    div.s $f1,$f1,$f0
    .word 0x3c043f80
L231800:
    .word 0x44840000
    addiu a1,sp,52
    sub.s $f0,$f0,$f1
    addiu v1,sp,48
    .word 0xe4a00000
    .word 0xe7a00038
    .word 0xafa4003c
    .word 0x8e040034
    .word 0xc4630000
    .word 0xc4620004
    .word 0xc4610008
    .word 0xc460000c
    .word 0xe4830028
    .word 0xe482002c
    .word 0xe4810030
    .word 0xe4800034
    .word 0x8c83000c
    ori v1,v1,0x8
    b L231888
    .word 0xac83000c
L231850:
    .word 0x3c03002e
    addiu v1,v1,1696
    .word 0x8e040034
    .word 0xc4630000
    .word 0xc4620004
    .word 0xc4610008
    .word 0xc460000c
    .word 0xe4830028
    .word 0xe482002c
    .word 0xe4810030
    .word 0xe4800034
    .word 0x8c83000c
    ori v1,v1,0x8
    .word 0xac83000c
L231888:
    .word 0xc7a1004c
    .word 0x3c0341f0
    .word 0x44831000
    nop
    c.lt.s $f1,$f2
    nop
    bc1f L231978
    nop
    .word 0x44800000
    nop
    c.lt.s $f1,$f0
    nop
    bc1f L2318d4
    sub.s $f0,$f2,$f1
    .word 0x3c033f80
    .word 0x44831800
    b L2318e0
    .word 0x46000824
    sub.s $f0,$f2,$f1
L2318d4:
    nop
    div.s $f3,$f0,$f2
    .word 0x46000824
L2318e0:
    .word 0x3c033f00
    .word 0xc7a1004c
    cvt.s.w $f0,$f0
    sub.s $f1,$f1,$f0
    .word 0x44830000
    nop
    c.le.s $f1,$f0
    nop
    bc1t L231930
    .word 0xe7a1004c
    sub.s $f1,$f1,$f0
    .word 0x3c044000
    .word 0x3c033f80
    .word 0x44841000
    .word 0x44830000
    nop
    mul.s $f1,$f2,$f1
    mul.s $f1,$f1,$f3
    b L231938
    add.s $f0,$f0,$f1
L231930:
    .word 0x3c033f80
    .word 0x44830000
L231938:
    .word 0xe7a0004c
    .word 0x8e040034
    .word 0xc7a0004c
    .word 0xe4800018
    .word 0xac80001c
    .word 0x8c83000c
    ori v1,v1,0x2
    .word 0xac83000c
    .word 0x8e040034
    .word 0xc7a0004c
    .word 0xac800020
    .word 0xe4800024
    .word 0x8c83000c
    ori v1,v1,0x2
    b L2319ac
    .word 0xac83000c
L231978:
    .word 0x8e050034
    .word 0x3c043f80
    .word 0xaca40018
    .word 0xaca0001c
    .word 0x8ca3000c
    ori v1,v1,0x2
    .word 0xaca3000c
    .word 0x8e050034
    .word 0xaca00020
    .word 0xaca40024
    .word 0x8ca3000c
    ori v1,v1,0x2
    .word 0xaca3000c
L2319ac:
    .word 0x7bbf0020
    .word 0x7bb00010
    .word 0xc7b40000
    jr ra
    addiu sp,sp,80
}


