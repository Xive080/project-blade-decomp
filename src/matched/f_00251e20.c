extern void func_0024b410(void);
extern void func_0024b400(void);
extern void func_0024b3f0(void);
extern void func_0024b220(void);
extern void func_0024b3c0(void);
extern void func_0024b3a0(void);
extern void func_0024bc40(void);
extern void func_0024bc30(void);
extern void func_0024bc20(void);
extern void func_0024bc00(void);
extern void func_00189710(void);
extern void func_00234ff0(void);
extern void func_0011a398(void);
extern void func_00119ff8(void);
extern void func_00188ff0(void);
extern void func_00182e50(void);
extern void func_00189050(void);
asm void func(void) {
    .set noreorder
    addiu sp,sp,-160
    .word 0x7fbf0040
    .word 0x7fb20030
    .word 0x7fb10020
    .word 0x7fb00010
    .word 0xe7b40000
    .word 0x8f8389f0
    .word 0x3c024181
    ori v0,v0,0x9999
    .word 0x44821000
    paddub s1,a1,zero
    .word 0x3c024100
    .word 0xc46300bc
    .word 0xc46100a0
    .word 0x44820000
    addiu a1,zero,1
    paddub s2,a0,zero
    add.s $f13,$f2,$f3
    jal func_0024b410
    add.s $f12,$f0,$f1
    .word 0x8f8389f0
    .word 0x8c6200c0
    beqz v0,L251edc
    nop
    .word 0x8c620000
    .word 0x8e43002c
    .word 0x8c420084
    addiu a0,v1,1
    sll v1,a0,0x2
    addu v1,v1,a0
    sll v1,v1,0x2
    addu v1,v0,v1
    .word 0x8c620000
    ori v0,v0,0xa0
    .word 0xac620000
    .word 0x8f8289f0
    .word 0x8e43002c
    .word 0x8c440000
    sll v0,v1,0x2
    addu v0,v0,v1
    sll v1,v0,0x2
    .word 0x8c820084
    addu v1,v0,v1
    .word 0x8c620000
    ori v0,v0,0x60
    b L251f34
    .word 0xac620000
L251edc:
    .word 0x8c620000
    .word 0x8e43002c
    .word 0x8c420084
    addiu a0,v1,1
    sll v1,a0,0x2
    addu v1,v1,a0
    sll v1,v1,0x2
    addu v1,v0,v1
    .word 0x8c620000
    ori v0,v0,0x80
    .word 0xac620000
    .word 0x8f8289f0
    .word 0x8e43002c
    .word 0x8c440000
    sll v0,v1,0x2
    addu v0,v0,v1
    sll v1,v0,0x2
    .word 0x8c820084
    addu v1,v0,v1
    .word 0x8c620000
    ori v0,v0,0x40
    .word 0xac620000
L251f34:
    .word 0x8e42002c
    paddub a0,s2,zero
    addiu a1,v0,1
    jal func_0024b400
    paddub a2,a1,zero
    .word 0x8e42002c
    paddub a0,s2,zero
    addiu a1,v0,1
    jal func_0024b3f0
    paddub a2,a1,zero
    .word 0x8e44002c
    jal func_0024b220
    .word 0x70002e28
    .word 0xae420090
    .word 0x3c023f80
    .word 0x44828000
    .word 0x3c023f33
    ori v0,v0,0x3333
    .word 0x44826000
    .word 0x3c023e99
    ori v0,v0,0x999a
    .word 0x44826800
    .word 0x3c02c3d6
    ori v0,v0,0x6667
    .word 0x44827000
    .word 0x3c024000
    .word 0x44827800
    jal func_0024b3c0
    paddub a0,s2,zero
    .word 0x3c023f19
    ori v0,v0,0x999a
    .word 0x44826000
    .word 0x3c023e4c
    ori v0,v0,0xcccd
    .word 0x44826800
    jal func_0024b3a0
    paddub a0,s2,zero
    jal func_0024bc40
    paddub a0,s2,zero
    jal func_0024bc30
    paddub a0,s2,zero
    jal func_0024bc20
    paddub a0,s2,zero
    .word 0x3c024190
    .word 0x44826000
    .word 0x44806800
    .word 0x3c024210
    .word 0x44827000
    jal func_0024bc00
    paddub a0,s2,zero
    jal func_00189710
    .word 0x8e440028
    jal func_00234ff0
    .word 0xae420084
    andi v0,v0,0x1fff
    .word 0x44820000
    .word 0x3c043f80
    cvt.s.w $f2,$f0
    .word 0x3c02457f
    ori a1,v0,0xf800
    .word 0x3c023fcc
    ori v1,v0,0xcccd
    .word 0x3c023c8e
    .word 0x44850800
    .word 0x44840000
    nop
    div.s $f1,$f2,$f1
    ori v0,v0,0xfa35
    .word 0x8e500084
    sub.s $f2,$f1,$f0
    .word 0x44830800
    .word 0x44820000
    nop
    mul.s $f1,$f1,$f2
    mul.s $f20,$f0,$f1
    jal func_0011a398
    .word 0x4600a306
    .word 0x4600a306
    jal func_00119ff8
    .word 0x46000506
    .word 0xe6000018
    neg.s $f1,$f20
    .word 0xe601001c
    .word 0xe6140020
    .word 0xe6000024
    .word 0x8e02000c
    ori v0,v0,0x2
    .word 0xae02000c
    .word 0x8e440088
    beqz a0,L2520b0
    nop
    jal func_00188ff0
    nop
    jal func_00188ff0
    .word 0x8e44008c
L2520b0:
    .word 0x92220004
    beqz v0,L2520c8
    nop
    .word 0x3c02002f
    b L2520d0
    addiu s0,v0,-30288
L2520c8:
    .word 0x3c02002e
    addiu s0,v0,1696
L2520d0:
    .word 0x92230005
    beqz v1,L2520ec
    .word 0x8e250000
    .word 0x3c0241c8
    .word 0x4482a000
    b L2520f4
    nop
L2520ec:
    .word 0x3c024210
    .word 0x4482a000
L2520f4:
    beqz v1,L252108
    nop
    .word 0x8f8289f0
    b L252114
    .word 0x8c440008
L252108:
    .word 0x8f8289f0
    .word 0x8c440004
    nop
L252114:
    addiu v0,zero,2
    .word 0xafa20050
    .word 0xafa00054
    .word 0x3c023f00
    .word 0xafa20058
    .word 0xafa0005c
    .word 0xafa00060
    .word 0xafa4007c
    jal func_00182e50
    .word 0xafa50080
    addiu v0,sp,132
    .word 0xe4400000
    mul.s $f0,$f20,$f0
    addiu s1,sp,108
    addiu a0,sp,80
    .word 0xe7a00064
    .word 0xe7b40068
    .word 0xc6030000
    .word 0xc6020004
    .word 0xc6010008
    .word 0xc600000c
    .word 0xe6230000
    .word 0xe6220004
    .word 0xe6210008
    .word 0xe620000c
    .word 0x8f8389f0
    .word 0x8e42002c
    .word 0x8e460084
    .word 0x8c650000
    jal func_00189050
    addiu a3,v0,1
    .word 0xae420088
    .word 0x3c02002e
    addiu v0,v0,1712
    .word 0xc4430000
    .word 0xc4420004
    .word 0xc4410008
    .word 0xc440000c
    .word 0xe6230000
    .word 0xe6220004
    .word 0xe6210008
    .word 0xe620000c
    .word 0x8f8289f0
    .word 0x8e460084
    .word 0x8e47002c
    .word 0x8c450000
    jal func_00189050
    addiu a0,sp,80
    .word 0xae42008c
    .word 0x7bbf0040
    .word 0x7bb20030
    .word 0x7bb10020
    .word 0x7bb00010
    .word 0xc7b40000
    jr ra
    addiu sp,sp,160
}


