extern void func_001ce410(void);
extern void func_00256538(void);
extern void func_0011a510(void);
extern void func_00255940(void);
extern void func_00180cf0(void);
extern void func_00180540(void);
extern void func_0017a070(void);
extern void func_00179ef0(void);
asm void func(void) {
    .set noreorder
    addiu sp,sp,-128
    .word 0x7fbf0050
    .word 0x7fb30040
    .word 0x7fb20030
    .word 0x7fb10020
    .word 0x7fb00010
    .word 0xe7b40000
    .word 0x8c900038
    beqz s0,L180704
    paddub s3,a0,zero
    .word 0x8e030000
    bnez v1,L18070c
    nop
L180704:
    b L180a90
    paddub v0,s3,zero
L18070c:
    .word 0x8f848498
    .word 0x8c82003c
    beqz v0,L180730
    nop
    .word 0x8e02003c
    beqz v0,L180730
    nop
    b L180a90
    paddub v0,s3,zero
L180730:
    beqz s0,L180a90
    paddub v0,s3,zero
    beqz v1,L180a8c
    nop
    beq s0,a0,L180a8c
    nop
    sltu v0,s0,a0
    bnez v0,L180760
    nop
    .word 0x8e02003c
    beqz v0,L180a8c
    nop
L180760:
    .word 0x8f828494
    addiu a0,sp,96
    addiu a2,zero,1
    .word 0xc4420014
    .word 0xc4410018
    .word 0xc440001c
    .word 0xe4820000
    .word 0xe4810004
    .word 0xe4800008
    .word 0x8c420038
    .word 0x8c470038
    jal func_001ce410
    paddub a1,a0,zero
    .word 0x8f838494
    addiu a0,sp,112
    .word 0xc7a00060
    addiu s1,sp,100
    addiu s2,sp,104
    .word 0x8c620038
    addiu a2,zero,1
    .word 0x8c420038
    .word 0xc4410030
    add.s $f0,$f1,$f0
    .word 0xe7a00060
    .word 0x8c620038
    .word 0xc6200000
    .word 0x8c420038
    .word 0xc4410034
    add.s $f0,$f1,$f0
    .word 0xe6200000
    .word 0x8c620038
    .word 0xc6400000
    .word 0x8c420038
    .word 0xc4410038
    add.s $f0,$f1,$f0
    .word 0xe6400000
    .word 0xc6620014
    .word 0xc6610018
    .word 0xc660001c
    .word 0xe4820000
    .word 0xe4810004
    .word 0xe4800008
    .word 0x8e620038
    .word 0x8c470038
    jal func_001ce410
    paddub a1,a0,zero
    .word 0x8e630038
    .word 0xc7a00070
    addiu a2,sp,116
    addiu a3,sp,120
    .word 0x8c630038
    .word 0x3c020008
    .word 0xc4610030
    add.s $f0,$f1,$f0
    .word 0xe7a00070
    .word 0x8e630038
    .word 0xc4c00000
    .word 0x8c630038
    .word 0xc4610034
    add.s $f0,$f1,$f0
    .word 0xe4c00000
    .word 0x8e630038
    .word 0xc4e00000
    .word 0x8c630038
    .word 0xc4610038
    add.s $f0,$f1,$f0
    .word 0xe4e00000
    .word 0xc4c40000
    .word 0xc6200000
    .word 0x8f838494
    .word 0xc7a60070
    .word 0xc7a50060
    .word 0xc4e30000
    .word 0xc6420000
    sub.s $f7,$f4,$f0
    .word 0x8f868498
    .word 0xc6010034
    .word 0x8c630000
    sub.s $f4,$f6,$f5
    .word 0xc4c00034
    sub.s $f5,$f3,$f2
    mul.s $f3,$f4,$f4
    mul.s $f2,$f7,$f7
    adda.s $f3,$f2
    add.s $f20,$f1,$f0
    bne v1,v0,L1808e0
    madd.s $f12,$f5,$f5
    mul.s $f1,$f20,$f20
    .word 0x3c024110
    .word 0x44820000
    nop
    mul.s $f0,$f0,$f1
    c.lt.s $f12,$f0
    nop
    bc1t L180900
    nop
L1808e0:
    .word 0x3c020008
    beq v1,v0,L180a8c
    nop
    mul.s $f0,$f20,$f20
    c.lt.s $f12,$f0
    nop
    bc1f L180a8c
    nop
L180900:
    jal func_00256538
    nop
    jal func_0011a510
    paddub a0,v0,zero
    jal func_00255940
    paddub a0,v0,zero
    c.lt.s $f0,$f20
    nop
    bc1f L18093c
    nop
    .word 0x8f848498
    .word 0x46000306
    .word 0x4600a346
    jal func_00180cf0
    paddub a1,s0,zero
L18093c:
    .word 0x8e02003c
    beqz v0,L1809cc
    nop
    .word 0xae00003c
    .word 0x8e630000
    .word 0x3c020004
    beq v1,v0,L180978
    nop
    .word 0x3c017000
    .word 0xc4213fb0
    .word 0x3c024120
    .word 0x44820000
    nop
    add.s $f0,$f0,$f1
    .word 0xe6000048
L180978:
    .word 0x8f848494
    .word 0x3c020008
    .word 0x8c830000
    bne v1,v0,L1809cc
    nop
    .word 0x8c820458
    slti at,v0,10
    beqz at,L1809b4
    nop
    sll v0,v0,0x2
    addu v0,v0,a0
    .word 0xac530430
    .word 0x8c820458
    addiu v0,v0,1
    .word 0xac820458
L1809b4:
    .word 0x8e630000
    .word 0x3c020008
    bne v1,v0,L1809cc
    nop
    jal func_00180540
    paddub a0,s3,zero
L1809cc:
    .word 0x8f838498
    .word 0x8c620040
    beqz v0,L180a8c
    nop
    .word 0x8c620038
    .word 0x3c017000
    .word 0xc4343fb0
    .word 0xc6600324
    .word 0xc4670008
    .word 0xc4660004
    .word 0xc4440014
    .word 0xc4420010
    .word 0xc468000c
    c.le.s $f20,$f0
    .word 0xc4450018
    mul.s $f1,$f4,$f7
    mul.s $f0,$f2,$f6
    adda.s $f0,$f1
    madd.s $f3,$f5,$f8
    mul.s $f0,$f2,$f3
    sub.s $f0,$f6,$f0
    mul.s $f1,$f0,$f0
    mul.s $f0,$f4,$f3
    sub.s $f0,$f7,$f0
    mul.s $f2,$f5,$f3
    mul.s $f0,$f0,$f0
    sub.s $f2,$f8,$f2
    adda.s $f1,$f0
    bc1t L180a8c
    madd.s $f1,$f2,$f2
    .word 0x3c024080
    .word 0x44820000
    nop
    c.le.s $f1,$f0
    nop
    bc1t L180a8c
    nop
    addiu a1,zero,2
    jal func_0017a070
    paddub a0,s3,zero
    addiu a1,zero,2
    jal func_00179ef0
    paddub a0,s3,zero
    .word 0x3c023f00
    .word 0x44820000
    nop
    add.s $f0,$f0,$f20
    .word 0xe6600324
L180a8c:
    paddub v0,s3,zero
L180a90:
    .word 0x7bbf0050
    .word 0x7bb30040
    .word 0x7bb20030
    .word 0x7bb10020
    .word 0x7bb00010
    .word 0xc7b40000
    jr ra
    addiu sp,sp,128
}


