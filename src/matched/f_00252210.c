extern void func_00252870(void);
extern void func_00189710(void);
extern void func_00182e50(void);
extern void func_00189050(void);
extern void func_001895d0(void);
asm void func(void) {
    .set noreorder
    .word 0x27bdfe60
    .word 0x7fbf00a0
    .word 0x7fbe0090
    .word 0x7fb70080
    .word 0x7fb60070
    .word 0x7fb50060
    .word 0x7fb40050
    .word 0x7fb30040
    .word 0x7fb20030
    .word 0x7fb10020
    .word 0x7fb00010
    .word 0xe7b60008
    .word 0xe7b50004
    .word 0xe7b40000
    .word 0x8c820084
    .word 0x70a0be28
    beqz v0,L252260
    .word 0x7080ae28
    jal func_00252870
    nop
L252260:
    .word 0x8ea20118
    .word 0x8c500010
    beqz s7,L252298
    srl a0,s0,0x1
    .word 0x8c420018
    .word 0x249effff
    addu v0,s0,v0
    subu v0,v0,a0
    .word 0x0050001b
    nop
    nop
    mfhi s1
    b L2522c4
    .word 0xafa400b0
L252298:
    .word 0x8c430018
    .word 0x7080f628
    .word 0x2482ffff
    .word 0xafa200b0
    addu v0,s0,v1
    subu v0,v0,a0
    .word 0x24420001
    .word 0x0050001b
    nop
    nop
    mfhi s1
L2522c4:
    .word 0x3c02c170
    .word 0x44820800
    bltz a0,L2522e4
    srl v1,a0,0x1
    .word 0x44840000
    b L2522fc
    cvt.s.w $f0,$f0
    srl v1,a0,0x1
L2522e4:
    andi v0,a0,0x1
    or v1,v1,v0
    .word 0x44830000
    nop
    cvt.s.w $f0,$f0
    add.s $f0,$f0,$f0
L2522fc:
    .word 0x8ea40028
    jal func_00189710
    mul.s $f20,$f1,$f0
    .word 0xaea20084
    addiu v0,zero,7
    .word 0xafa20110
    .word 0xafa00114
    .word 0xafa00118
    .word 0xafa0011c
    .word 0xafa00120
    .word 0x3c023f80
    .word 0xafa20124
    .word 0xafa20128
    .word 0x3c02002e
    .word 0x244206b0
    .word 0xc4440000
    .word 0xc4430004
    .word 0xc4420008
    .word 0xc441000c
    .word 0x27a3012c
    sll a0,s1,0x5
    .word 0x26b20088
    .word 0xe4640000
    .word 0xe4630004
    .word 0xe4620008
    .word 0xe461000c
    .word 0x8f8589f0
    .word 0x8ea30118
    .word 0x3c0241f0
    .word 0x44820000
    .word 0x7000b628
    .word 0x26020001
    .word 0xc4a100a0
    .word 0x8c630014
    sltu at,zero,v0
    sub.s $f21,$f1,$f0
    beqz at,L2525e8
    addu s3,v1,a0
    neg.s $f22,$f21
L252398:
    jal func_00189710
    .word 0x8ea40084
    .word 0xae420000
    .word 0x8e430000
    .word 0xac600010
    .word 0xe4740014
    .word 0x8c62000c
    .word 0x34420001
    .word 0xac62000c
    .word 0x8e620008
    andi v0,v0,0x1
    beqz v0,L2523d8
    nop
    .word 0x3c02002f
    b L2523e0
    .word 0x245489b0
L2523d8:
    .word 0x3c02002e
    .word 0x245406c0
L2523e0:
    .word 0x8f8489f0
    .word 0x8e650004
    addiu a3,zero,2
    .word 0x3c063f80
    .word 0x3c033f00
    .word 0x8c840010
    .word 0x3c02c080
    .word 0xafa700c0
    .word 0xafa600c4
    .word 0xafa300c8
    .word 0xafa200cc
    .word 0xafa000d0
    .word 0xafa400ec
    jal func_00182e50
    .word 0xafa500f0
    .word 0x27a200f4
    .word 0xe4400000
    .word 0x3c034150
    .word 0x44830800
    nop
    .word 0x46000006
    mul.s $f0,$f1,$f0
    .word 0x27a200dc
    .word 0x27a400c0
    .word 0xe7a000d4
    .word 0xafa300d8
    .word 0xc6830000
    .word 0xc6820004
    .word 0xc6810008
    .word 0xc680000c
    .word 0xe4430000
    .word 0xe4420004
    .word 0xe4410008
    .word 0xe440000c
    .word 0x8f8389f0
    .word 0x8ea2002c
    .word 0x8e460000
    .word 0x8c650000
    jal func_00189050
    .word 0x24470001
    .word 0xae420004
    .word 0x8e430004
    .word 0xc4600020
    c.le.s $f0,$f21
    nop
    bc1t L2524c0
    nop
    sub.s $f2,$f0,$f21
    .word 0x3c023f80
    .word 0x44820800
    .word 0xc4600018
    mul.s $f1,$f1,$f2
    add.s $f0,$f0,$f1
    .word 0xe4600018
    b L2524f0
    .word 0xe4750020
L2524c0:
    c.lt.s $f0,$f22
    nop
    bc1f L2524f0
    nop
    add.s $f2,$f0,$f21
    .word 0x3c023f80
    .word 0x44820800
    .word 0xc4600018
    mul.s $f1,$f1,$f2
    add.s $f0,$f0,$f1
    .word 0xe4600018
    .word 0xe4760020
L2524f0:
    .word 0x8f8289f0
    .word 0x8e460000
    .word 0x8ea7002c
    .word 0x8c450000
    jal func_00189050
    .word 0x27a40110
    .word 0xae420008
    .word 0x8e440004
    .word 0x3c024080
    .word 0x44801800
    .word 0x44821000
    .word 0xc4800020
    c.lt.s $f0,$f3
    nop
    bc1f L252540
    .word 0x8e430008
    .word 0x3c02bf80
    .word 0x44820000
    nop
    mul.s $f2,$f2,$f0
L252540:
    .word 0xc4810024
    .word 0x44800000
    nop
    c.lt.s $f1,$f0
    nop
    bc1f L252570
    nop
    .word 0x3c02bf80
    .word 0x44820000
    nop
    mul.s $f3,$f3,$f0
    nop
L252570:
    .word 0xc4800018
    .word 0x2602ffff
    sub.s $f0,$f0,$f2
    .word 0xe4600018
    .word 0xc480001c
    sub.s $f0,$f0,$f3
    .word 0xe460001c
    .word 0xc4800020
    add.s $f0,$f0,$f2
    add.s $f0,$f2,$f0
    .word 0xe4600020
    .word 0xc4800024
    add.s $f0,$f0,$f3
    add.s $f0,$f3,$f0
    bne s1,v0,L2525c0
    .word 0xe4600024
    .word 0x8ea20118
    .word 0x8c530014
    b L2525c8
    .word 0x70008e28
L2525c0:
    .word 0x26310001
    .word 0x26730020
L2525c8:
    .word 0x3c024170
    .word 0x44820000
    .word 0x26d60001
    add.s $f20,$f20,$f0
    .word 0x26020001
    sltu v0,s6,v0
    bnez v0,L252398
    .word 0x2652000c
L2525e8:
    .word 0x3c023dcc
    .word 0x3443cccd
    .word 0x27a20180
    .word 0xac430000
    .word 0x3c023d75
    .word 0x27b60184
    .word 0x3442c28f
    .word 0xaec20000
    .word 0x27b40188
    .word 0x27b2018c
    .word 0xae800000
    .word 0x27b30190
    .word 0xae400000
    .word 0xae600000
    .word 0x27a20164
    .word 0xafa00160
    .word 0xac400000
    .word 0x27a20168
    .word 0x3c034170
    .word 0xac430000
    .word 0x27b1017c
    .word 0xae370000
    .word 0x3c020019
    .word 0x8ea40084
    .word 0x26a70100
    .word 0x27a50160
    jal func_001895d0
    .word 0x2446b790
    .word 0xaea20100
    sltu v0,zero,s7
    xori v1,v0,0x1
    addiu v0,zero,4
    .word 0xafa20160
    .word 0x27a20164
    .word 0x3c043f80
    .word 0xac440000
    .word 0x27a20168
    .word 0xac440000
    .word 0x27a2016c
    .word 0xac440000
    .word 0x3c0238d1
    .word 0x27b70170
    .word 0x3442b717
    .word 0xaee20000
    .word 0xae230000
    .word 0x3c020019
    .word 0x8ea40088
    .word 0x26a7010c
    .word 0x27a50160
    jal func_001895d0
    .word 0x2446b790
    .word 0xaea2010c
    .word 0x8e230000
    sll v0,s0,0x1
    addu v0,v0,s0
    sll v0,v0,0x2
    addu v0,v0,s5
    sltu v1,zero,v1
    xori v1,v1,0x1
    .word 0xae230000
    .word 0x8c440088
    .word 0x26a70110
    .word 0x27a50160
    .word 0x3c020019
    jal func_001895d0
    .word 0x2446b790
    .word 0xaea20110
    .word 0x3c023d75
    .word 0x3443c28f
    .word 0x27a20180
    .word 0xac430000
    addiu a0,zero,1
    .word 0xaec00000
    .word 0xae840000
    .word 0xae400000
    addiu v0,zero,8
    .word 0xae600000
    .word 0xafa20160
    .word 0x27a20164
    .word 0x3c034200
    .word 0xac430000
    .word 0x27a20168
    .word 0xac400000
    .word 0x3c01002e
    .word 0xc42106a0
    sll v0,s8,0x1
    addu v0,v0,s8
    sll v0,v0,0x2
    addu v1,v0,s5
    .word 0x3c01002e
    .word 0xc42006c0
    .word 0x3c020019
    .word 0x2446b790
    .word 0x27a2016c
    div.s $f0,$f1,$f0
    .word 0x3c01002e
    .word 0x26a70108
    .word 0xe4400000
    .word 0xc42106a4
    .word 0x3c01002e
    .word 0xc42006c4
    div.s $f0,$f1,$f0
    .word 0x3c01002e
    .word 0xe6e00000
    .word 0xc42306a8
    .word 0x3c01002e
    .word 0xc42206c8
    .word 0x3c01002e
    .word 0xc42106ac
    div.s $f2,$f3,$f2
    .word 0x3c01002e
    .word 0xc42006cc
    div.s $f0,$f1,$f0
    .word 0xe7a20174
    .word 0xe7a00178
    .word 0xae240000
    .word 0x8c640088
    jal func_001895d0
    .word 0x27a50160
    .word 0xaea20108
    .word 0x3c023d75
    .word 0x3443c28f
    .word 0x27a20180
    .word 0xac430000
    .word 0x3c023e23
    .word 0x3442d70a
    .word 0xaec20000
    addiu v0,zero,2
    .word 0xae820000
    .word 0x8fa200b0
    .word 0xae400000
    .word 0xae600000
    .word 0x8e240000
    .word 0x26a70104
    .word 0x00021840
    addu v0,v1,v0
    sll v0,v0,0x2
    sltu v1,zero,a0
    xori v1,v1,0x1
    addu v0,v0,s5
    .word 0xae230000
    .word 0x8c440088
    .word 0x27a50160
    .word 0x3c020019
    jal func_001895d0
    .word 0x2446b790
    .word 0xaea20104
    .word 0x7bbf00a0
    .word 0x7bbe0090
    .word 0x7bb70080
    .word 0x7bb60070
    .word 0x7bb50060
    .word 0x7bb40050
    .word 0x7bb30040
    .word 0x7bb20030
    .word 0x7bb10020
    .word 0x7bb00010
    .word 0xc7b60008
    .word 0xc7b50004
    .word 0xc7b40000
    jr ra
    .word 0x27bd01a0
}


