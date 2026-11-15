extern void func_00142960(void);
extern void func_00119ff8(void);
asm void func(void) {
    .set noreorder
    addiu sp,sp,-224
    .word 0x7fbf0090
    .word 0x7fbe0080
    .word 0x7fb70070
    .word 0x7fb60060
    .word 0x7fb50050
    .word 0x7fb40040
    .word 0x7fb30030
    .word 0x7fb20020
    .word 0x7fb10010
    .word 0xafa400dc
    .word 0x7fb00000
    .word 0x8c8400cc
    .word 0x8fa300dc
    .word 0xafa000b0
    addiu s8,a0,76
    .word 0xafa300c0
L221ed4:
    .word 0x8fc3019c
    bnez v1,L221ef0
    sll a0,v1,0x2
    .word 0x8fa300c0
    b L222200
    .word 0xac60036c
    sll a0,v1,0x2
L221ef0:
    addiu v0,a0,24
    sll v1,v1,0x4
    addu v0,v1,v0
    addu v0,v1,v0
    addu v0,a0,v0
    addu a0,a0,v0
    .word 0x3c020033
    addiu v0,v0,-23008
    .word 0x8c420130
    jalr ra,v0
    nop
    .word 0x8fc5019c
    paddub s7,v0,zero
    addiu v1,s7,24
    addiu a0,zero,2
    .word 0xac450000
    .word 0xac430004
    .word 0x8c450000
    .word 0x8c430004
    sll a1,a1,0x2
    addu v1,v1,a1
    .word 0xac430008
    .word 0x8c450000
    .word 0x8c430008
    sll a1,a1,0x4
    addu v1,v1,a1
    .word 0xac43000c
    .word 0x8c450000
    .word 0x8c43000c
    sll a1,a1,0x4
    addu v1,v1,a1
    .word 0xac430010
    .word 0x8c450000
    .word 0x8c430010
    sll a1,a1,0x2
    addu v1,v1,a1
    .word 0xac430014
    .word 0x8fa300c0
    .word 0xac77036c
    .word 0x8fa300b0
    beq v1,a0,L221fd4
    nop
    addiu a0,zero,1
    beq v1,a0,L221fc4
    nop
    beqz v1,L221fb4
    nop
    b L221fe4
    .word 0x8fd001a0
L221fb4:
    .word 0x8fa300dc
    .word 0x8c630030
    b L221fe0
    .word 0xafa300a0
L221fc4:
    .word 0x8fa300dc
    .word 0x8c6300b4
    b L221fe0
    .word 0xafa300a0
L221fd4:
    .word 0x8fa300dc
    .word 0x8c6300b8
    .word 0xafa300a0
L221fe0:
    .word 0x8fd001a0
L221fe4:
    .word 0x8ef20004
    .word 0x8ef30008
    .word 0x8ef5000c
    .word 0x8ef40010
    .word 0x70008e28
    b L2221f0
    .word 0x7000b628
L222000:
    .word 0x8e050020
    jal func_00142960
    .word 0x8fa400a0
    .word 0x8ee40014
    .word 0x3c033fc0
    .word 0x44830800
    addu v1,a0,s6
    .word 0xac620000
    .word 0xc6000010
    mul.s $f0,$f1,$f0
    .word 0xe6600000
    .word 0xc6000008
    .word 0xe6600004
    .word 0xc600000c
    .word 0xe6600008
    .word 0x92030003
    bltz v1,L222058
    srl a0,v1,0x1
    .word 0x44830000
    b L222070
    cvt.s.w $f1,$f0
    srl a0,v1,0x1
L222058:
    andi v1,v1,0x1
    or a0,a0,v1
    .word 0x44840000
    nop
    cvt.s.w $f1,$f0
    add.s $f1,$f1,$f1
L222070:
    .word 0x3c03437f
    .word 0x44830000
    nop
    div.s $f1,$f1,$f0
    .word 0x3c033efe
    ori a0,v1,0xfeff
    .word 0x92030000
    .word 0x44840000
    bltz v1,L2220a4
    mul.s $f1,$f0,$f1
    .word 0x44830000
    b L2220c0
    cvt.s.w $f0,$f0
L2220a4:
    srl a0,v1,0x1
    andi v1,v1,0x1
    or a0,a0,v1
    .word 0x44840000
    nop
    cvt.s.w $f0,$f0
    add.s $f0,$f0,$f0
L2220c0:
    mul.s $f0,$f0,$f1
    .word 0xe6a00000
    .word 0x92030001
    bltz v1,L2220e4
    srl a0,v1,0x1
    .word 0x44830000
    b L2220fc
    cvt.s.w $f0,$f0
    srl a0,v1,0x1
L2220e4:
    andi v1,v1,0x1
    or a0,a0,v1
    .word 0x44840000
    nop
    cvt.s.w $f0,$f0
    add.s $f0,$f0,$f0
L2220fc:
    mul.s $f0,$f0,$f1
    .word 0xe6a00004
    .word 0x92030002
    bltz v1,L222120
    srl a0,v1,0x1
    .word 0x44830000
    b L222138
    cvt.s.w $f0,$f0
    srl a0,v1,0x1
L222120:
    andi v1,v1,0x1
    or a0,a0,v1
    .word 0x44840000
    nop
    cvt.s.w $f0,$f0
    add.s $f0,$f0,$f0
L222138:
    mul.s $f0,$f0,$f1
    .word 0xe6a00008
    .word 0xc6010004
    .word 0x44800000
    nop
    c.le.s $f1,$f0
    nop
    bc1t L222188
    nop
    .word 0x3c023c8e
    ori v0,v0,0xfa35
    .word 0x44820000
    jal func_00119ff8
    mul.s $f12,$f0,$f1
    .word 0x3c033f80
    .word 0x44830800
    nop
    sub.s $f0,$f1,$f0
    b L222190
    .word 0xe6800000
L222188:
    .word 0xae800000
    nop
L222190:
    .word 0x8e030014
    beqz v1,L2221c4
    nop
    .word 0xae430000
    .word 0xc6000018
    .word 0x3c033f80
    .word 0x44830800
    nop
    div.s $f0,$f1,$f0
    .word 0xe660000c
    .word 0xc600001c
    b L2221d0
    .word 0xe6a0000c
L2221c4:
    .word 0xae400000
    .word 0xae60000c
    .word 0xaea0000c
L2221d0:
    addiu s2,s2,4
    addiu s3,s3,16
    addiu s5,s5,16
    addiu s4,s4,4
    addiu s0,s0,36
    addiu s6,s6,4
    addiu s1,s1,1
    nop
L2221f0:
    .word 0x8fc3019c
    sltu v1,s1,v1
    bnez v1,L222000
    nop
L222200:
    .word 0x8fa300c0
    addiu v1,v1,4
    .word 0xafa300c0
    .word 0x8fa300b0
    addiu v1,v1,1
    .word 0xafa300b0
    .word 0x8fa300b0
    sltiu v1,v1,3
    bnez v1,L221ed4
    addiu s8,s8,428
    .word 0x7bbf0090
    .word 0x7bbe0080
    .word 0x7bb70070
    .word 0x7bb60060
    .word 0x7bb50050
    .word 0x7bb40040
    .word 0x7bb30030
    .word 0x7bb20020
    .word 0x7bb10010
    .word 0x7bb00000
    jr ra
    addiu sp,sp,224
}


