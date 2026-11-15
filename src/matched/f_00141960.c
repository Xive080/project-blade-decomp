extern void func_001ce160(void);
asm void f(void) {
    .set noreorder
    .set noat
    addiu sp,sp,-96
    .word 0x7fbf0040
    .word 0x7fb30030
    .word 0x7fb20020
    .word 0x7fb10010
    .word 0x7fb00000
    beqz t1,L141a14
    .word 0x71008628
    .word 0xc4830000
    .word 0xc4a10000
    .word 0xc4840008
    .word 0xc6060008
    .word 0xc4a00008
    .word 0xc6050000
    .word 0x44803800
    sub.s $f1,$f1,$f3
    sub.s $f2,$f4,$f6
    mula.s $f2,$f1
    sub.s $f0,$f0,$f4
    sub.s $f1,$f5,$f3
    madd.s $f0,$f1,$f0
    c.le.s $f0,$f7
    nop
    bc1t L1419cc
    nop
    b L141a14
    .word 0xad200000
L1419cc:
    .word 0xc4c30000
    .word 0xc4e20000
    .word 0xc4c40008
    .word 0xc4e10008
    sub.s $f0,$f5,$f3
    sub.s $f2,$f2,$f3
    sub.s $f3,$f4,$f6
    sub.s $f1,$f1,$f4
    mula.s $f3,$f2
    madd.s $f0,$f0,$f1
    c.le.s $f0,$f7
    nop
    bc1t L141a10
    addiu v0,zero,1
    b L141a14
    .word 0xad200000
    addiu v0,zero,1
L141a10:
    .word 0xad220000
L141a14:
    .word 0xc4840000
    .word 0xc4e20000
    .word 0xc4850008
    .word 0xc4a30008
    .word 0xc4a00000
    .word 0xc4e10008
    .word 0x44803800
    sub.s $f6,$f2,$f4
    sub.s $f3,$f5,$f3
    mula.s $f3,$f6
    sub.s $f3,$f1,$f5
    sub.s $f0,$f0,$f4
    madd.s $f0,$f0,$f3
    c.le.s $f0,$f7
    nop
    bc1t L141a64
    .word 0x70001e28
    b L141a64
    addiu v1,zero,1
    .word 0x70001e28
L141a64:
    .word 0xc6020008
    .word 0xc6010000
    .word 0x44800000
    sub.s $f2,$f5,$f2
    sub.s $f1,$f1,$f4
    mula.s $f2,$f6
    madd.s $f1,$f1,$f3
    c.le.s $f1,$f0
    nop
    bc1t L141a9c
    .word 0x70001628
    b L141a9c
    addiu v0,zero,1
    .word 0x70001628
L141a9c:
    bne v1,v0,L141ab0
    .word 0x70808e28
    b L141ab4
    .word 0x70a08e28
    .word 0x70808e28
L141ab0:
    .word 0x70c02628
L141ab4:
    bnez v1,L141ac8
    nop
    .word 0x72201628
    .word 0x70808e28
    .word 0x70402628
L141ac8:
    .word 0xc6260000
    .word 0xc4800000
    .word 0x3c023a83
    .word 0xc4e20000
    .word 0xc4830008
    .word 0xc6280008
    .word 0xc6270004
    sub.s $f5,$f6,$f0
    .word 0xc4840004
    .word 0xc4e10004
    addiu s2,sp,84
    sub.s $f6,$f6,$f2
    .word 0xc4e00008
    addiu s3,sp,88
    sub.s $f2,$f8,$f3
    ori v0,v0,0x126f
    sub.s $f4,$f7,$f4
    sub.s $f3,$f8,$f0
    sub.s $f7,$f7,$f1
    mula.s $f4,$f3
    msub.s $f1,$f2,$f7
    .word 0xe7a10050
    mula.s $f2,$f6
    msub.s $f1,$f5,$f3
    mula.s $f5,$f7
    .word 0xe6410000
    msub.s $f1,$f4,$f6
    .word 0xe6610000
    .word 0xc7a20050
    .word 0xc6410000
    .word 0xc6630000
    .word 0x44820000
    mul.s $f2,$f2,$f2
    mul.s $f1,$f1,$f1
    adda.s $f2,$f1
    madd.s $f1,$f3,$f3
    c.lt.s $f1,$f0
    nop
    bc1f L141b7c
    addiu a0,sp,80
    .word 0xafa00050
    .word 0x3c023f80
    .word 0xae420000
    .word 0xae600000
    addiu a0,sp,80
L141b7c:
    jal func_001ce160
    .word 0x70802e28
    .word 0xc6450000
    .word 0xc6230004
    .word 0xc7a60050
    .word 0xc6240000
    .word 0xc6670000
    .word 0xc6010008
    .word 0xc6220008
    mul.s $f3,$f3,$f5
    .word 0xc6000000
    .word 0xc6080004
    .word 0x7bbf0040
    .word 0x7bb30030
    mul.s $f4,$f4,$f6
    .word 0x7bb20020
    .word 0x7bb10010
    .word 0x7bb00000
    adda.s $f4,$f3
    madd.s $f2,$f2,$f7
    mula.s $f6,$f0
    mul.s $f1,$f7,$f1
    addiu sp,sp,96
    madd.s $f0,$f5,$f8
    add.s $f0,$f1,$f0
    sub.s $f0,$f2,$f0
    div.s $f0,$f0,$f5
    jr ra
    add.s $f0,$f8,$f0
}
