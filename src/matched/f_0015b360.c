extern void func_001f79f0(void);
extern void func_0015c2a0(void);
extern void func_0015bcd0(void);
extern void func_00141c60(void);
extern void func_0015bdc0(void);
extern void func_00169860(void);
extern void func_0016a700(void);
asm void func(void) {
    .set noreorder
    addiu sp,sp,-160
    .word 0x7fbf0080
    .word 0x7fb60070
    .word 0x7fb50060
    .word 0x7fb40050
    .word 0x7fb30040
    .word 0x7fb20030
    .word 0x7fb10020
    .word 0x7fb00010
    .word 0xe7b40000
    .word 0x8c831ec8
    addiu v0,zero,-1
    paddub s0,a1,zero
    paddub s6,a2,zero
    beq v1,v0,L15b3b0
    paddub s1,a0,zero
    .word 0x8e221ed0
    slti v0,v0,2
    bnez v0,L15b3d8
    nop
L15b3b0:
    jal func_001f79f0
    nop
    .word 0x8e231ed4
    .word 0x0043001b
    nop
    nop
    mfhi v0
    .word 0xae221ec8
    .word 0xae201ecc
    .word 0xae201ed0
L15b3d8:
    .word 0x8e341ec8
    .word 0x8e221edc
    .word 0xc6261eb4
    .word 0xc6271eb8
    .word 0xc6281ebc
    sll v1,s4,0x4
    addu v1,v1,s4
    sll v1,v1,0x2
    addu s2,v0,v1
    .word 0x8e420008
    .word 0x8e43000c
    sll v0,v0,0x5
    addu v0,v0,v1
    .word 0xc4600000
    .word 0xc442ffe0
    .word 0xc4640004
    .word 0xc441ffe4
    .word 0xc4630008
    sub.s $f5,$f0,$f6
    sub.s $f2,$f2,$f6
    .word 0xc440ffe8
    sub.s $f6,$f1,$f7
    sub.s $f1,$f3,$f8
    sub.s $f4,$f4,$f7
    sub.s $f3,$f0,$f8
    mul.s $f5,$f5,$f5
    mul.s $f4,$f4,$f4
    mul.s $f1,$f1,$f1
    add.s $f0,$f5,$f4
    mul.s $f2,$f2,$f2
    mul.s $f6,$f6,$f6
    add.s $f1,$f1,$f0
    mul.s $f3,$f3,$f3
    add.s $f0,$f2,$f6
    beqz s6,L15b4b0
    add.s $f0,$f3,$f0
    .word 0xc6221ec0
    c.lt.s $f1,$f2
    nop
    bc1t L15b4a8
    addiu s5,zero,1
    c.lt.s $f0,$f2
    nop
    bc1t L15b4a4
    nop
    addiu v0,zero,-1
    .word 0xae221ec8
    .word 0xae201ecc
    .word 0xae201ed0
    b L15b93c
    .word 0x70001628
L15b4a4:
    addiu s5,zero,1
L15b4a8:
    b L15b520
    .word 0x8e420014
L15b4b0:
    .word 0xc6221ec0
    c.le.s $f1,$f2
    nop
    bc1f L15b4dc
    nop
    c.lt.s $f0,$f2
    nop
    bc1t L15b4dc
    nop
    b L15b51c
    addiu s5,zero,1
L15b4dc:
    c.lt.s $f1,$f2
    nop
    bc1t L15b508
    addiu v0,zero,-1
    c.le.s $f0,$f2
    nop
    bc1f L15b504
    nop
    b L15b51c
    .word 0x7000ae28
L15b504:
    addiu v0,zero,-1
L15b508:
    .word 0xae221ec8
    .word 0xae201ecc
    .word 0xae201ed0
    b L15b93c
    .word 0x70001628
L15b51c:
    .word 0x8e420014
L15b520:
    beqz v0,L15b53c
    .word 0x70009e28
    .word 0x8e221ecc
    sltu v0,zero,v0
    b L15b53c
    xori s3,v0,0x1
    .word 0x70009e28
L15b53c:
    addiu a2,sp,156
    paddub a0,s2,zero
    jal func_0015c2a0
    paddub a1,s3,zero
    .word 0x46000506
    .word 0x44800000
    nop
    c.eq.s $f0,$f20
    nop
    bc1f L15b580
    nop
    addiu v0,zero,-1
    .word 0xae221ec8
    .word 0xae201ecc
    .word 0xae201ed0
    b L15b93c
    .word 0x70001628
L15b580:
    beqz s5,L15b5ac
    nop
    .word 0x8fa2009c
    beqz v0,L15b5a0
    .word 0x70003628
    b L15b5a0
    .word 0x8c460144
    .word 0x70003628
L15b5a0:
    .word 0x8e420008
    b L15b5d0
    addiu a3,v0,-2
L15b5ac:
    .word 0x8fa2009c
    beqz v0,L15b5c4
    nop
    .word 0x8c420144
    b L15b5cc
    addiu a2,v0,-1
L15b5c4:
    .word 0x8e420008
    addiu a2,v0,-2
L15b5cc:
    .word 0x70003e28
L15b5d0:
    .word 0xc6010170
    .word 0x3c0240c0
    .word 0x44820000
    paddub t0,s5,zero
    paddub t1,s6,zero
    paddub a0,s1,zero
    add.s $f12,$f0,$f1
    jal func_0015bcd0
    paddub a1,s2,zero
    bgez v0,L15b604
    nop
    b L15b93c
    .word 0x70001628
L15b604:
    .word 0xe6140044
    .word 0xe614003c
    .word 0xe614004c
    .word 0xae000164
    .word 0xae000008
    .word 0xae000014
    .word 0xae00005c
    .word 0x8e030140
    beqz v1,L15b638
    .word 0x3c033f80
    b L15b63c
    .word 0xae00014c
    .word 0x3c033f80
L15b638:
    .word 0xae03014c
L15b63c:
    .word 0x8fa7009c
    beqzl a3,L15b6fc
    .word 0x70003e28
    .word 0x8ce30140
    .word 0x8ce400e4
    addiu a1,a3,336
    sltu v1,zero,v1
    xori v1,v1,0x1
    beqz v1,L15b66c
    addiu a0,a0,28
    b L15b674
    .word 0x8ca50000
L15b66c:
    .word 0x8ca50004
    nop
L15b674:
    beq a1,a0,L15b6e8
    nop
    paddub a2,a3,zero
L15b680:
    .word 0x8e030140
    beqz v1,L15b6a4
    addiu a3,a1,-336
    .word 0x8ce30144
    slt at,v0,v1
    beqz at,L15b6e8
    nop
    b L15b6bc
    .word 0x8cc30140
L15b6a4:
    .word 0x8ce30144
    slt at,v1,v0
    beqz at,L15b6e8
    nop
    nop
    .word 0x8cc30140
L15b6bc:
    sltu v1,zero,v1
    xori v1,v1,0x1
    beqz v1,L15b6d4
    nop
    b L15b6e0
    .word 0x8ca50000
L15b6d4:
    .word 0x8ca50004
    nop
    nop
L15b6e0:
    bne a1,a0,L15b680
    nop
L15b6e8:
    bne a1,a0,L15b6fc
    nop
    b L15b6fc
    .word 0x70003e28
    .word 0x70003e28
L15b6fc:
    .word 0xc60c0044
    .word 0x8e281ec4
    paddub a2,v0,zero
    sltu v0,zero,s3
    addiu t2,zero,1
    paddub a0,s2,zero
    xori t1,v0,0x1
    jal func_00141c60
    paddub a1,s0,zero
    paddub a0,s1,zero
    jal func_0015bdc0
    paddub a1,s0,zero
    .word 0x8e080140
    beqz t0,L15b740
    nop
    b L15b748
    .word 0x8e070144
L15b740:
    .word 0x8e020144
    addiu a3,v0,-1
L15b748:
    .word 0xc60d0048
    .word 0x8e0600e4
    .word 0x44806000
    addiu a0,s0,24
    addiu t1,zero,2
    .word 0x46006b86
    addiu t2,s0,96
    jal func_00169860
    .word 0x70002e28
    .word 0x8e120004
    addiu a1,zero,4
    .word 0x8e42003c
    beq v0,a1,L15b7c0
    nop
    .word 0x8e420010
    andi v0,v0,0x2
    bnez v0,L15b7c0
    nop
    .word 0x8e42000c
    .word 0x8c420010
    jalr ra,v0
    paddub a0,s2,zero
    beqz v0,L15b7c0
    nop
    .word 0x8e42000c
    addiu a1,zero,4
    paddub a0,s2,zero
    .word 0x8c420014
    jalr ra,v0
    .word 0x70003628
L15b7c0:
    .word 0xae00000c
    .word 0x8e03000c
    .word 0x44800000
    sll v0,v1,0x4
    subu v0,v0,v1
    sll v0,v0,0x2
    addu v0,s1,v0
    .word 0xc4411dd0
    c.le.s $f1,$f0
    nop
    bc1t L15b8a8
    addiu s2,v0,7620
    jal func_001f79f0
    nop
    andi v0,v0,0x7fff
    bltz v0,L15b814
    srl v1,v0,0x1
    .word 0x44820000
    b L15b82c
    cvt.s.w $f0,$f0
    srl v1,v0,0x1
L15b814:
    andi v0,v0,0x1
    or v1,v1,v0
    .word 0x44830000
    nop
    cvt.s.w $f0,$f0
    add.s $f0,$f0,$f0
L15b82c:
    .word 0x3c024700
    .word 0x44820800
    .word 0xc6420018
    div.s $f1,$f0,$f1
    .word 0xc640001c
    sub.s $f0,$f0,$f2
    mul.s $f0,$f1,$f0
    add.s $f0,$f2,$f0
    jal func_001f79f0
    .word 0xe600015c
    andi v0,v0,0x7fff
    bltz v0,L15b86c
    .word 0xc6430020
    .word 0x44820000
    b L15b888
    cvt.s.w $f2,$f0
L15b86c:
    srl v1,v0,0x1
    andi v0,v0,0x1
    or v1,v1,v0
    .word 0x44830000
    nop
    cvt.s.w $f2,$f0
    add.s $f2,$f2,$f2
L15b888:
    .word 0x3c024700
    .word 0x44820800
    .word 0xc6400024
    div.s $f1,$f2,$f1
    sub.s $f0,$f0,$f3
    mul.s $f0,$f1,$f0
    add.s $f0,$f3,$f0
    .word 0xe6000158
L15b8a8:
    .word 0xc60c00a0
    addiu a0,s0,96
    addiu a1,s0,24
    jal func_0016a700
    addiu a2,s0,36
    .word 0xc601002c
    .word 0xc6000028
    .word 0x3c023f80
    .word 0x44821800
    .word 0x44801000
    addiu a1,s0,24
    mula.s $f3,$f1
    msub.s $f0,$f2,$f0
    .word 0xe6000030
    .word 0xc6010024
    .word 0xc600002c
    addiu a2,s0,36
    addiu a3,s0,48
    mula.s $f2,$f1
    msub.s $f0,$f2,$f0
    .word 0xe6000034
    .word 0xc6010028
    .word 0xc6000024
    mula.s $f2,$f1
    msub.s $f0,$f3,$f0
    .word 0xe6000038
    .word 0x8e040004
    .word 0x8c82000c
    .word 0x8c42002c
    jalr ra,v0
    addiu t0,zero,1
    .word 0xae341ec8
    .word 0xae331ecc
    .word 0x8e231ed0
    addiu v0,zero,1
    addiu v1,v1,1
    .word 0xae231ed0
L15b93c:
    .word 0x7bbf0080
    .word 0x7bb60070
    .word 0x7bb50060
    .word 0x7bb40050
    .word 0x7bb30040
    .word 0x7bb20030
    .word 0x7bb10020
    .word 0x7bb00010
    .word 0xc7b40000
    jr ra
    addiu sp,sp,160
}


