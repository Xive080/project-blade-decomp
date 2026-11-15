extern void func_002432e0(void);
extern void func_0016b090(void);
extern void func_001b92a0(void);
extern void func_0013b550(void);
asm void func(void) {
    .set noreorder
    addiu sp,sp,-80
    .word 0x7fbf0030
    .word 0x7fb20020
    .word 0x7fb10010
    paddub s2,a0,zero
    jal func_002432e0
    .word 0x7fb00000
    .word 0x8e44000c
    addiu v0,zero,21
    beq a0,v0,L2257c0
    nop
    addiu v0,zero,8
    beq a0,v0,L225790
    nop
    addiu v0,zero,9
    beq a0,v0,L2257e8
    addiu v0,zero,1
    addiu v1,zero,5
    beq a0,v1,L2252ac
    nop
    addiu v0,zero,14
    beq a0,v0,L22527c
    nop
    addiu v0,zero,16
    beq a0,v0,L22527c
    nop
    addiu v0,zero,23
    beq a0,v0,L225160
    .word 0x3c017000
    addiu v0,zero,18
    beq a0,v0,L22511c
    .word 0x3c017000
    addiu v0,zero,15
    beq a0,v0,L225118
    nop
    addiu v0,zero,20
    beq a0,v0,L2250e0
    nop
    b L2257e4
    nop
L2250e0:
    .word 0x3c02002e
    addiu a0,v0,26400
    .word 0xc4830000
    .word 0xc4820004
    .word 0xc4810008
    .word 0x3c020030
    addiu v1,v0,-23668
    .word 0xc480000c
    addiu v0,zero,1
    .word 0xe4630000
    .word 0xe4620004
    .word 0xe4610008
    b L2257e8
    .word 0xe460000c
L225118:
    .word 0x3c017000
L22511c:
    .word 0x8c233fd0
    addiu v0,zero,5
    beq v1,v0,L2257e4
    nop
    jal func_0016b090
    nop
    bnez v0,L2257e4
    nop
    .word 0x8e420000
    addiu a1,zero,7
    paddub a0,s2,zero
    .word 0x8c420004
    jalr ra,v0
    .word 0x70003628
    b L2257ec
    .word 0x7bbf0030
    .word 0x3c017000
L225160:
    .word 0xc4213fb4
    .word 0xc640004c
    .word 0x3c023fa0
    .word 0x44821000
    sub.s $f1,$f1,$f0
    c.le.s $f1,$f2
    nop
    bc1t L2251f8
    nop
    .word 0x3c017000
    .word 0x8c223fd0
    beq v0,v1,L2257e4
    nop
    jal func_0016b090
    nop
    bnez v0,L2257e4
    nop
    .word 0x3c023f80
    .word 0x3c010030
    .word 0xac22a55c
    .word 0x3c017000
    .word 0x8c233ffc
    .word 0x3c02afbf
    ori v0,v0,0xcfdf
    bne v1,v0,L2251d8
    nop
    .word 0x3c010030
    .word 0xc420a55c
    .word 0x3c017000
    .word 0xe4203fac
L2251d8:
    .word 0x8e420000
    addiu a1,zero,7
    paddub a0,s2,zero
    .word 0x8c420004
    jalr ra,v0
    .word 0x70003628
    b L2257e8
    nop
L2251f8:
    c.lt.s $f1,$f2
    nop
    bc1f L225228
    nop
    nop
    nop
    div.s $f1,$f1,$f2
    .word 0x3c023f80
    mul.s $f1,$f1,$f1
    .word 0x44820000
    b L22522c
    sub.s $f1,$f0,$f1
L225228:
    .word 0x44800800
L22522c:
    .word 0x3c027000
    ori v0,v0,0x3fac
    .word 0xc4400000
    c.le.s $f0,$f1
    nop
    bc1t L2257e4
    nop
    .word 0x3c010030
    .word 0xe421a55c
    .word 0x3c017000
    .word 0x8c233ffc
    .word 0x3c02afbf
    ori v0,v0,0xcfdf
    bne v1,v0,L2257e4
    nop
    .word 0x3c010030
    .word 0xc420a55c
    .word 0x3c017000
    b L2257e4
    .word 0xe4203fac
L22527c:
    jal func_0016b090
    nop
    bnez v0,L2257e4
    nop
    .word 0x8e420000
    addiu a1,zero,7
    paddub a0,s2,zero
    .word 0x8c420004
    jalr ra,v0
    .word 0x70003628
    b L2257e8
    nop
L2252ac:
    .word 0x3c020030
    addiu s1,v0,28544
    addiu s0,s1,664
    .word 0x3c020033
    addiu a0,v0,-26768
    paddub a1,s0,zero
    jal func_001b92a0
    paddub a2,s1,zero
    .word 0x8e430048
    beqz v1,L225358
    nop
    .word 0xc6410008
    .word 0x44800000
    nop
    c.eq.s $f1,$f0
    nop
    bc1f L225358
    nop
    .word 0x3c010030
    .word 0x8c2370d8
    bnez v1,L225360
    andi v1,v0,0x7
    .word 0x3c010030
    .word 0x8c2371f4
    beqz v1,L22535c
    nop
    .word 0x3c010030
    .word 0x8c226f84
    addiu a1,zero,14
    ori v0,v0,0x4000
    .word 0x3c010030
    .word 0xac226f84
    .word 0x3c010030
    .word 0x8c227534
    ori v0,v0,0x4000
    .word 0x3c010030
    .word 0xac227534
    .word 0x8e420000
    .word 0x8c420018
    jalr ra,v0
    paddub a0,s2,zero
    b L2257e8
    nop
L225358:
    .word 0xae400048
L22535c:
    andi v1,v0,0x7
L225360:
    beqz v1,L2254e0
    nop
    andi v1,v0,0x40
    beqz v1,L2253a4
    andi v1,v0,0x20
    .word 0x9202030e
    bnez v0,L2254d4
    nop
    .word 0x8e420000
    addiu a1,zero,11
    paddub a0,s2,zero
    .word 0x8c420004
    jalr ra,v0
    .word 0x70003628
    b L2254d8
    .word 0xae400050
    andi v1,v0,0x20
L2253a4:
    beqzl v1,L225414
    andi v0,v0,0x10
    .word 0x9202030c
    bnez v0,L2254d4
    nop
    .word 0x9202030d
    bnez v0,L2254d4
    nop
    .word 0x8e420000
    addiu a1,zero,10
    paddub a0,s2,zero
    .word 0x8c420004
    jalr ra,v0
    .word 0x70003628
    addiu v0,zero,1
    .word 0xae420040
    addiu v0,zero,4
    .word 0xae420060
    .word 0x3c010033
    .word 0x9023a578
    .word 0x3c010033
    .word 0x9022a579
    addu v0,v1,v0
    .word 0xae420038
    .word 0xae20059c
    b L2254d4
    .word 0xae2005a0
    andi v0,v0,0x10
L225414:
    beqz v0,L2254d4
    nop
    .word 0x9202030d
    bnez v0,L225480
    nop
    .word 0x9202030c
    bnez v0,L2254d4
    nop
    .word 0x8e420000
    addiu a1,zero,10
    paddub a0,s2,zero
    .word 0x8c420004
    jalr ra,v0
    .word 0x70003628
    addiu v0,zero,1
    .word 0xae420040
    addiu v0,zero,4
    .word 0xae420060
    .word 0x3c010033
    .word 0x9023a578
    .word 0x3c010033
    .word 0x9022a579
    addu v0,v1,v0
    .word 0xae420038
    .word 0xae20059c
    b L2254d4
    .word 0xae2005a0
L225480:
    .word 0x9202030c
    slti at,v0,2
    beqz at,L2254d4
    nop
    .word 0x8e020000
    andi v0,v0,0x2
    bnez v0,L2254d4
    nop
    .word 0x8e420000
    addiu a1,zero,9
    paddub a0,s2,zero
    .word 0x8c420004
    jalr ra,v0
    .word 0x70003628
    addiu v0,zero,3
    .word 0xae420060
    .word 0x3c010033
    .word 0x9022a578
    .word 0xae420038
    .word 0xae20059c
    .word 0xae2005a0
L2254d4:
    .word 0xae400050
L2254d8:
    b L2256e4
    .word 0x8e420044
L2254e0:
    .word 0x8f8484ac
    beqz a0,L225508
    .word 0x70001628
    .word 0x8c820010
    addiu a2,sp,64
    jalr ra,v0
    addiu a1,zero,7
    b L225508
    nop
    .word 0x70001628
L225508:
    beqz v0,L2256e0
    nop
    .word 0xc7a10040
    .word 0x3c023f80
    .word 0x44820000
    nop
    c.le.s $f1,$f0
    nop
    bc1t L2256e0
    nop
    .word 0x3c027000
    ori v0,v0,0x3fa8
    .word 0xc4410000
    .word 0xc6400050
    .word 0x3c017000
    .word 0x3c0241a0
    add.s $f0,$f0,$f1
    .word 0xe6400050
    .word 0xc6410054
    .word 0xc4203fa8
    .word 0x44821000
    add.s $f0,$f1,$f0
    .word 0xe6400054
    .word 0xc6400050
    c.le.s $f0,$f2
    nop
    bc1t L2255c8
    nop
    .word 0x8e22059c
    beqz v0,L2255c0
    nop
    .word 0x8c50005c
    beqz s0,L2255c0
    nop
    .word 0x8f848328
    jal func_0013b550
    .word 0x70002e28
    beq s0,v0,L2255c0
    nop
    .word 0x8f8484ac
    beqz a0,L2255c0
    nop
    .word 0x8c820010
    addiu a1,zero,8
    jalr ra,v0
    paddub a2,s0,zero
L2255c0:
    b L2256e0
    .word 0xae400050
L2255c8:
    .word 0x8e420000
    addiu a2,sp,76
    paddub a0,s2,zero
    .word 0x8c420010
    jalr ra,v0
    .word 0x70002e28
    .word 0xc7a1004c
    .word 0x3c0241a0
    .word 0x44820000
    nop
    c.lt.s $f1,$f0
    nop
    bc1f L225650
    nop
    .word 0xc6410054
    .word 0x3c024170
    .word 0x44820000
    nop
    c.le.s $f1,$f0
    nop
    bc1t L225650
    nop
    .word 0x8f848328
    jal func_0013b550
    addiu a1,zero,517
    .word 0x8f8484ac
    beqz a0,L225648
    nop
    paddub a2,v0,zero
    .word 0x8c820010
    jalr ra,v0
    addiu a1,zero,8
L225648:
    b L2256e0
    .word 0xae400054
L225650:
    .word 0xc7a10040
    .word 0x3c024170
    .word 0x44820000
    nop
    c.le.s $f1,$f0
    nop
    bc1t L2256e0
    nop
    .word 0x3c010030
    .word 0x9023a61f
    addiu v0,zero,1
    bne v1,v0,L2256e0
    nop
    .word 0x92430058
    .word 0x3c02002e
    addiu v0,v0,26368
    sll v1,v1,0x2
    addu v0,v0,v1
    .word 0x8c450000
    jal func_0013b550
    .word 0x8f848328
    .word 0x8f8484ac
    beqz a0,L2256c0
    nop
    paddub a2,v0,zero
    .word 0x8c820010
    jalr ra,v0
    addiu a1,zero,8
L2256c0:
    .word 0x92430058
    addiu v0,zero,5
    bne v1,v0,L2256dc
    addiu v0,v1,1
    b L2256e0
    .word 0xa2400058
    addiu v0,v1,1
L2256dc:
    .word 0xa2420058
L2256e0:
    .word 0x8e420044
L2256e4:
    beqz v0,L2257e4
    nop
    .word 0x3c017000
    .word 0xc4213fb4
    .word 0xc640004c
    .word 0x3c023fa0
    .word 0x44821000
    sub.s $f0,$f1,$f0
    c.le.s $f0,$f2
    nop
    bc1t L225750
    nop
    .word 0xae400044
    .word 0x3c023f80
    .word 0x3c010030
    .word 0xac22a55c
    .word 0x3c017000
    .word 0x8c233ffc
    .word 0x3c02afbf
    ori v0,v0,0xcfdf
    bne v1,v0,L2257e4
    nop
    .word 0x3c010030
    .word 0xc420a55c
    .word 0x3c017000
    b L2257e4
    .word 0xe4203fac
L225750:
    nop
    nop
    div.s $f0,$f0,$f2
    .word 0x3c010030
    .word 0x3c02afbf
    ori v0,v0,0xcfdf
    .word 0xe420a55c
    .word 0x3c017000
    .word 0x8c233ffc
    bne v1,v0,L2257e4
    nop
    .word 0x3c010030
    .word 0xc420a55c
    .word 0x3c017000
    b L2257e4
    .word 0xe4203fac
L225790:
    jal func_0016b090
    nop
    bnez v0,L2257e4
    nop
    .word 0x8e420000
    addiu a1,zero,7
    paddub a0,s2,zero
    .word 0x8c420004
    jalr ra,v0
    .word 0x70003628
    b L2257e4
    nop
L2257c0:
    jal func_0016b090
    nop
    bnez v0,L2257e4
    nop
    .word 0x8e420000
    addiu a1,zero,22
    .word 0x8c420018
    jalr ra,v0
    paddub a0,s2,zero
L2257e4:
    addiu v0,zero,1
L2257e8:
    .word 0x7bbf0030
L2257ec:
    .word 0x7bb20020
    .word 0x7bb10010
    .word 0x7bb00000
    jr ra
    addiu sp,sp,80
}


