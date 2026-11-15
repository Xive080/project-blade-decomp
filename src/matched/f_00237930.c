extern void func_001b9240(void);
extern void func_001c3b70(void);
extern void func_00240540(void);
extern void func_0013b550(void);
extern void func_00230d10(void);
asm void func(void) {
    .set noreorder
    addiu sp,sp,-80
    .word 0x7fbf0040
    .word 0x7fb20030
    .word 0x7fb10020
    .word 0x7fb00010
    .word 0xe7b40000
    .word 0x8c8300e8
    .word 0x46006506
    beqz v1,L237ad8
    paddub s1,a0,zero
    .word 0x8e230034
    .word 0x8c70059c
    bnez s0,L237970
    nop
    b L237ad8
    .word 0xae2000b8
L237970:
    .word 0x8e2500b8
    beqz a1,L237a30
    nop
    .word 0x8ca40000
    .word 0x3c020004
    bne a0,v0,L2379ac
    .word 0x3c020008
    .word 0x8ca3003c
    addiu v0,zero,2
    beql v1,v0,L237a20
    paddub a0,s0,zero
    addiu v0,zero,4
    beq v1,v0,L237a1c
    nop
    .word 0x3c020008
L2379ac:
    bne a0,v0,L2379c8
    .word 0x3c020020
    .word 0x8ca3003c
    addiu v0,zero,2
    beq v1,v0,L237a1c
    nop
    .word 0x3c020020
L2379c8:
    bne a0,v0,L237a04
    .word 0x3c020080
    .word 0x8ca3003c
    addiu v0,zero,1024
    beq v1,v0,L237a00
    nop
    addiu v0,zero,8
    beq v1,v0,L237a00
    nop
    addiu v0,zero,32
    beq v1,v0,L237a00
    nop
    bnez v1,L237a1c
    nop
L237a00:
    .word 0x3c020080
L237a04:
    bne a0,v0,L237a30
    nop
    .word 0x8ca3003c
    addiu v0,zero,2
    bne v1,v0,L237a30
    nop
L237a1c:
    paddub a0,s0,zero
L237a20:
    jal func_001b9240
    nop
    bnez v0,L237ad8
    nop
L237a30:
    .word 0x8e220034
    .word 0x8c420008
    .word 0x8c420030
    jal func_001c3b70
    .word 0x8c440004
    .word 0x8e2400e8
    .word 0x8e120060
    addiu a2,v0,48
    jal func_00240540
    paddub a1,s0,zero
    .word 0xae2200b8
    .word 0x8f848328
    jal func_0013b550
    .word 0x70002e28
    bne s2,v0,L237a78
    nop
    b L237a7c
    .word 0xae2000e4
L237a78:
    .word 0xae3200e4
L237a7c:
    .word 0xae2000bc
    .word 0xae2000c0
    .word 0xae2000c4
    .word 0xc62100c8
    .word 0x44800000
    nop
    c.le.s $f1,$f0
    nop
    bc1t L237aa8
    nop
    .word 0xae2000c8
L237aa8:
    .word 0x3c03002e
    addiu v1,v1,30224
    .word 0xae2000cc
    .word 0xc4630000
    .word 0xc4620004
    .word 0xc4610008
    .word 0xc460000c
    .word 0xe62300d0
    .word 0xe62200d4
    .word 0xe62100d8
    .word 0xe62000dc
    .word 0xae2000e0
L237ad8:
    .word 0x8e2300b8
    beqz v1,L237d7c
    nop
    .word 0xc62000cc
    .word 0x44800800
    nop
    sub.s $f0,$f0,$f20
    c.lt.s $f0,$f1
    nop
    bc1f L237b08
    .word 0xe62000cc
    .word 0xae2000cc
L237b08:
    .word 0x8e2300c0
    beqz v1,L237b64
    nop
    .word 0x8e2300c4
    bnez v1,L237b9c
    nop
    .word 0xc62100c8
    .word 0x3c033e00
    .word 0x44830000
    nop
    add.s $f1,$f1,$f20
    c.lt.s $f1,$f0
    nop
    bc1t L237b9c
    .word 0xe62100c8
    addiu v0,zero,1
    .word 0xae2000c8
    .word 0xae2200c4
    paddub a0,s1,zero
    jal func_00230d10
    .word 0x70002e28
    b L237ba0
    .word 0x8e2300c4
L237b64:
    .word 0x8e2300c4
    beqz v1,L237b9c
    nop
    .word 0xc62100c8
    .word 0x3c033e80
    .word 0x44830000
    nop
    add.s $f1,$f1,$f20
    c.lt.s $f1,$f0
    nop
    bc1t L237b9c
    .word 0xe62100c8
    .word 0xae2000c8
    .word 0xae2000c4
L237b9c:
    .word 0x8e2300c4
L237ba0:
    beqz v1,L237c0c
    .word 0x3c033fc0
    .word 0x3c033fc0
    .word 0x44830000
    .word 0xc62100bc
    mul.s $f0,$f0,$f20
    .word 0x3c033f80
    add.s $f0,$f1,$f0
    .word 0x44830800
    nop
    c.le.s $f0,$f1
    nop
    bc1t L237c38
    .word 0xe62000bc
    .word 0xae2300bc
    .word 0xc62100cc
    .word 0x44800000
    nop
    c.eq.s $f0,$f1
    nop
    bc1f L237c38
    nop
    .word 0x3c033e99
    ori v1,v1,0x999a
    b L237c38
    .word 0xae2300cc
    .word 0x3c033fc0
L237c0c:
    .word 0x44830800
    .word 0xc62200bc
    mul.s $f1,$f1,$f20
    sub.s $f1,$f2,$f1
    .word 0x44800000
    nop
    c.lt.s $f1,$f0
    nop
    bc1f L237c38
    .word 0xe62100bc
    .word 0xae2000bc
L237c38:
    .word 0xc62100e0
    .word 0x3c03becc
    ori v1,v1,0xcccd
    .word 0x44831000
    nop
    c.lt.s $f1,$f2
    nop
    bc1t L237c74
    .word 0x3c03bf4c
    .word 0x3c033f80
    .word 0x44802800
    .word 0x44833000
    b L237ccc
    .word 0x3c034055
    .word 0x3c03bf4c
L237c74:
    ori v1,v1,0xcccd
    .word 0x44830000
    nop
    c.le.s $f1,$f0
    nop
    bc1f L237ca8
    sub.s $f0,$f1,$f2
    .word 0xc62600bc
    .word 0x3c033f80
    .word 0x44830000
    b L237cc8
    sub.s $f5,$f0,$f6
    sub.s $f0,$f1,$f2
L237ca8:
    .word 0x3c033f80
    div.s $f0,$f0,$f2
    .word 0xc62100bc
    .word 0x44831000
    nop
    sub.s $f1,$f2,$f1
    mul.s $f5,$f0,$f1
    sub.s $f6,$f2,$f5
L237cc8:
    .word 0x3c034055
L237ccc:
    ori v1,v1,0x5555
    .word 0x3c01002e
    .word 0x44830000
    .word 0xc62700cc
    .word 0xc4227610
    .word 0x3c033f80
    .word 0x44831800
    nop
    sub.s $f3,$f3,$f7
    .word 0x3c01002e
    .word 0xc4217620
    mul.s $f4,$f0,$f7
    .word 0x3c01002e
    mul.s $f6,$f6,$f3
    .word 0xc4207630
    mul.s $f5,$f5,$f3
    .word 0x3c01002e
    mul.s $f2,$f2,$f6
    mul.s $f1,$f1,$f5
    mul.s $f4,$f4,$f4
    adda.s $f2,$f1
    madd.s $f0,$f0,$f4
    .word 0xe62000d0
    .word 0xc4227614
    .word 0x3c01002e
    .word 0xc4217624
    mul.s $f2,$f2,$f6
    .word 0x3c01002e
    .word 0xc4207634
    mul.s $f1,$f1,$f5
    adda.s $f2,$f1
    madd.s $f0,$f0,$f4
    .word 0xe62000d4
    .word 0x3c01002e
    .word 0xc4227618
    .word 0x3c01002e
    .word 0xc4217628
    mul.s $f2,$f2,$f6
    .word 0x3c01002e
    mul.s $f1,$f1,$f5
    .word 0xc4207638
    adda.s $f2,$f1
    madd.s $f0,$f0,$f4
    .word 0xe62000d8
L237d7c:
    .word 0x7bbf0040
    .word 0x7bb20030
    .word 0x7bb10020
    .word 0x7bb00010
    .word 0xc7b40000
    jr ra
    addiu sp,sp,80
}


