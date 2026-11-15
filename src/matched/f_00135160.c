extern void func_00135b10(void);
extern void func_00149e60(void);
extern void func_001c3b70(void);
extern void func_001c3b80(void);
extern void func_001c7320(void);
extern void func_001c7610(void);
extern void func_001ce3f0(void);
asm void f(void) {
    .set noreorder
    .set noat
    addiu sp,sp,-112
    .word 0x7fbf0050
    .word 0x7fb30040
    .word 0x7fb20030
    .word 0x7fb10020
    .word 0x7fb00010
    .word 0xe7b50004
    .word 0x70809e28
    jal func_00149e60
    .word 0xe7b40000
    .word 0x8c420018
    jalr ra,v0
    .word 0x8e640008
    beqz v0,L135aa4
    nop
    jal func_001c3b70
    .word 0x70402628
    .word 0x70408628
    .word 0x70008e28
    jal func_00149e60
    .word 0x70009628
    .word 0x8c420028
    .word 0x8e640008
    jalr ra,v0
    addiu a1,zero,2
    .word 0xc6010030
    .word 0xc4400030
    addiu v1,sp,96
    sub.s $f0,$f1,$f0
    .word 0xe6600100
    .word 0xc6010034
    .word 0xc4400034
    sub.s $f0,$f1,$f0
    .word 0xe6600104
    .word 0xc4400038
    .word 0xc6010038
    sub.s $f0,$f1,$f0
    .word 0xe6600108
    .word 0xc66200b8
    .word 0xc66100bc
    .word 0xc66000c0
    .word 0xe4620000
    .word 0xe4610004
    .word 0xe4600008
    .word 0x8e640070
    beqz a0,L135270
    .word 0x3c027000
    .word 0x8e620074
    .word 0x8c42000c
    andi v0,v0,0x20
    beqz v0,L135240
    nop
    jal func_001c3b80
    .word 0x8e64012c
    b L13525c
    addiu a0,sp,96
L135240:
    .word 0x8c82000c
    .word 0x8c420018
    jalr ra,v0
    nop
    jal func_001c3b70
    .word 0x70402628
    addiu a0,sp,96
L13525c:
    addiu a2,zero,1
    .word 0x70403e28
    jal func_001ce3f0
    .word 0x70802e28
    .word 0x3c027000
L135270:
    ori v0,v0,0x3fa8
    .word 0xc4400000
    .word 0xc66100a0
    .word 0x8e6300b4
    addiu v0,zero,4
    beq v1,v0,L1352c8
    mul.s $f20,$f1,$f0
    .word 0x3c0243e1
    .word 0x44820000
    nop
    c.eq.s $f0,$f1
    nop
    bc1f L13532c
    addiu v0,zero,5
    .word 0xc66100a4
    .word 0x3c02c220
    .word 0x44820000
    nop
    c.eq.s $f0,$f1
    nop
    bc1f L135328
    nop
L1352c8:
    .word 0xc663009c
    .word 0x3c0243b4
    .word 0x44821000
    .word 0x3c024234
    .word 0x44820000
    div.s $f1,$f3,$f2
    .word 0x46000864

    cvt.s.w $f1,$f1
    mul.s $f1,$f2,$f1
    sub.s $f1,$f3,$f1
    sub.s $f1,$f0,$f1
    c.lt.s $f1,$f20
    nop
    bc1f L135394
    addiu a0,s3,208
    .word 0x44800000
    nop
    c.lt.s $f1,$f0
    nop
    bc1t L135390
    nop
    addiu s1,zero,1
    b L135390
    mov.s $f20,$f1
L135328:
    addiu v0,zero,5
L13532c:
    bne v1,v0,L135390
    nop
    .word 0xc663009c
    .word 0x3c0243b4
    .word 0x44821000
    .word 0x3c024334
    .word 0x44820000
    div.s $f1,$f3,$f2
    .word 0x46000864

    cvt.s.w $f1,$f1
    mul.s $f1,$f2,$f1
    sub.s $f1,$f3,$f1
    sub.s $f1,$f0,$f1
    c.lt.s $f1,$f20
    nop
    bc1f L135390
    nop
    .word 0x44800000
    nop
    c.lt.s $f1,$f0
    nop
    bc1t L135390
    nop
    addiu s2,zero,1
    mov.s $f20,$f1
L135390:
    addiu a0,s3,208
L135394:
    neg.s $f12,$f20
    addiu a2,zero,2
    jal func_001c7610
    .word 0x70802e28
    .word 0xc6610100
    .word 0xc7a00060
    addiu a0,s3,208
    add.s $f0,$f1,$f0
    .word 0xe6600100
    .word 0xc6610104
    .word 0xc7a00064
    add.s $f0,$f1,$f0
    .word 0xe6600104
    .word 0xc6610108
    .word 0xc7a00068
    add.s $f0,$f1,$f0
    jal func_001c7320
    .word 0xe6600108
    .word 0xc660009c
    .word 0x3c0243e1
    .word 0x44820800
    nop
    add.s $f0,$f0,$f20
    .word 0xe660009c
    .word 0xc66000a0
    c.eq.s $f1,$f0
    nop
    bc1f L135544
    nop
    .word 0xc66100a4
    .word 0x3c02c220
    .word 0x44820000
    nop
    c.eq.s $f0,$f1
    nop
    bc1f L135544
    nop
    beqz s1,L135544
    nop
    .word 0x8e6300b4
    addiu v0,zero,4
    beq v1,v0,L135544
    nop
    .word 0x8e710008
    .word 0x3c050004
    .word 0x8e22003c
    beql v0,a1,L135498
    addiu a1,s3,208
    .word 0x8e220010
    andi v0,v0,0x2
    bnez v0,L135494
    nop
    .word 0x8e22000c
    .word 0x8c420010
    jalr ra,v0
    .word 0x72202628
    beqz v0,L135494
    nop
    .word 0x8e22000c
    addiu a2,zero,1
    .word 0x72202628
    .word 0x8c420014
    jalr ra,v0
    .word 0x3c050004
L135494:
    addiu a1,s3,208
L135498:
    addiu a0,zero,8
L13549c:
    .word 0x8ca30000
    .word 0x8ca20004
    addiu a0,a0,-1
    .word 0xae030000
    .word 0xae020004
    addiu a1,a1,8
    bgtz a0,L13549c
    addiu s0,s0,8
    .word 0xc66000f0
    .word 0x3c0240b1
    ori v1,v0,0xc71d
    .word 0x44830800
    .word 0x8e62000c
    mul.s $f0,$f1,$f0
    .word 0xe440000c
    .word 0xc66000f4
    .word 0x8e62000c
    mul.s $f0,$f1,$f0
    .word 0xe4400010
    .word 0xc66000f8
    .word 0x8e62000c
    mul.s $f0,$f1,$f0
    .word 0xe4400014
    .word 0x8e62000c
    .word 0xac430010
    .word 0x8e640070
    beqz a0,L135528
    .word 0x3c017000
    .word 0x8c82000c
    addiu a2,zero,5
    .word 0x72602e28
    .word 0x8c420020
    jalr ra,v0
    .word 0x70003e28
    .word 0x3c017000
L135528:
    .word 0xc4213fb0
    .word 0x3c0240a0
    .word 0x44820000
    addiu v0,zero,1
    add.s $f0,$f0,$f1
    b L135ae0
    .word 0xe66000ac
L135544:
    .word 0xc660009c
    .word 0x8e630008
    .word 0x3c0243b4
    .word 0x44821000
    .word 0x3c024334
    .word 0x44821800
    .word 0xe4600530
    .word 0xc661009c
    div.s $f0,$f1,$f2
    .word 0x46000024

    cvt.s.w $f0,$f0
    mul.s $f0,$f2,$f0
    sub.s $f1,$f1,$f0
    c.le.s $f1,$f3
    nop
    bc1t L135600
    nop
    .word 0x3c017000
    .word 0xc4203fa8
    .word 0xc66200a0
    mul.s $f0,$f2,$f0
    add.s $f0,$f3,$f0
    c.le.s $f1,$f0
    nop
    bc1f L135600
    nop
    .word 0xc66100a4
    .word 0x3c0243e1
    .word 0x44820000
    nop
    add.s $f1,$f2,$f1
    c.lt.s $f1,$f0
    nop
    bc1f L1355d8
    .word 0xe66100a0
    b L1355f8
    .word 0xae6200a0
L1355d8:
    .word 0x3c024448
    .word 0x44820000
    nop
    c.le.s $f1,$f0
    nop
    bc1tl L1355fc
    .word 0x3c02c220
    .word 0xae6200a0
L1355f8:
    .word 0x3c02c220
L1355fc:
    .word 0xae6200a4
L135600:
    .word 0x8e6300b4
    addiu v0,zero,1
    bne v1,v0,L1356a4
    addiu v0,zero,2
    .word 0x3c020030
    addiu v1,v0,28024
    .word 0x8e640000
    .word 0x3c023e4c
    ori v0,v0,0xcccd
    .word 0x44820800
    sll v0,a0,0x3
    subu v0,v0,a0
    sll a0,v0,0x6
    addu v0,v1,a0
    .word 0xc4400000
    c.le.s $f0,$f1
    nop
    bc1f L135670
    addiu v0,zero,5
    .word 0x3c020030
    addiu v0,v0,28036
    addu v0,v0,a0
    .word 0xc4400000
    c.le.s $f0,$f1
    nop
    bc1t L135674
    nop
    addiu v0,zero,5
L135670:
    .word 0xae6200b4
L135674:
    .word 0xc661009c
    .word 0x3c0243b4
    .word 0x44820000
    nop
    c.le.s $f1,$f0
    nop
    bc1t L135aa4
    nop
    addiu v0,zero,3
    b L135aa4
    .word 0xae6200b4
    addiu v0,zero,2
L1356a4:
    bne v1,v0,L13575c
    addiu v0,zero,3
    .word 0x3c020030
    addiu v1,v0,28024
    .word 0x8e640000
    .word 0x3c023e4c
    ori v0,v0,0xcccd
    .word 0x44820800
    sll v0,a0,0x3
    subu v0,v0,a0
    sll a0,v0,0x6
    addu v0,v1,a0
    .word 0xc4400000
    c.lt.s $f0,$f1
    nop
    bc1f L135710
    nop
    .word 0x3c020030
    addiu v0,v0,28036
    addu v0,v0,a0
    .word 0xc4400000
    c.lt.s $f0,$f1
    nop
    bc1f L135710
    nop
    addiu v0,zero,3
    .word 0xae6200b4
L135710:
    .word 0x3c020030
    addiu v1,v0,28004
    .word 0x8e640000
    .word 0x3c023e4c
    ori v0,v0,0xcccd
    .word 0x44820000
    sll v0,a0,0x3
    subu v0,v0,a0
    sll v0,v0,0x6
    addu v0,v1,v0
    .word 0xc4410000
    c.lt.s $f1,$f0
    nop
    bc1f L135aa4
    nop
    addiu v0,zero,4
    b L135aa4
    .word 0xae6200b4
    addiu v0,zero,3
L13575c:
    bne v1,v0,L135814
    addiu a1,zero,4
    .word 0x3c020030
    addiu v1,v0,28024
    .word 0x8e640000
    .word 0x3c023e4c
    ori v0,v0,0xcccd
    .word 0x44820800
    sll v0,a0,0x3
    subu v0,v0,a0
    sll a0,v0,0x6
    addu v0,v1,a0
    .word 0xc4400000
    c.le.s $f0,$f1
    nop
    bc1f L1357c4
    addiu v0,zero,5
    .word 0x3c020030
    addiu v0,v0,28036
    addu v0,v0,a0
    .word 0xc4400000
    c.le.s $f0,$f1
    nop
    bc1t L1357c8
    nop
    addiu v0,zero,5
L1357c4:
    .word 0xae6200b4
L1357c8:
    .word 0x3c020030
    addiu v1,v0,28004
    .word 0x8e640000
    .word 0x3c023e4c
    ori v0,v0,0xcccd
    .word 0x44820000
    sll v0,a0,0x3
    subu v0,v0,a0
    sll v0,v0,0x6
    addu v0,v1,v0
    .word 0xc4410000
    c.lt.s $f1,$f0
    nop
    bc1f L135aa4
    nop
    addiu v0,zero,4
    b L135aa4
    .word 0xae6200b4
    addiu a1,zero,4
L135814:
    bne v1,a1,L135940
    addiu v0,zero,5
    beqz s1,L135aa4
    nop
    addiu a1,s3,208
    addiu a0,zero,8
L13582c:
    .word 0x8ca30000
    .word 0x8ca20004
    addiu a0,a0,-1
    .word 0xae030000
    .word 0xae020004
    addiu a1,a1,8
    bgtz a0,L13582c
    addiu s0,s0,8
    .word 0xc66000f0
    .word 0x3c024178
    ori v0,v0,0xe38f
    .word 0x44820800
    addiu a1,zero,256
    .word 0x8e62000c
    mul.s $f0,$f1,$f0
    .word 0xe440000c
    .word 0xc66000f4
    .word 0x8e62000c
    mul.s $f0,$f1,$f0
    .word 0xe4400010
    .word 0xc66000f8
    .word 0x8e62000c
    mul.s $f0,$f1,$f0
    .word 0xe4400014
    .word 0x8e700008
    .word 0x8e02003c
    beq v0,a1,L1358dc
    nop
    .word 0x8e020010
    andi v0,v0,0x2
    bnez v0,L1358dc
    nop
    .word 0x8e02000c
    .word 0x8c420010
    jalr ra,v0
    .word 0x72002628
    beqz v0,L1358dc
    nop
    .word 0x8e02000c
    addiu a1,zero,256
    .word 0x72002628
    .word 0x8c420014
    jalr ra,v0
    .word 0x70003628
L1358dc:
    .word 0x8e640070
    beqz a0,L135920
    .word 0x3c017000
    .word 0x8c82000c
    addiu a2,zero,7
    .word 0x72602e28
    .word 0x8c420020
    jalr ra,v0
    .word 0x70003e28
    .word 0x8e640070
    addiu a2,zero,5
    .word 0x72602e28
    .word 0x8c82000c
    .word 0x8c420020
    jalr ra,v0
    .word 0x70003e28
    .word 0x3c017000
L135920:
    .word 0xc4213fb0
    .word 0x3c023f80
    .word 0x44820000
    addiu v0,zero,1
    add.s $f0,$f0,$f1
    b L135ae0
    .word 0xe66000ac
    addiu v0,zero,5
L135940:
    bne v1,v0,L135aa4
    nop
    beqz s2,L135a64
    nop
    .word 0xc662009c
    .word 0x3c0243b4
    .word 0x44821800
    .word 0x3c024334
    .word 0x44820000
    div.s $f1,$f2,$f3
    .word 0x46000864

    cvt.s.w $f1,$f1
    mul.s $f21,$f3,$f1
    sub.s $f1,$f2,$f21
    .word 0xe661009c
    sub.s $f1,$f1,$f0
    c.lt.s $f1,$f20
    nop
    bc1f L135a4c
    nop
    .word 0x44800000
    nop
    c.lt.s $f1,$f0
    nop
    bc1t L135a4c
    nop
    .word 0x8e630098
    .word 0x3c02bf80
    .word 0x44820800
    .word 0x72602628
    sltu v0,zero,v1
    xori v0,v0,0x1
    .word 0xae620098
    .word 0xc660009c
    sub.s $f0,$f3,$f0
    .word 0xe660009c
    .word 0xc66000d0
    mul.s $f0,$f1,$f0
    .word 0xe66000d0
    .word 0xc66000d4
    mul.s $f0,$f1,$f0
    .word 0xe66000d4
    .word 0xc66000d8
    mul.s $f0,$f1,$f0
    jal func_00135b10
    .word 0xe66000d8
    .word 0x8e650014
    .word 0x3c023dcc
    ori a2,v0,0xcccd
    .word 0x3c02bf80
    .word 0x44820800
    .word 0x3c044120
    .word 0xaca6007c
    .word 0x8e620014
    .word 0x3c034270
    .word 0xac440084
    .word 0x8e620014
    .word 0xac430088
    .word 0xc66000f0
    mul.s $f0,$f1,$f0
    .word 0xe66000f0
    .word 0xc66000f4
    mul.s $f0,$f1,$f0
    .word 0xe66000f4
    .word 0xc66000f8
    mul.s $f0,$f1,$f0
    .word 0xe66000f8
L135a4c:
    .word 0xc660009c
    addiu v0,zero,2
    add.s $f0,$f0,$f21
    .word 0xe660009c
    b L135aa4
    .word 0xae6200b4
L135a64:
    .word 0x3c020030
    addiu v1,v0,28004
    .word 0x8e640000
    .word 0x3c023e4c
    ori v0,v0,0xcccd
    .word 0x44820000
    sll v0,a0,0x3
    subu v0,v0,a0
    sll v0,v0,0x6
    addu v0,v1,v0
    .word 0xc4410000
    c.lt.s $f1,$f0
    nop
    bc1f L135aa4
    nop
    .word 0xae6500b4
L135aa4:
    .word 0x8e650000
    .word 0x3c020030
    addiu v1,v0,27992
    .word 0x3c020030
    addiu v0,v0,27996
    sll a0,a1,0x3
    subu a0,a0,a1
    sll a0,a0,0x6
    addu v1,v1,a0
    addu v0,v0,a0
    .word 0xc4610000
    .word 0xc4400000
    sub.s $f0,$f1,$f0
    addiu v0,zero,1
    .word 0xe66000c4
L135ae0:
    .word 0x7bbf0050
    .word 0x7bb30040
    .word 0x7bb20030
    .word 0x7bb10020
    .word 0x7bb00010
    .word 0xc7b50004
    .word 0xc7b40000
    jr ra
    addiu sp,sp,112
}
