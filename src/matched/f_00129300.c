extern void func_001296b0(void);
asm void func(void) {
    .set noreorder
    addiu sp,sp,-256
    .word 0x7fbf00a0
    .word 0x7fbe0090
    .word 0x7fb70080
    .word 0x7fb60070
    .word 0x7fb50060
    .word 0x7fb40050
    .word 0x7fb30040
    .word 0x7fb20030
    .word 0x7fb10020
    .word 0x7fb00010
    .word 0xe7b50004
    .word 0xe7b40000
    .word 0xc4a10000
    .word 0xc480006c
    addiu v0,sp,244
    .word 0xafa400ec
    addiu s1,sp,252
    mul.s $f0,$f1,$f0
    paddub s6,a3,zero
    paddub s5,t0,zero
    .word 0xe7a000f0
    .word 0xc4a10008
    .word 0xc4800074
    addiu a1,sp,248
    mul.s $f0,$f1,$f0
    .word 0xe4400000
    .word 0xc4c10000
    .word 0xc480006c
    mul.s $f0,$f1,$f0
    .word 0xe7a000f8
    .word 0xc4800074
    .word 0xc4c10008
    addiu a0,sp,240
    mul.s $f0,$f1,$f0
    jal func_001296b0
    .word 0xe6200000
    bnez v0,L1293a4
    nop
    b L129678
    .word 0x70001628
L1293a4:
    .word 0xc7a300f0
    .word 0x8fa200ec
    .word 0xc7a100f8
    .word 0x46001824
    .word 0x8c430018
    mfc1 s0,$f0
    .word 0x46000824
    slt v0,s0,v1
    mfc1 s4,$f0
    bnez v0,L1293f0
    paddub s7,s4,zero
    slt v0,s4,v1
    bnez v0,L1293e8
    addiu s0,v1,-1
    b L129678
    .word 0x70001628
    addiu s0,v1,-1
L1293e8:
    b L129404
    addiu v0,sp,244
L1293f0:
    slt v0,s4,v1
    bnez v0,L129400
    nop
    addiu s7,v1,-1
L129400:
    addiu v0,sp,244
L129404:
    sub.s $f20,$f1,$f3
    .word 0xc4440000
    .word 0xc6210000
    .word 0x8fa200ec
    .word 0x46000824
    .word 0x8c430020
    mfc1 v0,$f0
    .word 0x46002024
    .word 0xafa200b0
    mfc1 s1,$f0
    nop
    slt v0,s1,v1
    bnez v0,L129460
    nop
    .word 0x8fa200b0
    slt v0,v0,v1
    bnez v0,L129458
    addiu s1,v1,-1
    b L129678
    .word 0x70001628
    addiu s1,v1,-1
L129458:
    b L12947c
    .word 0x8fa200b0
L129460:
    .word 0x8fa200b0
    slt v0,v0,v1
    bnez v0,L129478
    nop
    addiu v0,v1,-1
    .word 0xafa200b0
L129478:
    .word 0x8fa200b0
L12947c:
    bne v0,s1,L129490
    sub.s $f2,$f1,$f4
    b L129500
    .word 0xafa000d0
    sub.s $f2,$f1,$f4
L129490:
    .word 0x3c023f80
    .word 0x44820800
    .word 0x44800000
    nop
    div.s $f21,$f1,$f2
    nop
    nop
    c.lt.s $f2,$f0
    nop
    bc1t L1294d0
    addiu v0,zero,-1
    addiu v0,zero,1
    addiu s8,s1,1
    b L1294d8
    .word 0xafa200c0
    addiu v0,zero,-1
L1294d0:
    .word 0xafa200c0
    paddub s8,s1,zero
L1294d8:
    .word 0x449e0000
    nop
    cvt.s.w $f0,$f0
    sub.s $f0,$f0,$f4
    mul.s $f0,$f21,$f0
    mul.s $f0,$f20,$f0
    add.s $f0,$f3,$f0
    .word 0x46000024
    mfc1 s4,$f0
    .word 0xafa000d0
L129500:
    .word 0x70009e28
    .word 0x8fa200ec
L129508:
    .word 0x44800000
    nop
    c.lt.s $f20,$f0
    .word 0x8c450018
    mult v1,s1,a1
    .word 0x8c4200b4
    addu a0,s0,v1
    sll v1,a0,0x2
    addu v1,v1,a0
    sll v1,v1,0x1
    addu v1,v1,a0
    sll v1,v1,0x2
    bc1t L1295b4
    addu s2,v0,v1
    slt at,s7,s4
    beqz at,L12955c
    slt at,s4,s0
    addiu v0,zero,1
    paddub s4,s7,zero
    .word 0xafa200d0
    slt at,s4,s0
L12955c:
    bnez at,L1295a0
    nop
    nop
L129568:
    addiu s3,s3,1
    paddub a0,s2,zero
    paddub a1,s0,zero
    paddub a2,s1,zero
    jalr ra,s6
    paddub a3,s5,zero
    bnezl v0,L129594
    addiu s0,s0,1
    b L129678
    paddub v0,s3,zero
    addiu s0,s0,1
L129594:
    slt at,s4,s0
    beqz at,L129568
    addiu s2,s2,44
L1295a0:
    .word 0x8fa200d0
    bnez v0,L129678
    paddub v0,s3,zero
    b L129620
    paddub s0,s4,zero
L1295b4:
    slt at,s4,a1
    beqz at,L129620
    nop
    slt at,s4,s7
    beqz at,L1295d4
    slt v0,s0,s4
    paddub s4,s7,zero
    slt v0,s0,s4
L1295d4:
    bnezl v0,L12961c
    paddub s0,s4,zero
    nop
L1295e0:
    addiu s3,s3,1
    paddub a0,s2,zero
    paddub a1,s0,zero
    paddub a2,s1,zero
    jalr ra,s6
    paddub a3,s5,zero
    bnezl v0,L12960c
    addiu s0,s0,-1
    b L129678
    paddub v0,s3,zero
    addiu s0,s0,-1
L12960c:
    slt at,s0,s4
    beqz at,L1295e0
    addiu s2,s2,-44
    paddub s0,s4,zero
L12961c:
    nop
L129620:
    .word 0x8fa200b0
    beq s1,v0,L129674
    nop
    .word 0x8fa200c0
    .word 0xc7a000f0
    addu s1,s1,v0
    addiu v0,sp,244
    .word 0xc4410000
    .word 0x8fa200c0
    addu s8,s8,v0
    .word 0x449e1000
    nop
    cvt.s.w $f2,$f2
    sub.s $f1,$f2,$f1
    mul.s $f1,$f21,$f1
    mul.s $f1,$f20,$f1
    add.s $f0,$f0,$f1
    .word 0x46000024
    mfc1 s4,$f0
    b L129508
    .word 0x8fa200ec
L129674:
    paddub v0,s3,zero
L129678:
    .word 0x7bbf00a0
    .word 0x7bbe0090
    .word 0x7bb70080
    .word 0x7bb60070
    .word 0x7bb50060
    .word 0x7bb40050
    .word 0x7bb30040
    .word 0x7bb20030
    .word 0x7bb10020
    .word 0x7bb00010
    .word 0xc7b50004
    .word 0xc7b40000
    jr ra
    addiu sp,sp,256
}


