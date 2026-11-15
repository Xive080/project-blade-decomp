extern void func_00130eb0(void);
extern void func_00149e60(void);
extern void func_0015daa0(void);
extern void func_0015dd80(void);
extern void func_001c3b70(void);
extern void func_001c7320(void);
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
    .word 0xe7b40000
    .word 0x8c900070
    jal func_00149e60
    .word 0x70809e28
    .word 0x8c420018
    jalr ra,v0
    .word 0x8e640008
    .word 0x8e640070
    .word 0x70408e28
    .word 0x8c82000c
    .word 0x8c420018
    jalr ra,v0
    nop
    beqz s1,L136364
    .word 0x70409628
    beqz s2,L136364
    nop
    jal func_001c3b70
    .word 0x72202628
    .word 0x72402628
    jal func_001c3b70
    .word 0x70408e28
    .word 0xc66200b8
    .word 0xc66100bc
    .word 0xc66000c0
    addiu a0,sp,96
    .word 0x70409628
    addiu a2,zero,1
    .word 0xe4820000
    .word 0xe4810004
    .word 0x70802e28
    .word 0x72403e28
    jal func_001ce3f0
    .word 0xe4800008
    addiu a0,s2,32
    addiu a1,s1,32
    jal func_0015daa0
    addiu a2,s2,16
    .word 0x3c024334
    .word 0x44820800
    nop
    c.le.s $f0,$f1
    nop
    bc1t L135de0
    .word 0x3c02c120
    .word 0x3c0243b4
    .word 0x44820800
    nop
    sub.s $f0,$f0,$f1
    .word 0x3c02c120
L135de0:
    .word 0x44820800
    nop
    c.lt.s $f0,$f1
    nop
    bc1f L135e08
    .word 0x3c024120
    addiu v0,zero,3
    b L135e34
    .word 0xae6200b4
    .word 0x3c024120
L135e08:
    .word 0x44820800
    nop
    c.le.s $f0,$f1
    nop
    bc1t L135e30
    addiu v0,zero,1
    addiu v0,zero,2
    b L135e34
    .word 0xae6200b4
    addiu v0,zero,1
L135e30:
    .word 0xae6200b4
L135e34:
    .word 0x8e6400b4
    addiu v0,zero,2
    bne a0,v0,L135e74
    addiu v0,zero,3
    .word 0x8e630008
    .word 0x3c017000
    .word 0xc4213fa8
    .word 0x3c02c000
    .word 0x44820000
    .word 0x8c63051c
    addiu v0,zero,1
    bne v1,v0,L135ea4
    mul.s $f20,$f0,$f1
    b L135ea4
    neg.s $f20,$f20
    addiu v0,zero,3
L135e74:
    bne a0,v0,L135ea8
    addiu v1,zero,1
    .word 0x8e630008
    .word 0x3c017000
    .word 0xc4213fa8
    .word 0x3c024000
    .word 0x44820000
    .word 0x8c63051c
    addiu v0,zero,1
    bne v1,v0,L135ea4
    mul.s $f20,$f0,$f1
    neg.s $f20,$f20
L135ea4:
    addiu v1,zero,1
L135ea8:
    bne a0,v1,L135f5c
    nop
    .word 0x8e640008
    .word 0x44800800
    .word 0x8c82051c
    bne v0,v1,L135ec8
    nop
    neg.s $f1,$f1
L135ec8:
    .word 0xc480052c
    c.lt.s $f0,$f1
    nop
    bc1f L135f10
    nop
    sub.s $f2,$f1,$f0
    .word 0x3c017000
    .word 0x3c024000
    .word 0xc4213fa8
    .word 0x44820000
    nop
    mul.s $f20,$f0,$f1
    c.le.s $f20,$f2
    nop
    bc1t L135f5c
    nop
    b L135f5c
    mov.s $f20,$f2
L135f10:
    c.le.s $f0,$f1
    nop
    bc1t L135f58
    nop
    sub.s $f2,$f1,$f0
    .word 0x3c017000
    .word 0x3c024000
    .word 0xc4203fa8
    .word 0x44820800
    nop
    neg.s $f1,$f1
    mul.s $f20,$f1,$f0
    c.lt.s $f20,$f2
    nop
    bc1f L135f5c
    nop
    b L135f5c
    mov.s $f20,$f2
L135f58:
    .word 0x4480a000
L135f5c:
    .word 0x8e630008
    .word 0x3c027000
    ori a0,v0,0x3fb0
    .word 0x3c023e80
    .word 0x44820000
    .word 0xc461052c
    add.s $f1,$f1,$f20
    .word 0xe461052c
    .word 0xc4810000
    add.s $f0,$f0,$f1
    .word 0xe66000b0
    .word 0xc6420000
    .word 0xc6410004
    .word 0xc6400008
    .word 0xe66200d0
    .word 0xe66100d4
    .word 0xe66000d8
    .word 0xc6420010
    .word 0xc6410014
    .word 0xc6400018
    .word 0xe66200e0
    .word 0xe66100e4
    .word 0xe66000e8
    .word 0xc6420020
    .word 0xc6410024
    .word 0xc6400028
    .word 0xe66200f0
    .word 0xe66100f4
    jal func_00149e60
    .word 0xe66000f8
    .word 0x8c420028
    .word 0x8e640008
    jalr ra,v0
    addiu a1,zero,2
    .word 0xc4420030
    .word 0xc6210030
    .word 0xc7a00060
    .word 0xc4460034
    .word 0xc6250034
    .word 0xc4440038
    .word 0xc6230038
    sub.s $f1,$f2,$f1
    addiu a0,s3,208
    sub.s $f0,$f0,$f1
    .word 0xe6600100
    .word 0xc7a00064
    sub.s $f5,$f6,$f5
    sub.s $f3,$f4,$f3
    sub.s $f0,$f0,$f5
    .word 0xe6600104
    .word 0xc7a00068
    sub.s $f0,$f0,$f3
    jal func_001c7320
    .word 0xe6600108
    .word 0x3c017000
    .word 0xc4213fb0
    .word 0xc66000b0
    c.le.s $f1,$f0
    nop
    bc1t L1360e0
    nop
    .word 0x8e720008
    .word 0x3c050004
    .word 0x8e42003c
    beq v0,a1,L1360a4
    nop
    .word 0x8e420010
    andi v0,v0,0x2
    bnez v0,L1360a4
    nop
    .word 0x8e42000c
    .word 0x8c420010
    jalr ra,v0
    .word 0x72402628
    beqz v0,L1360a4
    nop
    .word 0x8e42000c
    addiu a2,zero,3
    .word 0x72402628
    .word 0x8c420014
    jalr ra,v0
    .word 0x3c050004
L1360a4:
    jal func_0015dd80
    nop
    .word 0x8c420020
    addiu a2,zero,5
    .word 0x72002628
    .word 0x72602e28
    jalr ra,v0
    .word 0x70003e28
    .word 0x3c017000
    .word 0xc4213fb0
    .word 0x3c0240a0
    .word 0x44820000
    nop
    add.s $f0,$f0,$f1
    .word 0xe66000ac
L1360e0:
    jal func_0015dd80
    nop
    .word 0x8c420020
    addiu a2,zero,6
    .word 0x72002628
    .word 0x72602e28
    jalr ra,v0
    .word 0x70003e28
    beqz v0,L136238
    nop
    .word 0x8e720008
    addiu a1,zero,32
    .word 0x8e42003c
    beq v0,a1,L13615c
    nop
    .word 0x8e420010
    andi v0,v0,0x2
    bnez v0,L13615c
    nop
    .word 0x8e42000c
    .word 0x8c420010
    jalr ra,v0
    .word 0x72402628
    beqz v0,L13615c
    nop
    .word 0x8e42000c
    addiu a1,zero,32
    .word 0x72402628
    .word 0x8c420014
    jalr ra,v0
    .word 0x70003628
L13615c:
    jal func_0015dd80
    nop
    .word 0x8c420020
    addiu a2,zero,5
    .word 0x72002628
    .word 0x72602e28
    jalr ra,v0
    .word 0x70003e28
    jal func_0015dd80
    nop
    .word 0x8c420020
    addiu a2,zero,7
    .word 0x72002628
    .word 0x72602e28
    jalr ra,v0
    .word 0x70003e28
    beqz v0,L1361c0
    nop
    .word 0x8e62000c
    .word 0xac40000c
    .word 0x8e62000c
    .word 0xac400010
    .word 0x8e62000c
    b L136218
    .word 0xac400014
L1361c0:
    .word 0x8e0303dc
    .word 0x3c024080
    .word 0x44820800
    beqz v1,L1361e8
    nop
    .word 0xc4600014
    .word 0x3c023f00
    .word 0x44820800
    nop
    mul.s $f1,$f1,$f0
L1361e8:
    .word 0xc6200020
    .word 0x8e62000c
    mul.s $f0,$f0,$f1
    .word 0xe440000c
    .word 0xc6200024
    .word 0x8e62000c
    mul.s $f0,$f0,$f1
    .word 0xe4400010
    .word 0xc6200028
    .word 0x8e62000c
    mul.s $f0,$f0,$f1
    .word 0xe4400014
L136218:
    .word 0x3c017000
    .word 0xc4213fb0
    .word 0x3c023f80
    .word 0x44820000
    addiu v0,zero,1
    add.s $f0,$f0,$f1
    b L13646c
    .word 0xe66000ac
L136238:
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
    bc1f L136364
    nop
    .word 0x3c024080
    .word 0x44820800
    .word 0x8e0203dc
    beqz v0,L1362a0
    nop
    .word 0xc4400014
    .word 0x3c023f66
    ori v0,v0,0x6666
    .word 0x44820800
    nop
    mul.s $f1,$f1,$f0
L1362a0:
    .word 0xc6200020
    .word 0x8e62000c
    addiu a1,zero,32
    mul.s $f0,$f0,$f1
    .word 0xe440000c
    .word 0xc6200024
    .word 0x8e62000c
    mul.s $f0,$f0,$f1
    .word 0xe4400010
    .word 0xc6200028
    .word 0x8e62000c
    mul.s $f0,$f0,$f1
    .word 0xe4400014
    .word 0x8e710008
    .word 0x8e22003c
    beq v0,a1,L136324
    nop
    .word 0x8e220010
    andi v0,v0,0x2
    bnez v0,L136324
    nop
    .word 0x8e22000c
    .word 0x8c420010
    jalr ra,v0
    .word 0x72202628
    beqz v0,L136324
    nop
    .word 0x8e22000c
    addiu a1,zero,32
    .word 0x72202628
    .word 0x8c420014
    jalr ra,v0
    .word 0x70003628
L136324:
    jal func_0015dd80
    nop
    .word 0x8c420020
    addiu a2,zero,5
    .word 0x72002628
    .word 0x72602e28
    jalr ra,v0
    .word 0x70003e28
    .word 0x3c017000
    .word 0xc4213fb0
    .word 0x3c023f80
    .word 0x44820000
    addiu v0,zero,1
    add.s $f0,$f0,$f1
    b L13646c
    .word 0xe66000ac
L136364:
    .word 0x8e630014
    .word 0x3c017000
    .word 0x3c0242c8
    .word 0x44820800
    .word 0xc4233fa8
    .word 0x3c02c220
    .word 0xc4620078
    .word 0x44820000
    nop
    mul.s $f0,$f0,$f3
    sub.s $f1,$f1,$f2
    c.lt.s $f1,$f0
    nop
    bc1f L1363a8
    addiu a0,v1,120
    b L1363cc
    mov.s $f1,$f0
L1363a8:
    .word 0x3c024220
    .word 0x44820000
    nop
    mul.s $f0,$f0,$f3
    c.le.s $f1,$f0
    nop
    bc1t L1363cc
    nop
    mov.s $f1,$f0
L1363cc:
    .word 0xc4800000
    addiu v0,zero,-1
    add.s $f0,$f0,$f1
    .word 0xe4800000
    .word 0x8e640014
    .word 0x8c830064
    beq v1,v0,L13646c
    addiu v0,zero,1
    .word 0x3c023faa
    ori v0,v0,0xaaab
    .word 0x44826800
    .word 0xc48c0078
    sll v0,v1,0x3
    addu v0,v0,v1
    sll v0,v0,0x1
    addu v0,v0,v1
    sll v1,v0,0x2
    .word 0x3c020030
    addiu v0,v0,-23692
    addu v0,v0,v1
    jal func_00130eb0
    .word 0x8c440000
    .word 0x8e650014
    .word 0x3c020030
    addiu a0,v0,-23676
    .word 0x3c020030
    addiu v0,v0,-23672
    .word 0x8ca60064
    .word 0x3c074299
    .word 0x3c033f80
    sll a1,a2,0x3
    addu a1,a1,a2
    sll a1,a1,0x1
    addu a1,a1,a2
    sll a1,a1,0x2
    addu a0,a0,a1
    addu v0,v0,a1
    .word 0xac870000
    .word 0xac430000
    addiu v0,zero,1
L13646c:
    .word 0x7bbf0050
    .word 0x7bb30040
    .word 0x7bb20030
    .word 0x7bb10020
    .word 0x7bb00010
    .word 0xc7b40000
    jr ra
    addiu sp,sp,112
}
