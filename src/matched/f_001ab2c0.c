extern void func_001c3b70(void);
asm void func(void) {
    .set noreorder
    .set noat
    .word 0x27bdffa0
    .word 0x7fbf0050
    .word 0x7fb40040
    .word 0x7fb30030
    .word 0x7fb20020
    .word 0x7fb10010
    .word 0x7fb00000
    .word 0x8f82853c
    .word 0x7080a628
    .word 0x8c50000c
    .word 0x8e040048
    jal func_001c3b70
    .word 0x70a09e28
    .word 0x8f86853c
    .word 0x70408e28
    .word 0x3c020003
    ori v0,v0,0xa000
    .word 0x8cd20008
    .word 0x8e43003c
    and v0,v1,v0
    beqz v0,L1ab324
    andi v0,s4,0x4
    b L1ab5e4
    .word 0x70001628
    andi v0,s4,0x4
L1ab324:
    beqz v0,L1ab364
    andi v0,s4,0x2
    .word 0x3c017000
    .word 0x8c243fd4
    .word 0x8c820000
    .word 0x8c420004
    jalr ra,v0
    addiu a1,zero,1
    .word 0x8f85853c
    .word 0x3c030040
    .word 0x70001628
    .word 0x8ca40004
    or v1,a0,v1
    b L1ab5e4
    .word 0xaca30004
    andi v0,s4,0x2
L1ab364:
    beqz v0,L1ab484
    nop
    .word 0xc6640000
    .word 0xc6220010
    .word 0xc6630004
    .word 0xc6210014
    .word 0xc6650008
    .word 0xc6200018
    .word 0x3c023f00
    mul.s $f2,$f2,$f4
    mul.s $f1,$f1,$f3
    adda.s $f2,$f1
    madd.s $f1,$f0,$f5
    .word 0x44820000
    nop
    c.lt.s $f1,$f0
    nop
    bc1f L1ab3d4
    nop
    .word 0x3c02bf00
    .word 0x44820000
    nop
    c.le.s $f1,$f0
    nop
    bc1t L1ab3d4
    nop
    b L1ab5e4
    .word 0x70001628
L1ab3d4:
    .word 0x8cc20004
    andi v0,v0,0x200
    beqz v0,L1ab574
    nop
    andi v0,s4,0x200
    bnez v0,L1ab574
    nop
    .word 0xc606000c
    .word 0xc6010010
    .word 0x3c02c0c0
    .word 0x44823800
    .word 0xc6000014
    .word 0x70001628
    mul.s $f2,$f4,$f6
    mul.s $f1,$f3,$f1
    adda.s $f2,$f1
    madd.s $f2,$f5,$f0
    mul.s $f0,$f4,$f2
    sub.s $f0,$f6,$f0
    .word 0xe600000c
    mul.s $f1,$f3,$f2
    .word 0xc6000010
    mul.s $f2,$f5,$f2
    sub.s $f0,$f0,$f1
    .word 0xe6000010
    .word 0xc6000014
    sub.s $f0,$f0,$f2
    .word 0xe6000014
    .word 0xc6600000
    .word 0xc6630004
    .word 0xc6620008
    .word 0xc601000c
    mul.s $f0,$f7,$f0
    add.s $f0,$f1,$f0
    .word 0xe600000c
    .word 0xc6000010
    mul.s $f3,$f7,$f3
    add.s $f0,$f0,$f3
    .word 0xe6000010
    .word 0xc6000014
    mul.s $f2,$f7,$f2
    add.s $f0,$f0,$f2
    b L1ab5e4
    .word 0xe6000014
L1ab484:
    .word 0x8cc20004
    andi v0,v0,0x100
    beqz v0,L1ab574
    nop
    .word 0xc6020010
    .word 0x3c023e4c
    ori v0,v0,0xcccd
    .word 0x44820000
    nop
    c.le.s $f2,$f0
    nop
    bc1f L1ab4d8
    nop
    .word 0x3c02be4c
    ori v0,v0,0xcccd
    .word 0x44820000
    nop
    c.lt.s $f2,$f0
    nop
    bc1f L1ab574
    nop
L1ab4d8:
    .word 0xc6610004
    .word 0x3c023e4c
    ori v0,v0,0xcccd
    .word 0x44820000
    nop
    mul.s $f1,$f1,$f2
    sub.s $f1,$f2,$f1
    c.lt.s $f1,$f0
    nop
    bc1f L1ab574
    nop
    .word 0x3c02be4c
    ori v0,v0,0xcccd
    .word 0x44820000
    nop
    c.le.s $f1,$f0
    nop
    bc1t L1ab574
    nop
    .word 0x8e42003c
    .word 0x3c050004
    beq v0,a1,L1ab574
    nop
    .word 0x8e420010
    andi v0,v0,0x2
    bnez v0,L1ab574
    nop
    .word 0x8e42000c
    .word 0x8c420010
    jalr ra,v0
    .word 0x72402628
    beqz v0,L1ab574
    nop
    .word 0x8e42000c
    .word 0x72402628
    .word 0x3c050004
    .word 0x8c420014
    jalr ra,v0
    .word 0x70003628
L1ab574:
    .word 0xc6250020
    .word 0xc6640000
    .word 0xc6230024
    .word 0xc6620004
    .word 0xc6210028
    .word 0xc6600008
    .word 0x3c02bf00
    mul.s $f4,$f5,$f4
    mul.s $f2,$f3,$f2
    adda.s $f4,$f2
    madd.s $f1,$f1,$f0
    .word 0x44820000
    nop
    c.lt.s $f1,$f0
    nop
    bc1t L1ab5d4
    nop
    .word 0x3c023f00
    .word 0x44820000
    nop
    c.le.s $f1,$f0
    nop
    bc1t L1ab5e4
    addiu v0,zero,3
L1ab5d4:
    .word 0x8f82853c
    .word 0x8c420008
    .word 0xac5416a8
    addiu v0,zero,3
L1ab5e4:
    .word 0x7bbf0050
    .word 0x7bb40040
    .word 0x7bb30030
    .word 0x7bb20020
    .word 0x7bb10010
    .word 0x7bb00000
    jr ra
    .word 0x27bd0060
}
