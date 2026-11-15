extern void func_001c3b70(void);
extern void func_001c7610(void);
asm void func(void) {
    .set noreorder
    addiu sp,sp,-112
    .word 0x7fbf0030
    .word 0x7fb10020
    .word 0x7fb00010
    .word 0xe7b7000c
    .word 0xe7b60008
    .word 0xe7b50004
    .word 0xe7b40000
    .word 0x3c010030
    .word 0xc434a89c
    paddub s1,a0,zero
    .word 0x8c840068
    .word 0x3c010030
    .word 0xc435a890
    .word 0x3c010030
    .word 0xc436a894
    jal func_001c3b70
    .word 0x460065c6
    bnez s1,L167458
    paddub s0,v0,zero
    b L167758
    .word 0x70001628
L167458:
    .word 0x44800000
    nop
    c.lt.s $f20,$f0
    nop
    bc1t L16747c
    neg.s $f0,$f20
    b L16747c
    .word 0x4600a006
    neg.s $f0,$f20
L16747c:
    .word 0x3c023dcc
    ori v0,v0,0xcccd
    .word 0x44820800
    nop
    c.le.s $f0,$f1
    nop
    bc1t L167544
    nop
    .word 0x44800000
    nop
    c.le.s $f20,$f0
    nop
    bc1t L1674bc
    nop
    b L1674d8
    addiu v0,zero,1
L1674bc:
    c.lt.s $f20,$f0
    nop
    bc1f L1674d8
    .word 0x70001628
    b L1674d8
    addiu v0,zero,-1
    .word 0x70001628
L1674d8:
    .word 0x44820000
    .word 0xc6010020
    cvt.s.w $f5,$f0
    .word 0x3c023dcc
    ori v1,v0,0xcccd
    .word 0x3c024248
    .word 0xc6030024
    .word 0xc6020028
    .word 0x44830000
    .word 0x44822000
    nop
    mul.s $f5,$f0,$f5
    sub.s $f20,$f20,$f5
    .word 0xc6000030
    mul.s $f4,$f4,$f20
    mul.s $f4,$f4,$f23
    mul.s $f1,$f1,$f4
    add.s $f0,$f0,$f1
    .word 0xe6000030
    .word 0xc6000034
    mul.s $f3,$f3,$f4
    add.s $f0,$f0,$f3
    .word 0xe6000034
    .word 0xc6000038
    mul.s $f2,$f2,$f4
    add.s $f0,$f0,$f2
    .word 0xe6000038
L167544:
    .word 0x44800000
    nop
    c.lt.s $f21,$f0
    nop
    bc1t L167568
    neg.s $f1,$f21
    b L167568
    .word 0x4600a846
    neg.s $f1,$f21
L167568:
    .word 0x3c023dcc
    ori v0,v0,0xcccd
    .word 0x44820000
    nop
    c.le.s $f1,$f0
    nop
    bc1t L167658
    nop
    .word 0x3c02002e
    addiu v0,v0,-6864
    .word 0x44800000
    .word 0xdc430000
    .word 0xc4410008
    addiu a0,sp,64
    c.le.s $f21,$f0
    .word 0xfc830000
    .word 0xe4810008
    .word 0xc6030030
    .word 0xc6020034
    .word 0xc6010038
    addiu v0,sp,80
    .word 0xe4430000
    .word 0xe4420004
    bc1t L1675d4
    .word 0xe4410008
    b L1675f0
    addiu v0,zero,1
L1675d4:
    c.lt.s $f21,$f0
    nop
    bc1f L1675f0
    .word 0x70001628
    b L1675f0
    addiu v0,zero,-1
    .word 0x70001628
L1675f0:
    .word 0x44820000
    .word 0xae000038
    cvt.s.w $f2,$f0
    .word 0x3c023dcc
    ori v1,v0,0xcccd
    .word 0x3c0242b4
    .word 0xae000034
    addiu a1,sp,64
    .word 0x44830800
    .word 0x44820000
    nop
    mul.s $f1,$f1,$f2
    addiu a2,zero,2
    paddub a0,s0,zero
    .word 0xae000030
    sub.s $f21,$f21,$f1
    mul.s $f0,$f0,$f21
    jal func_001c7610
    mul.s $f12,$f0,$f23
    addiu v0,sp,80
    .word 0xc4420000
    .word 0xc4410004
    .word 0xc4400008
    .word 0xe6020030
    .word 0xe6010034
    .word 0xe6000038
L167658:
    .word 0x44800000
    nop
    c.lt.s $f22,$f0
    nop
    bc1t L16767c
    neg.s $f1,$f22
    b L16767c
    .word 0x4600b046
    neg.s $f1,$f22
L16767c:
    .word 0x3c023dcc
    ori v0,v0,0xcccd
    .word 0x44820000
    nop
    c.le.s $f1,$f0
    nop
    bc1t L167758
    addiu v0,zero,1
    .word 0xc6030030
    .word 0xc6020034
    .word 0xc6010038
    addiu v0,sp,96
    .word 0x44800000
    nop
    c.le.s $f22,$f0
    .word 0xe4430000
    .word 0xe4420004
    bc1t L1676d0
    .word 0xe4410008
    b L1676ec
    addiu v0,zero,1
L1676d0:
    c.lt.s $f22,$f0
    nop
    bc1f L1676ec
    .word 0x70001628
    b L1676ec
    addiu v0,zero,-1
    .word 0x70001628
L1676ec:
    .word 0x44820000
    .word 0xae000038
    cvt.s.w $f2,$f0
    .word 0x3c023dcc
    ori v1,v0,0xcccd
    .word 0x3c0242b4
    .word 0xae000034
    addiu a2,zero,2
    .word 0x44830800
    .word 0x44820000
    nop
    mul.s $f1,$f1,$f2
    paddub a0,s0,zero
    .word 0x72002e28
    .word 0xae000030
    sub.s $f22,$f22,$f1
    mul.s $f0,$f0,$f22
    jal func_001c7610
    mul.s $f12,$f0,$f23
    addiu v0,sp,96
    .word 0xc4420000
    .word 0xc4410004
    .word 0xc4400008
    .word 0xe6020030
    .word 0xe6010034
    .word 0xe6000038
    addiu v0,zero,1
L167758:
    .word 0x7bbf0030
    .word 0x7bb10020
    .word 0x7bb00010
    .word 0xc7b7000c
    .word 0xc7b60008
    .word 0xc7b50004
    .word 0xc7b40000
    jr ra
    addiu sp,sp,112
}


