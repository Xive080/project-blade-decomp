extern void func_001d8240(void);
extern void func_001d5d50(void);
extern void func_001d5ee0(void);
asm void func(void) {
    .set noreorder
    addiu sp,sp,-96
    .word 0x7fbf0040
    .word 0x7fb30030
    .word 0x7fb20020
    .word 0x7fb10010
    .word 0x7fb00000
    .word 0x8ca30008
    addiu v0,zero,-1
    paddub s0,a0,zero
    .word 0x8c630000
    bne v1,v0,L1d29c8
    paddub s1,a1,zero
    b L1d29fc
    .word 0x70009628
L1d29c8:
    sll v0,v1,0x3
    subu v0,v0,v1
    sll v0,v0,0x2
    addu v1,v0,s1
    .word 0x8c620018
    .word 0xac62001c
    .word 0x8e220008
    .word 0x8c430000
    sll v0,v1,0x3
    subu v0,v0,v1
    sll v0,v0,0x2
    addu v0,s1,v0
    addiu s2,v0,20
L1d29fc:
    .word 0x8e230008
    addiu v0,zero,-1
    .word 0x8c630004
    bne v1,v0,L1d2a18
    sll v0,v1,0x3
    b L1d2a48
    .word 0x70009e28
L1d2a18:
    subu v0,v0,v1
    sll v0,v0,0x2
    addu v1,v0,s1
    .word 0x8c620018
    .word 0xac62001c
    .word 0x8e220008
    .word 0x8c430004
    sll v0,v1,0x3
    subu v0,v0,v1
    sll v0,v0,0x2
    addu v0,s1,v0
    addiu s3,v0,20
L1d2a48:
    paddub a0,s1,zero
    addiu a1,zero,2
    jal func_001d8240
    paddub a2,s0,zero
    paddub a0,s1,zero
    paddub s1,v0,zero
    addiu a1,zero,3
    jal func_001d8240
    paddub a2,s0,zero
    .word 0x8c420008
    .word 0x8c4300b4
    bnez v1,L1d2b70
    .word 0x96250002
    sll a0,a1,0x1
    .word 0x70001e28
    b L1d2b58
    addu a0,a0,a1
L1d2a8c:
    .word 0x8e250008
    .word 0x96690002
    .word 0x8e6b0004
    .word 0x94a80000
    .word 0x94a70002
    .word 0x94a60004
    mult t0,t1,t0
    mult1 a3,t1,a3
    addu t2,t3,a3
    .word 0xc5440000
    .word 0x01263018

    addu a3,t3,t0
    .word 0xc4e30000
    .word 0xc5450004
    addu a2,t3,a2
    .word 0xc4c10004
    .word 0xc4e20004
    .word 0xc4c00000
    sub.s $f3,$f3,$f4
    sub.s $f1,$f1,$f5
    sub.s $f0,$f0,$f4
    sub.s $f2,$f2,$f5
    mula.s $f3,$f1
    msub.s $f0,$f2,$f0
    .word 0xe7a00054
    .word 0x8fa60054
    .word 0x5cc00015
    addu a1,a1,a0
    sll a2,t4,0x1
    addu a2,t4,a2
    addiu a2,a2,-3
    sll a3,a2,0x1
    .word 0x8e260004
    addiu v1,v1,-1
    addu a3,a2,a3
    .word 0x94e60000
    .word 0xa4a60000
    .word 0x94e60002
    .word 0x8e250008
    .word 0xa4a60002
    .word 0x94e60004
    .word 0x8e250008
    .word 0xa4a60004
    .word 0x8c4500ac
    addiu a1,a1,-1
    b L1d2b50
    .word 0xac4500ac
    addu a1,a1,a0
    .word 0xae250008
L1d2b50:
    addiu v1,v1,1
    nop
L1d2b58:
    .word 0x8c4c00ac
    sltu a1,v1,t4
    bnez a1,L1d2a8c
    nop
    b L1d2dcc
    .word 0x8e240010
L1d2b70:
    sll v1,a1,0x1
    .word 0x70004628
    b L1d2db8
    addu v1,v1,a1
L1d2b80:
    .word 0x8e290008
    .word 0x964d0002
    .word 0x8e580004
    .word 0x95250000
    .word 0x95260002
    .word 0x95270004
    mult t3,t5,a1
    mult1 t2,t5,a2
    addu t7,t8,t2
    .word 0x91ec000c
    .word 0x01a75018

    addu t6,t8,t3
    addu t8,t8,t2
    .word 0x91cd000c
    .word 0x930b000c
    and t2,t5,t4
    and t2,t3,t2
    bnezl t2,L1d2d68
    sll a1,a0,0x1
    or t2,t5,t4
    or t2,t3,t2
    beqz t2,L1d2cac
    nop
    .word 0xc5c80000
    .word 0xc5e30000
    .word 0xc7020000
    .word 0xc5c70004
    .word 0xc5e40004
    .word 0xc7010004
    .word 0xc5e60008
    .word 0xc7000008
    sub.s $f10,$f8,$f3
    .word 0xc5c90008
    sub.s $f2,$f2,$f3
    sub.s $f11,$f7,$f4
    sub.s $f5,$f0,$f6
    sub.s $f3,$f1,$f4
    sub.s $f4,$f9,$f6
    mula.s $f11,$f5
    msub.s $f1,$f4,$f3
    mul.s $f0,$f11,$f2
    mula.s $f4,$f2
    mul.s $f2,$f1,$f8
    msub.s $f1,$f10,$f5
    mul.s $f1,$f1,$f7
    adda.s $f2,$f1
    mul.s $f1,$f10,$f3
    sub.s $f0,$f1,$f0
    madd.s $f0,$f0,$f9
    .word 0xe7a0005c
    .word 0x8fa5005c
    .word 0x5ca00015
    addu a0,t1,v1
    sll a1,a0,0x1
    addu a0,a0,a1
    addiu a0,a0,-3
    sll a1,a0,0x1
    .word 0x8e240004
    addiu t0,t0,-1
    addu a2,a0,a1
    .word 0x94c40000
    .word 0xa5240000
    .word 0x94c50002
    .word 0x8e240008
    .word 0xa4850002
    .word 0x94c50004
    .word 0x8e240008
    .word 0xa4850004
    .word 0x8c4400ac
    addiu a0,a0,-1
    b L1d2db0
    .word 0xac4400ac
    addu a0,t1,v1
    b L1d2db0
    .word 0xae240008
L1d2cac:
    .word 0x966b0002
    .word 0x8e6c0004
    mult t2,t3,a1
    mult1 a1,t3,a2
    addu t5,t4,a1
    .word 0x01672818

    addu a2,t4,t2
    .word 0xc5a40000
    .word 0xc4c30000
    addu a1,t4,a1
    .word 0xc5a50004
    .word 0xc4a10004
    .word 0xc4c20004
    .word 0xc4a00000
    sub.s $f3,$f3,$f4
    sub.s $f1,$f1,$f5
    sub.s $f0,$f0,$f4
    sub.s $f2,$f2,$f5
    mula.s $f3,$f1
    msub.s $f0,$f2,$f0
    .word 0xe7a00058
    .word 0x8fa50058
    .word 0x5ca00015
    addu a0,t1,v1
    sll a1,a0,0x1
    addu a0,a0,a1
    addiu a0,a0,-3
    sll a1,a0,0x1
    .word 0x8e240004
    addiu t0,t0,-1
    addu a2,a0,a1
    .word 0x94c40000
    .word 0xa5240000
    .word 0x94c50002
    .word 0x8e240008
    .word 0xa4850002
    .word 0x94c50004
    .word 0x8e240008
    .word 0xa4850004
    .word 0x8c4400ac
    addiu a0,a0,-1
    b L1d2db0
    .word 0xac4400ac
    addu a0,t1,v1
    b L1d2db0
    .word 0xae240008
    sll a1,a0,0x1
L1d2d68:
    addu a0,a0,a1
    addiu a0,a0,-3
    sll a1,a0,0x1
    .word 0x8e240004
    addiu t0,t0,-1
    addu a2,a0,a1
    .word 0x94c40000
    .word 0xa5240000
    .word 0x94c50002
    .word 0x8e240008
    .word 0xa4850002
    .word 0x94c50004
    .word 0x8e240008
    .word 0xa4850004
    .word 0x8c4400ac
    addiu a0,a0,-1
    .word 0xac4400ac
    nop
L1d2db0:
    addiu t0,t0,1
    nop
L1d2db8:
    .word 0x8c4400ac
    sltu a1,t0,a0
    bnez a1,L1d2b80
    nop
    .word 0x8e240010
L1d2dcc:
    .word 0x8c4500ac
    sll v1,a0,0x1
    addu v1,v1,a0
    sltu at,a1,v1
    beqz at,L1d2dec
    sll v1,a1,0x1
    addu v1,v1,a1
    .word 0xae230010
L1d2dec:
    .word 0x8c4200ac
    bnez v0,L1d2e64
    .word 0x3c020033
    .word 0x3c020033
    addiu s2,v0,-6624
    .word 0x8e420008
    beqz v0,L1d2e40
    .word 0x8e510000
    paddub a1,s0,zero
    paddub a0,s1,zero
    jal func_001d5d50
    addiu a2,zero,1
    beqz v0,L1d2e40
    paddub a0,v0,zero
    .word 0x8c420000
    .word 0x8c420004
    jalr ra,v0
    addiu a1,s2,16
    bnez v0,L1d2e40
    nop
    .word 0xae420008
L1d2e40:
    .word 0x8e220014
    slti at,v0,2
    bnez at,L1d2ec4
    addiu v0,zero,2
    .word 0xae220014
    jal func_001d5ee0
    .word 0x8e240018
    b L1d2ec8
    .word 0x7bbf0040
L1d2e64:
    addiu s2,v0,-6624
    .word 0x8e420008
    beqz v0,L1d2ea8
    .word 0x8e510000
    paddub a1,s0,zero
    paddub a0,s1,zero
    jal func_001d5d50
    .word 0x70003628
    beqz v0,L1d2ea8
    paddub a0,v0,zero
    .word 0x8c420000
    .word 0x8c420004
    jalr ra,v0
    addiu a1,s2,16
    bnez v0,L1d2ea8
    nop
    .word 0xae420008
L1d2ea8:
    .word 0x8e220014
    slti at,v0,2
    bnez at,L1d2ec4
    addiu v0,zero,2
    .word 0xae220014
    jal func_001d5ee0
    .word 0x8e240018
L1d2ec4:
    .word 0x7bbf0040
L1d2ec8:
    .word 0x7bb30030
    .word 0x7bb20020
    .word 0x7bb10010
    .word 0x7bb00000
    addiu v0,zero,1
    jr ra
    addiu sp,sp,96
}


